class Solution {
public:
    vector<vector<int>> ans;

    void dfs(vector<int>& candidates, int target,
             int idx, vector<int>& curr) {

        if (target == 0) {
            ans.push_back(curr);
            return;
        }

        if (target < 0) return;

        for (int i = idx; i < candidates.size(); i++) {
            curr.push_back(candidates[i]);

            dfs(candidates,
                target - candidates[i],
                i,          // reuse same element
                curr);

            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates,
                                       int target) {
        vector<int> curr;
        dfs(candidates, target, 0, curr);
        return ans;
    }
};