#include<iostream>
#include<vector>
using namespace std;

//class Solution{//brute force approach
    //public:
    //bool searchMatrix(vector<vector<int>> & matrix, int target){
        //for(int i=0; i<matrix.size(); i++){//rows
            //for(int j=0; j<matrix[0].size(); j++){//columns
                //if(matrix[i][j]==target){
                    //return true;
        //}
               // }
            //}
            //return false;
        //}
        
    //};

    class Solution{
        public:
        bool searchMatrix(vector<vector<int>> & matrix, int target){
            int i=0,j=0;
            int rows = matrix.size();
            int columns = matrix[0].size();
            while(i < rows) {
                if(j < columns) {
                    if(matrix[i][j] == target) {
                        return true;
                    }
                    j++;
                }else{
                    j = 0;
                    i++;
                }
            }
            return false;
        }
    };
                
int main(){
    vector<vector<int>> matrix = {{1, 3, 5, 7},
                                    {10, 11, 16, 20},
                                    {23, 30, 34, 60}};
    
    Solution obj;
    int target = 3;
    bool found = obj.searchMatrix( matrix , target);
    if(found){
        cout << " target found " << endl;
    } else {
        cout << " target is not found" << endl;
    }
   
    return 0;

}