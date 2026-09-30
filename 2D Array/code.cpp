#include<iostream>
using namespace std;

int main(){
    int arr[3] [4]={
        {1,2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int n = 3, m= 4;

    for(int i =0; i<n; i++) {
        for(int j=0; j<m; j++){
            cout << arr[i] [j] << " ";
        }
        cout << endl;
    }
    return 0;
}