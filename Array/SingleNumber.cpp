#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int SingleNumber(vector<int> & nums){
        int ans =0;
        for(int i=0; i<nums.size(); i++){
            ans=ans^nums[i];
        }
        return ans;
    }

};

int main(){
    vector<int>nums = {4, 4, 5, 10, 5, 3,10};

    Solution obj;
    int ans = obj.SingleNumber(nums);
    cout << "Single Number is:" << ans << endl;

    return 0;
}

