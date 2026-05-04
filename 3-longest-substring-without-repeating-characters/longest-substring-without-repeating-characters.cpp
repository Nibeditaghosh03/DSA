class Solution {
public:
   int lengthOfLongestSubstring(string s) {
       int n = s.length();
       int left = 0, right = 0, maxLength = 0;
       unordered_set<char> charSet;


       while (right < n) {
           if (charSet.find(s[right]) == charSet.end()) { // Unique character
               charSet.insert(s[right]);
               maxLength = max(maxLength, right - left + 1);
               right++;  // Expand the window
           } else { // Duplicate found
               charSet.erase(s[left]);
               left++;  // Shrink the window
           }
       }
       return maxLength;
   }
};




