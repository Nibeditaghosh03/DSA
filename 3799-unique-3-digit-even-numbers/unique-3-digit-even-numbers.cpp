class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);

        // Count frequency of each digit
        for (int d : digits) {
            freq[d]++;
        }

        int ans = 0;

        // Check every 3-digit number
        for (int num = 100; num <= 999; num++) {

            // Number must be even
            if (num % 2 != 0)
                continue;

            int x = num;

            int a = x / 100;        // hundreds
            int b = (x / 10) % 10;  // tens
            int c = x % 10;         // units

            // Need enough copies of each digit
            vector<int> need(10, 0);

            need[a]++;
            need[b]++;
            need[c]++;

            bool possible = true;

            for (int d = 0; d <= 9; d++) {
                if (need[d] > freq[d]) {
                    possible = false;
                    break;
                }
            }

            if (possible)
                ans++;
        }

        return ans;
    }
};