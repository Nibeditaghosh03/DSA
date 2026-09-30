#include<iostream>
using namespace std;

int binSearch(int arr[],  int st, int end, int key){
    if(st > end) {
        return -1;
    }

    int mid = st + (end - st) / 2;
    if(arr[mid] == key) {
        return mid;
    } else if(arr[mid] > key ) {
        return binSearch (arr, st, mid-1, key);
    } else {
        return binSearch(arr, mid+1, end, key);
    }
    
};

int main() {
     int arr[] = {1, 2, 3, 4, 5, 6,7};

     int n = 7;
     int key = 5;

     int ans = binSearch(arr, 0, n-1, key);

     cout << " Index = " << ans << endl;
     return 0;

}