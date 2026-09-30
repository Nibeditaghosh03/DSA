#include<iostream>
#include<string>
using namespace std;

void removeDuplicates(string str, string ans, int i, int map[26]){
    if(i == str.size()){
        cout << "ans : " << ans << endl;
        return;
    }

    int mapIdx = (int) (str[i] - 'a');

    if(map[mapIdx]) { //duplicate
       removeDuplicates(str, ans, i+1, map);
    } else {
        map [mapIdx] = true;
        removeDuplicates(str, ans+str[i], i+1, map);
    }
}

int main(){
    string str = "appnnacollege";
    string ans = " ";
    int map[26] = {false};

    removeDuplicates(str, ans, 0, map);
    return 0;
}

//void removeDuplicates(string str, string ans, int map[26]){
     //if(str.size() == 0) {
       // cout << "ans : " << ans << endl;
       // return;
    // }

    // int n = str.size();
    // char ch = str[n - 1];
    //int mapIdx = (int) (str[n - 1] - 'a');
   // str = str.substr(0, n-1);

   // if(map[mapIdx]){ //duplicates
        //removeDuplicates(str, ans, map);
    //} else { // not duplicate
        //map[mapIdx] = true;
        //removeDuplicates(str, ch+ans, map);
  //  }

//}

//int main(){
    //string str = "appnnacollege";
    ////string ans = " ";
    //int map[26] = {false};

    //removeDuplicates(str, ans, map);
   // return 0;
//}