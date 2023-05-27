#include <iostream>
using namespace std;
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
};

// #include "solution.h"

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

void printLevelATNewLine(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        BinaryTreeNode<int> *first = q.front();
        q.pop();
        if (first == NULL) {
            if (q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL) {
            q.push(first->left);
        }
        if (first->right != NULL) {
            q.push(first->right);
        }
    }
}


BinaryTreeNode<int> *buildTreeHelper(int *postorder, int *inorder, int ps,
                                     int pe, int is, int ie) {
  if (ps > pe)
    return NULL;
  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(postorder[pe]);
  int k = 0;
  for (int i = is; i <= ie; i++) {
    if (postorder[pe] == inorder[i]) {
      k = i;
      break;
    }
  }
  int lps = ps;              // left prestart
  int lis = is;              // left instart
  int lie = k - 1;           // left inend
  int lpe = lie - lis + lps; // left  pre end
  int rps = lpe + 1;         // right prestart
  int rpe = pe - 1;          //  right preend
  int ris = k + 1;           // right instart
  int rie = ie;              // right inend
  root->left = buildTreeHelper(postorder, inorder, lps, lpe, lis, lie);
  root->right = buildTreeHelper(postorder, inorder, rps, rpe, ris, rie);
  return root;
}
BinaryTreeNode<int> *buildTree(int *postorder, int postLength, int *inorder,
                               int inLength) {
  // Write your code here
  return buildTreeHelper(postorder, inorder, 0, postLength - 1, 0,
                         inLength - 1);
}
int main() {
    int size;
    cin >> size;
    int *post = new int[size];
    int *in = new int[size];
    for (int i = 0; i < size; i++) cin >> post[i];
    for (int i = 0; i < size; i++) cin >> in[i];
    BinaryTreeNode<int> *root = buildTree(post, size, in, size);
    printLevelATNewLine(root);
}