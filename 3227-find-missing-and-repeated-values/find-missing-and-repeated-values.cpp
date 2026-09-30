class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
         int n = grid.size();
        int total = n * n;

        
        int freq[10001] = {0};  

       
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                freq[grid[i][j]]++;
            }
        }

        
        int missing = 0, repeated = 0;

        for(int i = 1; i <= total; i++){
            if(freq[i] == 2) repeated = i;
            else if(freq[i] == 0) missing = i;
        }

        return {repeated, missing};
    }
};

