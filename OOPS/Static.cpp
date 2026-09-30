#include<iostream>
#include<string>
using namespace std;

//void counter() {
    //static int count = 0;
    //count ++;
    //cout << "count : " << count << endl;
//}

//class Example {
   // public:
    //static int x;
   // Example(){
       // cout << "constructor..\n";
   // }

   // ~Example() {
      //  cout << "destructor..\n";
    //}
//};

//int Example::x=0;
class A {
    string secret = "secret data";
    friend class B;
    friend void revealSecret(A &obj);
};

class B{ //becomes a friend class of A
    public:
    void showSecret(A &obj) {
        cout << obj.secret << endl;
    }
};

void revealSecret(A &obj){
    cout << obj.secret << endl;
}

int main(){
    A a1;
    B b1;

    b1.showSecret(a1);
    return 0;
    //int a = 0;
    //if(a == 0) {
     // static Example eg1;
    //}
    //counter();
    //counter();
    //counter();
    //Example eg1;
    //Example eg2;
    //Example eg3;

    //cout << eg1.x++ << endl;
    //cout << eg2.x++ << endl;
    //cout << eg3.x++ << endl;
   // cout <<"code ending..\n";
    //return 0;
}