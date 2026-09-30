#include<iostream>
#include<string>
using namespace std;

class Car {
    public:
       string name;
       string color;
       int *milage;

       Car(string name, string color){
        this->name = name;
        this->color = color;
        milage = new int;
        *milage = 12;
       }

       Car(Car &original){
        cout << "copying original to new..\n";
        name = original.name;
        color = original.color;
        milage = new int;
        *milage = *original.milage;
       }

       ~Car() {
        cout << "deleting object..\n";
        if(milage != NULL){
            delete milage;
            milage = NULL;
        }
       }
};

int main(){
    Car c1("maruti 800","white");

   
    cout << c1.name << endl;//maruti800
    cout << c1.color<< endl;//white
    cout << *c1.milage << endl;
    return 0;
}