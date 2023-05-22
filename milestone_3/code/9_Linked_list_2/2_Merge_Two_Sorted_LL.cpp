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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
    if (head1 == NULL)
    {
        return head2;
    }
    else if (head2 == NULL)
    {
        return head1;
    }
    
    /* No need of this condition it is already covered in above condition
   else if (head1 == NULL && head2 == NULL){
        return head1;
    }
    */
    Node *fh = NULL, *ft = NULL, *temp1 = head1, *temp2 = head2;
    if (temp1->data < temp2->data)
    {
        fh = ft = temp1;
        temp1 = temp1->next;
    }
    else
    {
        fh = ft = temp2;
        temp2 = temp2->next;
    }
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data < temp2->data)
        {
            ft->next = temp1;
            ft = temp1;
            temp1 = temp1->next;
        }
        else
        {
            ft->next = temp2;
            ft = temp2;
            temp2 = temp2->next;
        }
    }
    if (temp1 != NULL)
    {
        ft->next = temp1;
    }
    else
    {
        ft->next = temp2;
    }
    return fh;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}