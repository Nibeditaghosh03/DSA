#include <iostream>
#include<string>
using namespace std;

class Car {
    string name;
    string color;

    public:
      Car(string nameValue, string colorValue){
        cout << "constructor is called. object being created..\n";
         this->name = nameValue;
         this -> color = colorValue;
      }
    void start() {
        cout << "car has started..\n";
    }

    void stop(){
        cout << "car has stopped \n";
    }

    //Getter
    string getName(){
        return name;
    }
};

int main() {
    Car c1("maruti 800","white");
    cout << "car name : " << "BMW"<< endl;
    return 0;
}