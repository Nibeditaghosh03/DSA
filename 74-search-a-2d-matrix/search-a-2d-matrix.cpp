class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0, j = 0;
        int rows = matrix.size();
        int columns = matrix[0]. size();

        while( i < rows){
            if(j < columns){
                if(matrix[i][j] == target){
                    return true;
                }
                j++;
            }else{
                j=0;
                i++;
            }
        }
        return false;
    }
};