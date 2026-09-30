class Solution {
public:
    int t[23][23];
    int solve(int i,int j, vector<int>& nums){
        
        if(i > j)
        return 0;

        if(i == j)
        return nums[i];

        if(t[i][j] != -1)
        return t[i][j];

        int take_i = nums[i] - solve(i+1,j,nums);

        int take_j = nums[j] - solve(i,j-1,nums);

        return t[i][j] = max(take_i, take_j);
    }

    bool predictTheWinner(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        int n = nums.size();
        return solve(0,n-1,nums) >= 0;
    }
};