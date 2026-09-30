#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int maxProfit(vector<int> & prices){
        int maxProfit=0;
        int bestBuy=prices[0];

        for(int i=0; i<prices.size(); i++){
            if(prices[i]>bestBuy){
                maxProfit = max(maxProfit,prices[i]-bestBuy);
            }
            bestBuy = min(prices[i],bestBuy);
        }
        return maxProfit;
    }
};


int main(){
    vector<int> prices ={7, 1, 5,3, 6, 4};
    Solution obj;
    int maxProfit = obj.maxProfit(prices);
    cout <<" maxProfit is " << maxProfit << endl;
    return 0;
}