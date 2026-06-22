class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int expected = 1;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            if( nums[i] <= 0){
                continue;
            }
            if(nums[i] == expected){
                expected++;
            }if(nums[i] > expected){
                 return expected;
            }
        }
        return expected;
        }
};