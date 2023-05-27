// // BST to Sorted LL

// #include <iostream>
// #include <queue>

// template <typename T>
// class Node {
//    public:
//     T data;
//     Node<T>* next;
//     Node(T data) {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// template <typename T>
// class BinaryTreeNode {
//    public:
//     T data;
//     BinaryTreeNode<T>* left;
//     BinaryTreeNode<T>* right;

//     BinaryTreeNode(T data) {
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
// };

// using namespace std;
// // #include "solution.h"

// BinaryTreeNode<int>* takeInput() {
//     int rootData;

//     cin >> rootData;
//     if (rootData == -1) {
//         return NULL;
//     }
//     BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
//     queue<BinaryTreeNode<int>*> q;
//     q.push(root);
//     while (!q.empty()) {
//         BinaryTreeNode<int>* currentNode = q.front();
//         q.pop();
//         int leftChild, rightChild;

//         cin >> leftChild;
//         if (leftChild != -1) {
//             BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
//             currentNode->left = leftNode;
//             q.push(leftNode);
//         }

//         cin >> rightChild;
//         if (rightChild != -1) {
//             BinaryTreeNode<int>* rightNode =
//                 new BinaryTreeNode<int>(rightChild);
//             currentNode->right = rightNode;
//             q.push(rightNode);
//         }
//     }
//     return root;
// }


// class Pair {
// public:
//   Node<int> *head;
//   Node<int> *tail;
// };

// Pair BST(BinaryTreeNode<int> *root) {
//   if (root == NULL) {
//     Pair ans;
//     ans.head = NULL;
//     ans.tail = NULL;
//     return ans;
//   }

//   Node<int> *node = new Node<int>(root->data);

//   Pair leftans = BST(root->left);
//   Pair rightans = BST(root->right);

//   Pair ans;

//   if (leftans.head == NULL && rightans.head == NULL) {

//     ans.head = node;
//     ans.tail = node;
//   }

//   else if (!leftans.head && rightans.head) {
//     ans.head = node;
//     node->next = rightans.head;

//     ans.tail = rightans.tail;
//   } else if (leftans.head && rightans.head == NULL) {
//     ans.head = leftans.head;
//     leftans.tail->next = node;
//     ans.tail = node;
//   } else {
//     ans.head = leftans.head;
//     leftans.tail->next = node;
//     node->next = rightans.head;
//     ans.tail = rightans.tail;
//   }
//   return ans;
// }
// Node<int> *constructLinkedList(BinaryTreeNode<int> *root) {
//   return BST(root).head;
// }


// int main() {
//     BinaryTreeNode<int>* root = takeInput();
//     Node<int>* head = constructLinkedList(root);

//     while (head != NULL) {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }



#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode() {
        if (left) delete left;
        if (right) delete right;
    }
};


using namespace std;
#include <vector>


BinaryTreeNode<int> *takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }
        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }

    return root;
}


vector<int> *getPath(BinaryTreeNode<int> *root, int data) {
  // Write your code here
  if (root == NULL)
    return NULL;
  if (root->data == data) {
    vector<int> *v = new vector<int>();
    v->push_back(root->data);
    return v;
  } else if (root->data > data) {
    vector<int> *left = getPath(root->left, data);
    if (left != NULL)
      left->push_back(root->data);
    return left;
  } else if (root->data < data) {
    vector<int> *right = getPath(root->right, data);
    if (right != NULL)
      right->push_back(root->data);
    return right;
  }
}

int main() {
    BinaryTreeNode<int> *root = takeInput();
    int k;
    cin >> k;
    vector<int> *output = getPath(root, k);

    if (output != NULL) {
        for (int i = 0; i < output->size(); i++) {
            cout << output->at(i) << " ";
        }
    }

    delete root;
}