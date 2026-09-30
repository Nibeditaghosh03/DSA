#include<iostream>
#include<string>
using namespace std;

class Shape {
    public:
       virtual void draw(); //pure virtual funstions
};

class Circle : public Shape {
    public:
      void draw() {
        cout << "draw circle\n";
      }
};

class Square : public Shape {
    public:
      void draw() {
        cout << "draw square\n";
      }
};

int main(){
    Circle cir1;
    cir1.draw();

    Square squ1;
    squ1.draw();

    Shape s1;
    s1.draw();
    return 0;
}