class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1,
                       vector<vector<int>>& img2) {

        int n = img1.size();

        vector<pair<int, int>> A;
        vector<pair<int, int>> B;

        // Store coordinates of 1s in img1
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (img1[i][j] == 1) {
                    A.push_back({i, j});
                }
            }
        }

        // Store coordinates of 1s in img2
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (img2[i][j] == 1) {
                    B.push_back({i, j});
                }
            }
        }

        map<pair<int, int>, int> count;

        int ans = 0;

        // Try every pair of 1s
        for (auto a : A) {
            for (auto b : B) {

                int dr = b.first - a.first;
                int dc = b.second - a.second;

                count[{dr, dc}]++;

                ans = max(ans, count[{dr, dc}]);
            }
        }

        return ans;
    }
};