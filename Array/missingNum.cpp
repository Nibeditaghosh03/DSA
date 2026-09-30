#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int missingNum(vector<int>& arr){
        int n = arr.size() + 1;
        int expectedSum = n * (n+1) / 2;
        int actualSum = 0;
        for(int i = 0; i < arr.size(); i++){
        actualSum += arr[i];
        }

        return expectedSum - actualSum;
     }
};

int main(){
    vector<int> n = {1, 2, 3, 5};
    Solution obj;
    int num = obj.missingNum(n);
    cout << "Output :" << num << endl;
    return 0;
}