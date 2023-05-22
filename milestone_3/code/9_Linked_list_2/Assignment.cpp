// // find a node recursively
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

// int findNodeRec(Node *head, int n)
// {
//     if (head == NULL)
//     {
//         return -1;
//     }
//     if (head->data == n)
//     {
//         return 0;
//     }
//     int c = findNodeRec(head->next, n);
//     if (c == -1)
//         return -1;
//     return c + 1;
// }
// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		Node *head = takeinput();
// 		int val;
// 		cin >> val;
// 		cout << findNodeRec(head, val) << endl;
// 	}
// }




// // Even after Odd LinkedList
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


// Node *evenAfterOdd(Node *head)
// {
//     if (head == NULL)
//     {
//         return head;
//     }
//     Node *oh = NULL, *eh = NULL, *ot = NULL, *et = NULL;
//     while (head != NULL)
//     {
//         if (head->data % 2 == 0)
//         {
//             if (eh == NULL)
//             {
//                 eh = head;
//                 et = head;
//             }
//             else
//             {
//                 et->next = head;
//                 et = head;
//             }
//         }
//         else
//         {
//             if (oh == NULL)
//             {
//                 oh = head;
//                 ot = head;
//             }
//             else
//             {
//                 ot->next = head;
//                 ot = head;
//             }
//         }
//         head = head->next;
//     }
//     if (oh == NULL)
//     {
//         return eh;
//     }
//     else
//     {
//         ot->next = eh;
//     }
//     if (eh != NULL)
//     {
//         et->next = NULL;
//     }
//     return oh;
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
// 		head = evenAfterOdd(head);
// 		print(head);
// 	}
// 	return 0;
// }


// Delete every N nodes

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
Node *skipMdeleteN(Node *head, int M, int N)
{
    if (head == NULL)
    {
        return head;
    }
    if (M == 0)
    {
        return NULL;
    }
    if (N == 0)
    {
        return head;
    }
    Node *temp1 = head, *temp2 = NULL;
    int c1 = 1, c2 = 1;
    while (temp1 != NULL)
    {
        if (c1 == M)
        {
            temp2 = temp1->next;
            while (temp2 != NULL && c2 != N)
            {
                temp2 = temp2->next;
                c2++;
            }
            if (temp2 != NULL)
            {
                temp2 = temp2->next;
                temp1->next = temp2;
                temp1 = temp2;
                c1 = 1;
                c2 = 1;
            }
            else
            {
                temp1->next = NULL;
                temp1 = NULL;
            }
        }
        c1++;
        if (temp1 != NULL)
        {
            temp1 = temp1->next;
        }
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
		int m, n;
		cin >> m >> n;
		head = skipMdeleteN(head, m, n);
		print(head);
	}
	return 0;
}