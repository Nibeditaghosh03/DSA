class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>st;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                st.insert(nums[i]);
            }
        }
        int m = 1;
            while(st.count(m) ){
                m++;
            }
            return m;
        }
};