#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    vector<int> targetIndex(vector<int>nums , int target){
    

        for(int i= 0; i< nums.size();i++){
        
            if(nums[i]==target){
                return{i};
            }
        }
        
        return {};
    }
};


int main(){
    vector<int>nums={4, 5, 6, 7, 0 , 1, 2};
    int target = 0;

    Solution sol;
    vector<int> result = sol.targetIndex(nums,target);
    if(!result.empty()){
        cout << result[4]<<" "<< endl;
    }else{
        cout << "NA" <<endl;
    }
    return 0;
}