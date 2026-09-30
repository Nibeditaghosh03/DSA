#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    long long maxTotalvalue(vector<int>& nums, int k) {
        int max = nums[0];
        int min = nums[0];

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > max){
                max = nums[i];
            }
            if(nums[i] < min){
                min = nums[i];
            }
        }
        long long diff = max - min;
        return diff * k;
    }
};

int main(){
    vector<int> nums = { 1, 2, 3};
    int k = 2;

    Solution obj;
    int ans = obj.maxTotalvalue(nums, k);
    cout << "output: " << ans << endl;
    return 0;
}