
// #include <iostream>
// using namespace std;
// #include "Node.cpp"

// void insertNode(Node * head , int i , int data){
//     Node * newNode = new Node(data);
//     int count = 0;
//     Node * temp = head;
//     while (count<i-1)
//     {
//         temp=temp->next;
//         count++;
//     }
//     newNode->next=temp->next;
//     temp->next=newNode;

// }
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

//     int i,data;
//     cin>>i>>data;
//     insertNode(head,i,data);
//     print(head);

// }

//Insert at position 

// #include <iostream>
// using namespace std;
// #include "Node.cpp"

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
//             tail = tail->next;
//             // or
//             tail = newNode;
//         }
//         cin >> data;
//     }
//     return head;
// }

// int length(Node *head)
// {
//     Node *temp = head;
//     int count = 0;
//     while (temp != NULL)
//     {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// Node *insertNode_At_position(Node *head, int i, int data)
// {
//     Node *newNode = new Node(data);
//     int count = 0;
//     Node *temp = head;

//     if (i == 0)
//     {
//         newNode->next = head;
//         head = newNode;
//         return head;
//     }

//     while (temp != NULL && count < i - 1)
//     {
//         temp = temp->next;
//         count++;
//     }

//     if (temp != NULL)
//     {
//         Node *a = temp->next;
//         temp->next = newNode;
//         newNode->next = a;
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
//     int i, data;

//     cout << "Enter the input : ";
//     Node *head = takeInput_Batter();
//     cout << endl
//          << "Print data : ";
//     print(head);
//     cout << endl
//          << "Enter the position : ";
//     cin >> i;
//     cout << endl
//          << "Enter the data : ";
//     cin >> data;
//     head = insertNode_At_position(head, i, data);
//     cout << endl
//          << "After added node : ";
//     print(head);
//     cout << endl
//          << "Length is :" << length(head);
// }




// best code for insert at pos

#include <iostream>
using namespace std;
#include "Node.cpp"

Node *takeInput_Batter() 
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;

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
            tail = tail->next;
            // or
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

int length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

Node *insertNode_At_position(Node *head)
{
    int i,data;
    cout<<endl<<"Enter the position :";
    cin>>i;
    
    int count = 0;
    Node *temp = head;
    if (i > 0 && i > length(head))
    {
        cout <<endl<< "Error! you have Entered Invalid Position :" << endl;
    }
    else
    {
        cout<<"Enter the data :";
        cin>>data;
        Node *newNode = new Node(data);
        if (i == 0)
        {
            newNode->next = head;
            head = newNode;
            return head;
        }

        while (temp != NULL && count < i - 1)
        {
            temp = temp->next;
            count++;
        }

        if (temp != NULL)
        {
            Node *a = temp->next;
            temp->next = newNode;
            newNode->next = a;
        }
    }
    return head;
}


void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    // int i, data;
    cout << "Enter the input : ";
    Node *head = takeInput_Batter();
    cout << endl
         << "Print data : ";
    print(head);
    // cout << endl
    //      << "Enter the position : ";
    // cin >> i;
    // cout << endl
    //      << "Enter the data : ";
    // cin >> data;

    head = insertNode_At_position(head);
    cout << endl
         << "Final Linkedlist : ";
    print(head);
    cout << endl
         << "Length is :" << length(head);
}
