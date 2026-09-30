class Solution {
public:
   vector<int>solve(string s){
    vector<int> results;

    for(int i = 0; i<s.length(); i++){
        if(s[i] =='+' || s[i] == '-' || s[i] == '*'){
            vector<int> left_results = solve(s.substr(0,i));
            vector<int> right_results = solve(s.substr(i+1));

            for( int &X : left_results){
                for(int &Y : right_results){
                    if(s[i]== '+'){
                        results.push_back(X+Y);
                    }else if(s[i] == '-'){
                        results.push_back(X-Y);
                    }else{
                        results.push_back(X*Y);
                    }
                }
            }
        }
        
        }
         if (results.empty()) {
            results.push_back(stoi(s));
   }
   return results;
}
    vector<int> diffWaysToCompute(string s) {
        return solve(s);
    }
};