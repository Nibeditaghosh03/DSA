#include<iostream>
#include<string>
using namespace std;

class User {
private:
    int id;
    string password;

public:
    string username;

    User(int id) {
        this ->id = id;
    }
    //Getter
    string getPassword(){
        return password;
    }
    //setter
    void setPassword(string password){
        this->password = password;
    }
};

int main(){
    User user1(101);
    user1.username = "apnacollege";
    user1.setPassword("abcd");

    cout << "username : " << user1.username << endl;
    cout << "password : "  << user1.getPassword() << endl;
    return 0;
}