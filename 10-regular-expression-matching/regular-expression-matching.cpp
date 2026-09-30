class Solution {
    public:
    int dp[21] [21];
    bool solve(int i, int j, string &s, string &p){
        if(j == p.size()){
            return i == s.size();
        }
        if(dp[i][j] != -1) {
            return dp[i][j];
        }
        bool currMatch(i < s.size() &&(s[i] == p[j] || p[j] == '.'));
        if(j+1 < p.size() && p[j+1] == '*'){
            bool skip = solve(i, j+2, s, p);
            bool use = currMatch && solve(i + 1, j, s, p);
            return dp[i][j] = skip || use;
        }
        if(currMatch) {
            return dp[i][j] = solve(i+1,j+1,s,p);
        }
        return dp[i][j] = false;
    }
public:
    bool isMatch(string s, string p) {
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, s, p);
    }
};