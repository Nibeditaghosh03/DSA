#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

     class Solution{
        public:
         vector<int> twoSum(vector<int>nums , int target){
            for(int i=0; i<nums.size(); i++){
                int cur=nums[i];
                int j=target-cur;
                for(int j=i+1; j<nums.size(); j++){
                    if(nums[j]==target-nums[i]){
                        return {i,j};
                    }
                }

               
            }

            return {};
         }
     };



int main(){
    vector<int>nums={2, 7, 11, 15};
    int target=9;
    
    Solution sol;
    vector<int> result=sol.twoSum(nums,target);
    if(!result.empty()){
        cout << result[0] <<" "<< result[1]<< endl;
    }else{
        cout << "NA" << endl;
    }
    return 0;
}