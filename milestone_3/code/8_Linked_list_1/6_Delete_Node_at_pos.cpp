//Question Delete Node from pos

////1.
// #include <iostream>
// using namespace std;
// // #include "solution.h"
// class Node
// {
// public:
// 	int data;
// 	Node *next;
// 	Node(int data)
// 	{
// 		this->data = data;
// 		this->next = NULL;
// 	}
// };


// Node *takeinput()
// {
// 	int data;
// 	cin >> data;
// 	Node *head = NULL, *tail = NULL;
// 	while (data != -1)
// 	{
// 		Node *newNode = new Node(data);
// 		if (head == NULL)
// 		{
// 			head = newNode;
// 			tail = newNode;
// 		}
// 		else
// 		{
// 			tail->next = newNode;
// 			tail = newNode;
// 		}
// 		cin >> data;
// 	}
// 	return head;
// }

// Node *deleteNode(Node *head, int pos)
// {
//     if (head == NULL)
//     {
//         return head;
//     }

//     Node *temp = head;
//     if (pos == 0)
//     {
//         Node *p = head;
//         head = head->next;
//         delete p;
//         return head;
//     }
//     int count = 0;
//     while (temp != NULL && count < pos - 1)
//     {
//         temp = temp->next;
//         count++;
//     }
//     if (temp != NULL && temp->next != NULL)
//     {
//         Node *p = temp->next;
//         temp->next = p->next; // is equivalent to temp -> next = temp -> next -> next;
//         delete p;
//     }
//     return head;
// }


// void print(Node *head)
// {
// 	Node *temp = head;
// 	while (temp != NULL)
// 	{
// 		cout << temp->data << " ";
// 		temp = temp->next;
// 	}
// 	cout << endl;
// }

// int main()
// {
// 	int t;
// 	cin >> t;

// 	while (t--)
// 	{
// 		Node *head = takeinput();
// 		int pos;
// 		cin >> pos;
// 		head = deleteNode(head, pos);
// 		print(head);
// 	}

// 	return 0;
// }



//// 2.
#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


Node *takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1) {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}


int length(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    return length(head->next) + 1;
}

void print(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        Node *head = takeinput();
        cout << length(head) << "\n";
    }
}