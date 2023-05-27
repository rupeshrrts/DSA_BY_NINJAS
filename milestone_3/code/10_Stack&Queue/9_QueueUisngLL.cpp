
#include <iostream>
using namespace std;
// #include "Queue.h"
template <typename T>
class Node {
	public : 
		T data;
		Node<T> *next;

		Node(T data) {
			this -> data = data;
			next = NULL;
		}
};


template <typename T>
class Queue {
	Node<T> *head;
	Node<T> *tail;
	int size;

	public : 

	Queue() {
		head = NULL;
		tail = NULL;
		size = 0;
	}

	int getSize() {
		return size;
	}

	bool isEmpty() {
		return size == 0;
	}

	void enqueue(T element) {
		Node<T> *newNode = new Node<T>(element);
		if(head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail -> next = newNode;
			tail = newNode;
		}
		size++;
	}

	T front() {
		if(isEmpty()) {
			return 0;
		}
		return head -> data;	
	}

	T dequeue() {
		if(isEmpty()) {
			return 0;
		}
		T ans = head -> data;
		Node<T> *temp = head;
		head = head -> next;
		delete temp;
		size--;
		return ans;
	}
};


int main() {
	Queue<int> q;

	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);


	cout << q.front() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;

	cout << q.getSize() << endl;
	cout << q.isEmpty() << endl;
}




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
//         next = NULL;
//     }
// };

// // *******************

// // Following is the structure of the node class

//     class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };

// // **********************/
// class Queue
// {
//     // Define the data members
//     Node *head, *tail;
//     int size;

// public:
//     Queue()
//     {
//         // Implement the Constructor
//         head = NULL;
//         tail = NULL;
//         size = 0;
//     }

//     int getSize()
//     {
//         // Implement the getSize() function
//         return size;
//     }

//     bool isEmpty()
//     {
//         // Implement the isEmpty() function
//         return head == NULL;
//     }

//     void enqueue(int data)
//     {
//         // Implement the enqueue() function
//         Node *temp = new Node(data);
//         if (head == NULL)
//         {
//             head = temp;
//             tail = temp;
//         }
//         else
//         {
//             tail->next = temp;
//             tail = tail->next;
//         }
//         size++;
//     }

//     int dequeue()
//     {
//         // Implement the dequeue() function
//         if (isEmpty())
//             return -1;
//         Node *temp = NULL;
//         int num = head->data;
//         if (head == tail)
//         {
//             head = NULL;
//             tail = NULL;
//         }
//         else
//         {
//             temp = head->next;
//             delete head;
//             head = temp;
//         }
//         size--;
//         return num;
//     }

//     int front()
//     {
//         // Implement the front() function
//         if (isEmpty())
//             return -1;
//         return head->data;
//     }
// };

// // #include "solution.h"

// int main()
// {
//     Queue q;

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int choice, input;
//         cin >> choice;
//         switch (choice)
//         {
//         case 1:
//             cin >> input;
//             q.enqueue(input);
//             break;
//         case 2:
//             cout << q.dequeue() << "\n";
//             break;
//         case 3:
//             cout << q.front() << "\n";
//             break;
//         case 4:
//             cout << q.getSize() << "\n";
//             break;
//         default:
//             cout << ((q.isEmpty()) ? "true\n" : "false\n");
//             break;
//         }
//     }
// }
