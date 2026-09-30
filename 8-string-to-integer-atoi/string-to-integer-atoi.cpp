class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();

        // Skip leading spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Check sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }

        // Build number
        long long result = 0;

        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');

            // Handle overflow
            if (sign * result > INT_MAX) {
                return INT_MAX;
            }
            if (sign * result < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return sign * result;
    }
};