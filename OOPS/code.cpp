#include<iostream>
using namespace std;

class Student {
  // Properties
  private:
    string name;
    float cgpa;

  public:
    //Methods
    void getPercentage(){
        cout << (cgpa * 10) << " % \n";
    }

    //setters
    void setName(string nameVal) {
         name = nameVal;
    }

    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;;
    }

    //Getters
    string getName(){
        return name;
    }
    float getCgpa(){
        return cgpa;
    }
};

int main(){
    Student s1; //object
    s1.setName("Nibedita");
    s1.setCgpa(9.1);

    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;
    return 0;
}