#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    void SortColors(vector<int>& nums){
        int n = nums.size();
        int low = 0, mid = 0, high = n-1;
        
        while( mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                mid++, low++;
            }else if(nums[mid] == 1){
                mid++;
            }else{
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }

};

int main(){
    vector<int>nums = {2, 0, 1};
    Solution obj;
     obj.SortColors(nums);
    for(int num : nums){
        cout << num <<" ";
    }
    cout << endl;
    
    return 0;
}