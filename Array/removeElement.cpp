#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    int removeElement(vector<int>& nums, int val){
        int k =0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main(){
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    Solution obj;
    int ans = obj.removeElement(nums, val);
    cout << "k = " << ans << endl;
    return 0;
}