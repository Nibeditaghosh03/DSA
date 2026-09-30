#include<iostream>
using namespace std;

class Solution{
    public:
    double myPow(double x, int n){
        double result = 1.0;
           int power=n;
        if(power < 0){
            power = -power;
        }
    

    for(int i=0; i<n; i++){
       result = result * x;
    }

    return result;
}
};

int main(){
    double x = 2;
    int n = -3;
    Solution obj;
    obj.myPow(x,n);
    return 0;
}