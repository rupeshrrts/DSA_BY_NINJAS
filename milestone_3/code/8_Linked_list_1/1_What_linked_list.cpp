#include <iostream>
using namespace std;
#include "Node.cpp"


int main() {
	// Statically
	Node n1(1);
	Node *head = &n1;

	Node n2(2);

	n1.next = &n2;

	cout << n1.data << " " << n2.data << endl;

    //Dynamically
    Node * n3 = new Node(10);
    Node * head = n3;

    Node * n4 = new Node(20);
    n3->next = n4;

}


// #include<iostream>
// using namespace std;
// #include"Node.cpp"
// // class Node {
// //     public:
// //     int data;
// //     Node *next;

// //     Node(int data){
// //         this->data=data;
// //         next=NULL;
// //     }
// // };

// int main(){
//     //staticaly
//     // node 1
//     Node n1(1); 
//     //head node
//     Node* head=&n1;

//     // node 2 
//     Node n2(2);

//     //conect both node
//     n1.next=&n2;
//     // cout<<n1.data<<" "<<n2.data<<endl;
//     cout<<head->data; 
// }




  