#include<iostream>
#include<string>
using namespace std;

class Parent {
public:
  Parent() {
    cout << "constructor of parent\n";
  }

  
  ~Parent() {
    cout << "destructor of parent\n";
  }
};

class Child : public Parent {
    public:
    Child() {
        cout << "constructor of child\n";
    }

    ~Child() {
        cout << "destructor of child\n";
    }
};

int main() {
    Child ch1;
    return 0;
}