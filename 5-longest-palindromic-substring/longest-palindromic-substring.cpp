class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        string ans = "";

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                int left = i;
                int right = j;
                bool isPalindrome = true;

                while (left < right) {
                    if (s[left] != s[right]) {
                        isPalindrome = false;
                        break;
                    }
                    left++;
                    right--;
                }

                if (isPalindrome) {
                    int len = j - i + 1;

                    if (len > ans.length()) {
                        ans = s.substr(i, len);
                    }
                }
            }
        }

        return ans;
    }
};