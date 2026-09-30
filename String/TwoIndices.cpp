#include<iostream>
#include<cstring>
using namespace std;

bool totwoindices(string str1,string str2){
     if(str1.length()!=str2.length()){
     cout <<"strings are not matched\n";
     return false;
     }

     int count[26]={0};
     for(int i=0; i<str1.length(); i++){
        int idx=str1[i] -'a';
        count[idx]++;
     }

     for(int i=0; i<str2.length(); i++){
        int idx = str2[i] -'a';
        if(count[idx]==0) {
            cout <<"not matched\n";
            return false;
        }
        count[idx]--;
     }
     cout <<"strings are matched\n";
     return true;
}

int main(){
    string str1="bank";
    string str2="knab";
    totwoindices(str1,str2);
    return 0;
}