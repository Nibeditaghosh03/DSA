#include<iostream>
#include<cstring>
using namespace std;

int main(){
   // char str1[100];
   // strcpy(str1, "apna college");
    //cout<< str1 << endl;

    //char str1[100]="hello ";
    //char str2[100]= "world";
    //strcat(str1,str2);
    //cout << str1 << endl;

    //char str1[100] = "mango";
    //char str2[100] ="strawberry";
    //cout << strcmp(str1,str2) << endl;

    //string str = "hello";
    //cout << str << endl;
    //str ="yellow";
    //cout << str << endl;



        //string str;
        //getline(cin,str,'$');
        //cout << str << endl;

   // string str = "NIBEDITA GHOSH!";
    //for(int i=0; i<str.length(); i++) {
      //  cout << str[i] << "-";
    //}
    //cout <<"\n";
    string str="I love coding in c++ & c++. I don't like c++";
    //for(char ch : str){
       // cout << ch << ",";
   // }
   // cout << endl;
      //cout << str.length() << endl;
      //cout << str[3] << endl;
      //cout << str.at[2] << endl;
      //cout << str.substr(1,5) << endl;
      int idx = str.find("python");
      cout << idx << endl;
    return 0;
}