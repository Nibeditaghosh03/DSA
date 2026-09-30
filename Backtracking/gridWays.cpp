#include<iostream>
#include<string>
#include<vector>
using namespace std;

int gridWays(int r, int c, int n, int m,string ans){
    if(r == n-1 && c == m-1) {
        cout << ans << "\n ";
        return 1;
    }
    if(r >= n || c>= m){
        return 0;
    }
    int val1 = gridWays(r, c+1, n, m,ans+"R");

    int val2 = gridWays(r+1, c, n, m, ans+"D");

    return val1 + val2;
}


int main() {
    int n = 3;
    int m = 3;
    string ans = " ";
    cout << gridWays(0, 0, n, m, ans);
    return 0;
}