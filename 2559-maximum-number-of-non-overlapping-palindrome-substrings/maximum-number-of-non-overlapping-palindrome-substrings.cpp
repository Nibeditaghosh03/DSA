class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.size();

        // pal[i][j] = whether s[i...j] is a palindrome
        vector<vector<bool>> pal(n, vector<bool>(n, false));

        // Build palindrome DP
        for (int i = n - 1; i >= 0; i--) {
            for (int j = i; j < n; j++) {

                if (s[i] == s[j] &&
                    (j - i <= 2 || pal[i + 1][j - 1])) {

                    pal[i][j] = true;
                }
            }
        }

        // dp[i] = maximum number of palindromes
        // using first i characters
        vector<int> dp(n + 1, 0);

        for (int i = 0; i < n; i++) {

            // Don't choose a palindrome ending at i
            dp[i + 1] = dp[i];

            // Try every palindrome ending at i
            for (int j = 0; j <= i; j++) {

                int len = i - j + 1;

                if (len >= k && pal[j][i]) {
                    dp[i + 1] = max(dp[i + 1],
                                    dp[j] + 1);
                }
            }
        }

        return dp[n];
    }
};