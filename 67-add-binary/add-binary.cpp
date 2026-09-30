class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.length() - 1;
        int n = b.length() - 1;
        int carry = 0;
        string ans;

        while( m >= 0 || n >= 0 || carry){
           if(m >= 0) carry += a[m--] - '0';
           if(n >= 0) carry += b[n--] - '0';

           ans += carry % 2 + '0';
           carry /= 2;
            
        }
        reverse(begin(ans),end(ans));
        return ans;
    }
};