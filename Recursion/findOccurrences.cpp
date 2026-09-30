#include<iostream>
using namespace std;

class Solution {
public:

    void findOccurrences(int arr[], int index, int size, int key) {

        
        if(index == size) {
            return;
        }

        
        if(arr[index] == key) {
            cout << index << " ";
        }

        
        findOccurrences(arr, index + 1, size, key);
    }
};

int main() {

    int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int size = 9;
    int key = 2;

    Solution obj;

    obj.findOccurrences(arr, 0, size, key);

    return 0;
}