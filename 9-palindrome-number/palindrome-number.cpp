class Solution {
public:
    bool isPalindrome(int x) {
        if( x <0){
            return false;
        }
        int original = x;
        long rev = 0;
        int temp = x;
    while(temp > 0){
         int lastDig = temp % 10;
         temp /=10;
         rev = (rev*10) + lastDig;
    }

    return (long)original ==rev;
    }
};
 