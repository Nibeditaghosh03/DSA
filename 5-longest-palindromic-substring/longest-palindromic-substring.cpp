class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int maxLength = 0;
        int startIndex = 0;

        for(int i = 0; i < n; i++){
            int left = i;
            int right = i;

            while(left >= 0 && right < n && s[left] == s[right]){
                int currLength = right - left + 1;
                if(currLength > maxLength){
                    maxLength = currLength;
                    startIndex = left;
                }
                left--;
                right++;
            }
            left = i; 
            right = i+1;
            while(left >= 0 && right < n && s[left] == s[right]){
               int currLength = right - left + 1;
                if(currLength > maxLength){
                    maxLength = currLength;
                    startIndex = left;
                }
                left--;
                right++;
            }
        }
        return s.substr(startIndex,maxLength);
    }
};