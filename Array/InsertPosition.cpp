#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    int InsertPosition(vector<int>& nums, int target) {
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] >= target){
                return i;
            }
            
            
        }

        return nums.size();
    }
}; 

int main(){
    vector<int> nums = {1, 3, 5, 6 };
    int target = 5;
    Solution obj;
    int ans = obj.InsertPosition(nums, target);
    cout << "Index: " << ans << endl;
    return 0;
}