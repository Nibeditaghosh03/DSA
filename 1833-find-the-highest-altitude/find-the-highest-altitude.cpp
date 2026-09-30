class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int currAltitude = 0;
        int maxAltitude = 0;
        for(int i = 0; i < n; i++){
        currAltitude += gain[i];
        if(currAltitude > maxAltitude){
            maxAltitude = currAltitude;
        }
        }
        return maxAltitude;
    }
};