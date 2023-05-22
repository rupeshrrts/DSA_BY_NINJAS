
// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// Node *takeinput()
// {
//     int data;
//     cin >> data;
//     Node *head = NULL, *tail = NULL;
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
//             tail = newNode;
//         }
//         cin >> data;
//     }
//     return head;
// }
// int findNode(Node *head, int n)
// {
//     int pos = 0;
//     while (head != NULL)
//     {
//         if (head->data == n)
//         {
//             return pos;
//         }
//         head = head->next;
//         pos++;
//     }
//     return -1;
// }

// // for multiple itteration
// // int main()
// // {
// // 	int t;
// // 	cin >> t;
// // 	while (t--)
// // 	{
// // 		Node *head = takeinput();
// // 		int val;
// // 		cin >> val;
// // 		cout << findNode(head, val) << endl;
// // 	}
// // }

// // for single itteration
// int main()
// {
//     Node *head = takeinput();
//     int val;
//     cin >> val;
//     cout << findNode(head, val) << endl;
// }


// from lass element to shift in first element

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// // #include "solution.h"

// Node *takeinput()
// {
//     int data;
//     cin >> data;
//     Node *head = NULL, *tail = NULL;
//     while (data != -1)
//     {
//         Node *newnode = new Node(data);
//         if (head == NULL)
//         {
//             head = newnode;
//             tail = newnode;
//         }
//         else
//         {
//             tail->next = newnode;
//             tail = newnode;
//         }
//         cin >> data;
//     }
//     return head;
// }

// void print(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// Node *appendLastNToFirst(Node *head, int n)
// {
//     if (n == 0 || head == NULL)
//     {
//         return head;
//     }
//     Node *temp = head;
//     int length = 1;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//         length++;
//     }
//     temp->next = head;
//     int i = length - n;
//     temp = head;
//     while (i > 1 && temp != NULL)
//     {
//         temp = temp->next;
//         i--;
//     }
//     Node *newHead = temp->next;
//     temp->next = NULL;
//     return newHead;
// }

// int main()
// {
//     Node *head = takeinput();
//     int n;
//     cin >> n;
//     head = appendLastNToFirst(head, n);
//     print(head);
// }

// for t term
// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		Node *head = takeinput();
// 		int n;
// 		cin >> n;
// 		head = appendLastNToFirst(head, n);
// 		print(head);
// 	}
// 	return 0;
// }

// // Eliminate duplicates from LL
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

// Node *removeDuplicates(Node *head)
// {
//     Node *ptr1 = head, *ptr2 = NULL;
//     while (ptr1 != NULL && ptr1->next != NULL)
//     {
//         ptr2 = ptr1->next;
//         while (ptr2 != NULL && ptr2->data == ptr1->data)
//         {
//             Node *p = ptr2;
//             ptr2 = ptr2->next;
//             delete p;
//         }
//         ptr1->next = ptr2;
//         ptr1 = ptr2;
//     }
//     return head;
// }
// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		Node *head = takeinput();
// 		head = removeDuplicates(head);
// 		print(head);
// 	}
// 	return 0;
// }


// Print Reverse LinkedList

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

// void printReverse(Node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     printReverse(head->next);
//     cout << head->data << " ";
// }


// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		Node *head = takeinput();
// 		printReverse(head);
// 		cout << endl;
// 	}
// 	return 0;
// }


// Palindrome LinkedList


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


bool isPalindrome(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    Node *fast = head, *slow = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    Node *secondHalf = slow->next;
    slow->next = NULL;
    Node *pre = NULL, *curr = secondHalf, *nex = secondHalf;
    while (curr != NULL)
    {
        nex = nex->next;
        curr->next = pre;
        pre = curr;
        curr = nex;
    }
    secondHalf = pre;
    while (head != NULL && secondHalf != NULL)
    {
        if (head->data != secondHalf->data)
        {
            break;
        }
        head = head->next;
        secondHalf = secondHalf->next;
    }

    if ((head == NULL || head->next == NULL) && secondHalf == NULL)
    {
        return true;
    }
    return false;
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}
