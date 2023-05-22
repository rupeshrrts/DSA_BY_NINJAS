#include <iostream>
using namespace std;
template <typename T>

class Node {
   public:
    T data;
    Node <T> *next;

    Node(T data) {
        this->data = data;
        next = NULL;
    }
}  ;

template <typename T>
class Stack {
  Node<T> *head;
  int size;

public:
  Stack() {
    head = NULL;
    size = 0;
  }

  /*----------------- Public Functions of Stack -----------------*/

  int getSize() { return size; }

  bool isEmpty() { return size == 0; }

  void push(T element) {
    Node<T> *newNode = new Node<T>(element);
    newNode->next=head;
    head=newNode;
    size++;
  }

  T pop() {
    if (size == 0) {
      return -1;
    } else {
      T ans = head->data;
      Node<T> *temp = head;
      head = head->next;
      delete temp;
      size--;
      return ans;
    }
  }

  T top() {
    if (size == 0) {
      return -1;
    }
    return head->data;
  }
};

int main(){
  Stack<char> s;
  s.push(100);
  s.push(101);
  s.push(102);
  s.push(103);

cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;

cout<<s.getSize() << endl;

cout<<s.isEmpty()<<endl;
}