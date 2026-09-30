class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
       unordered_map<int,int> mpp;
       int i = 0;
       for(int j = 0; j < n; j++){
        int moreneeded = target - nums[j];
            if(mpp.find(moreneeded) != mpp.end()){
                return {mpp[moreneeded],j};
            }
            mpp[nums[j]] = j;
       }
       return {};
    }
};