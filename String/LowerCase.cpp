#include<iostream>
#include<cstring>
using namespace std;

void toLowerCase(char word[], int n){
    for(int i = 0; i < n; i++){
        char ch = word[i];
        
        if(ch >= 'A' && ch <= 'Z'){
            word[i] = ch - 'A' + 'a';
        }
    }
}

int main(){
    char word[] = "APPLE";
    toLowerCase(word, strlen(word));
    cout << word << endl;
    return 0;
}
