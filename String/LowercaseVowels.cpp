#include <iostream>
using namespace std;

int countLowercaseVowels(string str) {
    int count = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    return count;
}

int main(){
    string input;
    cout << "Enter a string: ";
    getlinr

    int result = countLowercaseVowels(input);
    cout << "Number of lowercase vowels: " << result << endl;

    return 0;
}