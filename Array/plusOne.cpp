#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    vector<int> plusOne(vector<int> & digits){
        int n = digits.size() - 1;
        for(int i = digits.size() - 1; i>= 0; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
            }
        }
    };

    int main(){
        vector<int> digits = { 1, 2, 3};
        Solution obj;
        vector<int> res = obj.plusOne(digits);
        cout << "Results:";
        for(int x : res) {
            cout << x << " ";
        }

        cout << endl;

        return 0;

    }
