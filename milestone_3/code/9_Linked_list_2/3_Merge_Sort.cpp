
// // Code: Merge Sort
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

// Node *takeinput()
// {
// 	int data;
// 	cin >> data;
// 	Node *head = NULL, *tail = NULL;
// 	while (data != -1)
// 	{
// 		Node *newnode = new Node(data);
// 		if (head == NULL)
// 		{
// 			head = newnode;
// 			tail = newnode;
// 		}
// 		else
// 		{
// 			tail->next = newnode;
// 			tail = newnode;
// 		}
// 		cin >> data;
// 	}
// 	return head;
// }

// Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2) {
//   // Write your code here
//   if (head1 == NULL) {
//     return head2;
//   } else if (head2 == NULL) {
//     return head1;
//   }
//   /* No need of this condition it is already covered in above condition
//  else if (head1 == NULL && head2 == NULL){
//       return head1;
//   }
//   */
//   Node *fh = NULL, *ft = NULL, *temp1 = head1, *temp2 = head2;
//   if (temp1->data < temp2->data) {
//     fh = ft = temp1;
//     temp1 = temp1->next;
//   } else {
//     fh = ft = temp2;
//     temp2 = temp2->next;
//   }
//   while (temp1 != NULL && temp2 != NULL) {
//     if (temp1->data < temp2->data) {
//       ft->next = temp1;
//       ft = temp1;
//       temp1 = temp1->next;
//     } else {
//       ft->next = temp2;
//       ft = temp2;
//       temp2 = temp2->next;
//     }
//   }
//   if (temp1 != NULL) {
//     ft->next = temp1;
//   } else {
//     ft->next = temp2;
//   }
//   return fh;
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
// 		head = mergeSort(head);
// 		print(head);
// 	}

// 	return 0;
// }

// Code : Reverse LL (Recursive)
#include <iostream>
using namespace std;

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

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

Node *reverseLinkedListRec(Node *head){
    
    if (head == NULL || head -> next == NULL){
        return head;
    }
	Node * smallOutput = reverseLinkedListRec(head -> next);
	head -> next -> next = head;
    head -> next = NULL;
    return smallOutput;
}
int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		Node *head = takeinput();
		head = reverseLinkedListRec(head);
		print(head);
	}

	return 0;
}