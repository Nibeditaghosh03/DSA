class Solution {
public:
    int maxBuilding(int n, vector<vector<int>>& restrictions) {

        // Building 1 must have height 0
        restrictions.push_back({1, 0});

        sort(restrictions.begin(), restrictions.end());

        int m = restrictions.size();

        // Left -> Right pass
        for (int i = 1; i < m; i++) {
            int dist = restrictions[i][0] - restrictions[i - 1][0];

            restrictions[i][1] = min(
                restrictions[i][1],
                restrictions[i - 1][1] + dist
            );
        }

        // Right -> Left pass
        for (int i = m - 2; i >= 0; i--) {
            int dist = restrictions[i + 1][0] - restrictions[i][0];

            restrictions[i][1] = min(
                restrictions[i][1],
                restrictions[i + 1][1] + dist
            );
        }

        int ans = 0;

        // Find maximum peak between adjacent restrictions
        for (int i = 1; i < m; i++) {
            int id1 = restrictions[i - 1][0];
            int h1  = restrictions[i - 1][1];

            int id2 = restrictions[i][0];
            int h2  = restrictions[i][1];

            int dist = id2 - id1;

            int peak = (h1 + h2 + dist) / 2;

            ans = max(ans, peak);
        }

        // Buildings after the last restriction
        int lastId = restrictions[m - 1][0];
        int lastHeight = restrictions[m - 1][1];

        ans = max(ans, lastHeight + (n - lastId));

        return ans;
    }
};