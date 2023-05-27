#include <iostream>
#include "BinaryTreeNode.h"
#include <queue>
using namespace std;

BinaryTreeNode<int>* takeInputLevelWise() {
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if (rootData == -1) {
		return NULL;
	}

	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while (pendingNodes.size() != 0) {
		BinaryTreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter left child of " << front->data << endl;
		int leftChildData;
		cin >> leftChildData;
		if (leftChildData != -1) {
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
			front->left = child;
			pendingNodes.push(child);
		}
		cout << "Enter right child of " << front->data << endl;
		int rightChildData;
		cin >> rightChildData;
		if (rightChildData != -1) {
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
			front->right = child;
			pendingNodes.push(child);
		}
	}
	return root;
}

void printTree(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << ":";
	if (root->left != NULL) {
		cout << "L" << root->left->data;
	}

	if (root->right != NULL) {
		cout << "R" << root->right->data;
	}
	cout << endl;
	printTree(root->left);
	printTree(root->right);
}

BinaryTreeNode<int>* takeInput() {
	int rootData;
	cout << "Enter data" << endl;
	cin >> rootData;
	if (rootData == -1) {
		return NULL;
	}

	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
	BinaryTreeNode<int>* leftChild = takeInput();
	BinaryTreeNode<int>* rightChild = takeInput();
	root->left = leftChild;
	root->right = rightChild;
	return root;
}

int numNodes(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return 0;
	}
	return 1 + numNodes(root->left) + numNodes(root->right);
}

void inorder(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1


// void preorder(BinaryTreeNode<int>* root) {
// 	if (root == NULL) {
// 		return;
// 	}
// 	cout << root->data << " ";
// 	preorder(root->left);
// 	preorder(root->right);
// }


// Construct Tree from Preorder and Inorder
// BinaryTreeNode<int> *buildTreeHelper(int *in, int *pre, int inS, int inE,
//                                      int preS, int preE) {
//   if (inS > inE)
//     return NULL;
//   int rootData = pre[preS];
//   int rootIndex = -1;
//   for (int i = inS; i <= inE; i++) {
//     if (in[i] == rootData) {
//       rootIndex = i;
//       break;
//     }
//   }
//   int lInS = inS;                  // left inorder start
//   int lInE = rootIndex - 1;        // left inorder end
//   int lPreS = preS + 1;            // left preorder start
//   int lPreE = lInE - lInS + lPreS; // left preorder end
//   int rPreS = lPreE + 1;           // right preorder start
//   int rPreE = preE;                // right preorder end
//   int rInS = rootIndex + 1;        // right inorder start
//   int rInE = inE;                  // right inorder end
//   BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
//   root->left = buildTreeHelper(in, pre, lInS, lInE, lPreS, lPreE);
//   root->right = buildTreeHelper(in, pre, rInS, rInE, rPreS, rPreE);
//   return root;
// }

BinaryTreeNode<int> *buildTree(int *preorder, int preLength, int *inorder,
                               int inLength) {
  // Write your code here
  return buildTreeHelper(inorder, preorder, 0, inLength - 1, 0, preLength - 1);
}
void postOrder(BinaryTreeNode<int> *root) {
  // Write your code here
  if (root == NULL)
    return;
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}
int main() {
	/*
		 BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
		 BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
		 BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);
		 root->left = node1;
		 root->right = node2;
	*/
	BinaryTreeNode<int>* root = takeInputLevelWise();
	printTree(root);
	cout << "Num: " << numNodes(root) << endl;
	// inorder(root);
	// preorder(root);
	postOrder(root);

	delete root;
}

