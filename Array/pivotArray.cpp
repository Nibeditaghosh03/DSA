#include<iostream>
#include<vector>
using namespace std;

//class Solution {
    //public: 
    //vector<int> pivotArray(vector<int>& nums, int pivot) {
       // vector<int> ans;
        //for(int i = 0; i < nums.size(); i++){
           // if(nums[i] < pivot){
               // ans.push_back(nums[i]);
           // }
       // }
        //for(int i = 0; i < nums.size(); i++){
          //  if(nums[i] == pivot){
               // ans.push_back(nums[i]);
           // }
        //}
        //for(int i = 0; i < nums.size(); i++){
           // if(nums[i] > pivot){
              //  ans.push_back(nums[i]);
           // }
       // }
           // return ans;
       // }
   // }; xs

    class Solution{
        public:
        vector<int> pivotArray(vector<int>&  nums, int pivot){
            vector<int> less, equal, greater;
            for(int num : nums){
                if( num < pivot)
                less.push_back(num);

                else if(num == pivot)
                equal.push_back(num);

                else
                greater.push_back(num);
            }

            less.insert(less.end(), equal.begin(), equal.end());
            less.insert(less.end(), greater.begin(), greater.end());

            return less;
        }
    };


    int main(){
        vector<int> nums = {9, 12, 5, 10, 14, 3, 10};
        int pivot = 10;
        Solution obj;
        vector<int> res = obj.pivotArray(nums,pivot);
        for(int x : res){
            cout << x << " ";
        }
        return 0;
    }