class Solution {
public:
   int lengthOfLongestSubstring(string s) {
       int n = s.length();
       int left = 0, right = 0, maxLength = 0;
       unordered_set<char> charSet;


       while (right < n) {
           if (charSet.find(s[right]) == charSet.end()) { 
               charSet.insert(s[right]);
               maxLength = max(maxLength, right - left + 1);
               right++;  
           } else { 
               charSet.erase(s[left]);
               left++;  
           }
       }
       return maxLength;
   }
};




