class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        
        // Cyclic sort
        while (i < n) {
            // Only consider values that can help us define the answer: [1, n]
            if (nums[i] > 0 && nums[i] <= n) {
                
                int correctIndex = nums[i] - 1;

                // If the number is not at its correct index, swap it
                if (nums[i] != nums[correctIndex]) {
                    swap(nums[i], nums[correctIndex]);
                    continue; // Evaluate the newly swapped number
                }
            }
            // Move to the next element if it's placed correctly or out of bounds
            i++;
        }
        
        // Re-check to find the first anomaly
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }
        
        // If all 1 to n are present, the missing positive is n + 1
        return n + 1;
    }
};