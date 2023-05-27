// #include <iostream>
// #include "BinaryTreeNode.h"
// #include <queue>
// using namespace std;

// BinaryTreeNode<int>* takeInputLevelWise() {
// 	int rootData;
// 	cout << "Enter root data" << endl;
// 	cin >> rootData;
// 	if (rootData == -1) {
// 		return NULL;
// 	}

// 	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

// 	queue<BinaryTreeNode<int>*> pendingNodes;
// 	pendingNodes.push(root);
// 	while (pendingNodes.size() != 0) {
// 		BinaryTreeNode<int>* front = pendingNodes.front();
// 		pendingNodes.pop();
// 		cout << "Enter left child of " << front->data << endl;
// 		int leftChildData;
// 		cin >> leftChildData;
// 		if (leftChildData != -1) {
// 			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
// 			front->left = child;
// 			pendingNodes.push(child);
// 		}
// 		cout << "Enter right child of " << front->data << endl;
// 		int rightChildData;
// 		cin >> rightChildData;
// 		if (rightChildData != -1) {
// 			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
// 			front->right = child;
// 			pendingNodes.push(child);
// 		}
// 	}
// 	return root;
// }

// void printTree(BinaryTreeNode<int>* root) {
// 	if (root == NULL) {
// 		return;
// 	}
// 	cout << root->data << ":";
// 	if (root->left != NULL) {
// 		cout << "L" << root->left->data;
// 	}

// 	if (root->right != NULL) {
// 		cout << "R" << root->right->data;
// 	}
// 	cout << endl;
// 	printTree(root->left);
// 	printTree(root->right);
// }


// void printLevelWise(BinaryTreeNode<int> *root) {
//   // Write your code here
//   if (root == NULL)
//     return;
//   queue<BinaryTreeNode<int> *> pendingNodes;
//   pendingNodes.push(root);
//   while (pendingNodes.size() != 0) {
//     BinaryTreeNode<int> *front = pendingNodes.front();
//     pendingNodes.pop();
//     cout << front->data << ":";
//     if (front->left != NULL) {
//       cout << "L:" << front->left->data;
//       pendingNodes.push(front->left);
//     } else
//       cout << "L:-1";
//     cout << ",";
//     if (front->right != NULL) {
//       cout << "R:" << front->right->data;
//       pendingNodes.push(front->right);
//     } else
//       cout << "R:-1";
//     cout << "\n";
//   }
// }

// BinaryTreeNode<int>* takeInput() {
// 	int rootData;
// 	cout << "Enter data" << endl;
// 	cin >> rootData;
// 	if (rootData == -1) {
// 		return NULL;
// 	}

// 	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
// 	BinaryTreeNode<int>* leftChild = takeInput();
// 	BinaryTreeNode<int>* rightChild = takeInput();
// 	root->left = leftChild;
// 	root->right = rightChild;
// 	return root;
// }

// int main() {
// 	/*
// 		 BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
// 		 BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
// 		 BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);
// 		 root->left = node1;
// 		 root->right = node2;
// 	*/
// 	BinaryTreeNode<int>* root = takeInputLevelWise();
// 	// printTree(root);
// 	printLevelWise(root);
// 	delete root;
// }

// Find a node

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
  // Write your code here
  if (root == NULL)
    return false;
  if (root->left != NULL) {
    bool val = isNodePresent(root->left, x);
    if (val == true)
      return true;
  }
  if (root->right != NULL) {
    bool val = isNodePresent(root->right, x);
    if (val == true)
      return true;
  }
  if (root->data == x)
    return true;
  else
    return false;
}

// Height of Binary Tree

void heightMax(BinaryTreeNode<int> *root, int height, int *max) {
  if (root == NULL)
    return;
  if ((*max) < height)
    *max = height;
  if (root->left != NULL)
    heightMax(root->left, 1 + height, max);
  if (root->right != NULL)
    heightMax(root->right, 1 + height, max);
}
int height(BinaryTreeNode<int> *root) {
  // Write our code here
  if (root == NULL)
    return 0;
  int height = 1, max = 1;
  heightMax(root, height, &max);
  return max;
}

// Mirror
void mirrorBinaryTree(BinaryTreeNode<int> *root) {
  // Write your code here
  if (root == NULL)
    return;
  BinaryTreeNode<int> *child = root->left;
  root->left = root->right;
  root->right = child;
  mirrorBinaryTree(root->left);
  mirrorBinaryTree(root->right);
}