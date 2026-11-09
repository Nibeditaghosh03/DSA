
class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {

        set<int> available;

        for (int i = 0; i < k; i++) {
            available.insert(i);
        }

        // {endTime, serverNumber}
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > busy;

        vector<int> count(k, 0);

        for (int i = 0; i < arrival.size(); i++) {

            int currTime = arrival[i];

            // Release servers that have finished processing
            while (!busy.empty() && busy.top().first <= currTime) {

                int server = busy.top().second;

                busy.pop();

                available.insert(server);
            }

            // If no server is available, drop the request
            if (available.empty()) {
                continue;
            }

            // Preferred server
            int preferred = i % k;

            // Find first available server >= preferred
            auto it = available.lower_bound(preferred);

            // Circular allocation
            if (it == available.end()) {
                it = available.begin();
            }

            int server = *it;

            // Remove server from available set
            available.erase(it);

            // Update request count
            count[server]++;

            // Mark server as busy
            busy.push({
                currTime + load[i],
                server
            });
        }

        // Find maximum requests handled
        int maxi = *max_element(count.begin(), count.end());

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            if (count[i] == maxi) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
