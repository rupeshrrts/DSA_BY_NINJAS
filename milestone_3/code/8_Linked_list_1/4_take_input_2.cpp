
// #include <iostream>
// using namespace std;
// #include "Node.cpp"

// Node *takeInput() // complexity is n square
// {
//     int data;
//     cin >> data;
//     Node *head = NULL;
//     while (data != -1)
//     {
//         Node *newNode = new Node(data);
//         if (head == NULL)
//         {
//             head = newNode;
//         }
//         else
//         {
//             Node *temp = head;
//             while (temp->next != NULL)
//             {
//                 temp = temp->next;
//             }
//             temp->next = newNode;
//         }
//         cin >> data;
//     }
//     return head;
// }


// Node *takeInput_Batter() // complexity is n  no loop inside
// {
//     int data;
//     cin >> data;
//     Node *head = NULL;
//     Node *tail = NULL;

//     while (data != -1)
//     {
//         Node *newNode = new Node(data);
//         if (head == NULL)
//         {
//             head = newNode;
//             tail = newNode;
//         }
//         else
//         {
//             tail->next = newNode;
//             tail=tail->next;
//             // or
//             tail=newNode;
//         }
//         cin >> data;
//     }
//     return head;
// }

// void print(Node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

// int main()
// {
//     Node* head =takeInput_Batter();

//     print(head);
// }


// //find length
// #include <iostream>
// using namespace std;

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

// int length(Node *head)
// {
//     Node *temp = head;
//     int length = 0;
//     while (temp != NULL)
//     {
//         length++;
//         temp = temp->next;
//     }
//     return length;
// }

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

// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		Node *head = takeinput();
// 		cout << length(head) << endl;
// 	}
// 	return 0;
// }


#include <iostream>
using namespace std;
// #include "solution.h"

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};


void printIthNode(Node *head, int i)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    int count =0;
    while (count!=i && temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
        cout << temp->data;
}

// void printIthNode(Node *head, int i)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     Node *temp = head;
//     while (i-- && temp != NULL)
//     {
//         temp = temp->next;
//     }
//     if (temp != NULL)
//         cout << temp->data;
// }

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int pos;
		cin >> pos;
		printIthNode(head, pos);
		cout << endl;
	}
	return 0;
}