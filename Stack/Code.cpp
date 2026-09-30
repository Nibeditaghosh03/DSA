#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

template<class T>
class Node {
    public:
      T data;
      Node<T>* next;

    Node(T val){
         data = val;
         next = nullptr;
    }
    };

   template<class T>
   class Stack {
    Node<T>* head;
 
    public:
      Stack() {
        head = nullptr;
      }
          void push(T val){
            Node<T>*newNode = new Node<T>(val);
            if(head == nullptr){
                head =newNode;
            }else{
                newNode -> next = head;
                head = newNode;
            }
          }
        
          void pop(){
               Node<T>* temp = head;
               head = head->next;
               temp->next=NULL;
               delete temp;
          }

          T top(){
            return head->data;
          }
   

    bool isEmpty(){
        return head== 0;
    }
};



int main(){
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.empty()){
        cout <<s.top() <<" ";
        s.pop();
    }

    return 0;
}