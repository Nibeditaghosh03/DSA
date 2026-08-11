class Solution {
public:
    int t[100001];

    bool solve(int n) {

        
        if(n == 0) {
            return false;
        }

       
        if(t[n] != -1) {
            return t[n];
        }

      
        for(int i = 1; i * i <= n; i++) {

            if(!solve(n - i * i)) {
                return t[n] = true;
            }
        }

        return t[n] = false;
    }

    bool winnerSquareGame(int n) {
        memset(t, -1, sizeof(t));
        return solve(n);
    }
};