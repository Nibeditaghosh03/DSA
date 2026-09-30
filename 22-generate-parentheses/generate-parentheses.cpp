class Solution {
private:
    bool isValid(string s) {
        int balance = 0;

        for(char ch : s) {
            if(ch == '(') {
                balance++;
            }
            else {
                balance--;
            }

            if(balance < 0) {
                return false;
            }
        }

        return balance == 0;
    }

    void solve(int n, string output, vector<string>& ans) {
        if(output.length() == 2 * n) {
            if(isValid(output)) {
                ans.push_back(output);
            }
            return;
        }

        solve(n, output + '(', ans);

        solve(n, output + ')', ans);
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string output = "";

        solve(n, output, ans);

        return ans;
    }
};