#include <iostream>
#include <vector>
using namespace std;

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

int main() {
    vector<vector<int>> grid = {
        {1, 3},
        {2, 2}
    };

    Solution obj;
    vector<int> ans = obj.findMissingAndRepeatedValues(grid);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}