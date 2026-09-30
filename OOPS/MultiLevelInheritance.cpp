#include<iostream>
#include<string>
using namespace std;

class Animal {
   public:
   void eat() {
    cout <<" eats\n";
   }

   void breathe() {
    cout << "breathes\n";
   }
};

class Mammal : public Animal {
public:
   string bloodType = "warm";
   Mammal() {
    bloodType = "warm";
   }
};

class Dog : public Mammal {
    public:
    void tailWag() {
        cout << "a Dog wags its tail\n";
    }
};

int main() {
     Dog d1;

     d1.eat();
     d1.breathe();
     d1.tailWag();
     cout << d1.bloodType << endl;

    return 0;
}