class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int maxWater = 0;
        while(left < right){
          int w = (right - left);
          int ht = min(height[right],height[left]);
          int area = w * ht;
           maxWater = max(maxWater,area);
          if(height[left] < height[right]){
            left++;
          }else
          right--;
        }
        return maxWater;
    }
};