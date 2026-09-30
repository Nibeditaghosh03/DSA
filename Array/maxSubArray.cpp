#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int maxSubArray(vector<int>& nums){
        int sum = 0;
        int maxsum = nums[0];
        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];
            if(sum > maxsum){
               maxsum = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }

        return maxsum;
    }
};

int main(){
    vector<int>nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    Solution obj;
    int result = obj.maxSubArray(nums);
    cout << "maxSubArray is"<< result << endl; 
    return 0;
}