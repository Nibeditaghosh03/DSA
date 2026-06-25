class Fenwick {
    vector<long long> bit;
    int n;

public:
    Fenwick(int n) : n(n), bit(n + 1, 0) {}

    void update(int idx, long long val) {
        while (idx <= n) {
            bit[idx] += val;
            idx += idx & -idx;
        }
    }

    long long query(int idx) {
        long long sum = 0;
        while (idx > 0) {
            sum += bit[idx];
            idx -= idx & -idx;
        }
        return sum;
    }
};

class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        vector<int> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + (nums[i] == target ? 1 : -1);
        }

        vector<int> vals = prefix;
        sort(vals.begin(), vals.end());
        vals.erase(unique(vals.begin(), vals.end()), vals.end());

        Fenwick bit(vals.size());

        long long ans = 0;

        for (int p : prefix) {
            int idx = lower_bound(vals.begin(), vals.end(), p) - vals.begin() + 1;

            // Count previous prefix sums smaller than current prefix sum
            ans += bit.query(idx - 1);

            bit.update(idx, 1);
        }

        return ans;
    }
};