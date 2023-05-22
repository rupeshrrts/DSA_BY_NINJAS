// #include <iostream>
// using namespace std;
// #include "Node.cpp"

// void print(Node *head){
//     Node* temp=head;
//     while (temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
    
    
//     /*
//     cout<<endl;
//     temp=head;
//     while (temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     */
    
// }

// int main() {
// 	// Statically
// 	Node n1(1);
// 	Node *head = &n1;

// 	Node n2(2);
//     Node n3(3);
//     Node n4(4);
//     Node n5(5);

//     // Connection between nodes
//     n1.next = &n2;
//     n2.next = &n3;
//     n3.next = &n4;
//     n4.next = &n5;
//     // Call print function
//     print(head);


// 	/*n1.next = &n2;
// 	cout << n1.data << " " << n2.data << endl;
//     //Dynamically
//     Node * n3 = new Node(10);
//     Node * head = n3;
//     Node * n4 = new Node(20);
//     n3->next = n4;
//     */

// }



// #include <iostream>
// using namespace std;
// #include "Node.cpp"

// void print(Node *head){
//     while (head!=NULL)
//     {
//         cout<<head->data<<" ";
//         head=head->next;
//     }
    
    
// }

// int main() {
// 	// Statically
// 	Node n1(1);
// 	Node *head = &n1;

// 	Node n2(2);
//     Node n3(3);
//     Node n4(4);
//     Node n5(5);

//     // Connection between nodes
//     n1.next = &n2;
//     n2.next = &n3;
//     n3.next = &n4;
//     n4.next = &n5;
//     // Call print function
//     print(head);
//     cout<<endl;
//     print(head);


// }


// //Dynamicaly
// #include <iostream>
// using namespace std;
// #include "Node.cpp"

// void print(Node *head){
//     while (head!=NULL)
//     {
//         cout<<head->data<<" ";
//         head=head->next;
//     } 
// }

// int main() {
// 	// Statically
// 	Node * n1 = new Node(10);
// 	// Node *head = n1;

//     Node * n2 = new Node(20);
//     Node * n3 = new Node(30);
//     Node * n4 = new Node(40);

//     // Connection B/T nodes
//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     // Call function
//     print(n1);

// }


// // question 

// 1.
// #include <iostream>
// using namespace std;
// class Node{
//     public:
//         int data;
//         Node *next;

//     Node(int data){
//         this -> data = data;
//         this -> next = NULL;
//     }
// };

// void print(Node *head){
//     Node *temp = head;

//     while(temp != NULL){
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }

// void increment(Node *head){
//     Node *temp = head;
//     while(temp != NULL){
//         temp -> data++;
//         temp = temp -> next;
//     }
// }

// int main(){

//     Node *node1 = new Node(10);
//     Node *node2 = new Node(20);
//     node1 -> next = node2;
    
//     increment(node1);
//     print(node1);
// }


// // 2.
// #include <iostream>
// using namespace std;
// class Node{
//     public:
//         int data;
//         Node *next;

//         Node(int data){
//             this -> data = data;
//             this -> next = NULL;
//         }
// };

// void print(Node *head){
//     Node *temp = head;

//     while(temp != NULL){
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }

// int main(){

//     Node *node1 = new Node(10);
//     Node *node2 = new Node(20);
//     node2 -> next = node1;
//     print(node2);
// }


// // 3.
// #include <iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node *next;
//     Node(int data){
//         this -> data = data;
//         this -> next = NULL;
//     }
// };


// void print(Node *head){
//     Node *temp = head;

//     while(temp != NULL){
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }

// int main(){

//     Node *node1 = new Node(10);
//     Node *node2 = new Node(20);
//     Node *node3 = new Node(20);
//     Node *node4 = new Node(20);
//     node1 -> next = node2;
//     node2 -> next = node3;
//     node3 -> next = node4;
//     print(node2);
// }


#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this->next=NULL;
    }
};

void print(Node *head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    } 
}

int main(){

    Node* n1=new Node(10);
    Node*head=n1;
    Node* n2=new Node(20);
    Node* n3=new Node(30);
    Node* n4=new Node(40);
    Node n5(34);
    Node n6(44);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=&n5;
    n5.next=&n6;

    print(head);

}


