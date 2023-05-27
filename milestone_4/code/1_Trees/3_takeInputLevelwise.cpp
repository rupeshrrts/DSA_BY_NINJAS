// #include <iostream>
// #include <queue>
// #include "TreeNode.h"
// using namespace std;

// TreeNode<int>* takeInputLevelWise() {
// 	int rootData;
// 	cout << "Enter root data" << endl;
// 	cin >> rootData;
// 	TreeNode<int>* root = new TreeNode<int>(rootData);

// 	queue<TreeNode<int>*> pendingNodes;
	
// 	pendingNodes.push(root);
// 	while (pendingNodes.size() != 0) {
// 		TreeNode<int>* front = pendingNodes.front();
// 		pendingNodes.pop();
// 		cout << "Enter num of children of " << front->data << endl;
// 		int numChild;
// 		cin >> numChild;
// 		for (int i = 0; i < numChild; i++) {
// 			int childData;
// 			cout << "Enter " << i << "th child of " << front->data << endl;
// 			cin >> childData;
// 			TreeNode<int>* child = new TreeNode<int>(childData);
// 			front->children.push_back(child);
// 			pendingNodes.push(child);
// 		}
// 	}
// 	return root;
// }


// TreeNode<int>* takeInput() {
// 	int rootData;
// 	cout << "Enter data" << endl;
// 	cin >> rootData;
// 	TreeNode<int>* root = new TreeNode<int>(rootData);
	
// 	int n;
// 	cout << "Enter num of children of " << rootData << endl;
// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		TreeNode<int>* child = takeInput();
// 		root->children.push_back(child);
// 	}
// 	return root;
// }

// void printTree(TreeNode<int>* root) {
// 	if (root == NULL) {
// 		return;
// 	}

// 	cout << root->data << ":";
// 	for (int i = 0; i < root->children.size(); i++) {
// 		cout << root->children[i]->data << ",";
// 	}
// 	cout << endl;
// 	for (int i = 0; i < root->children.size() ; i++) {
// 		printTree(root->children[i]);
// 	}
// }


// void printLevelWise(TreeNode<int> *root) {

// //   if (root->data == NULL)
// //     return;

//   queue<TreeNode<int> *> pendingnodes;
//   pendingnodes.push(root);

//   while (pendingnodes.size() != 0) {
//     TreeNode<int> *front = pendingnodes.front();
//     pendingnodes.pop();
//     cout << front->data << ":";
//     for (int i = 0; i < front->children.size(); i++) {
//       pendingnodes.push(front->children[i]);
//       if (i == front->children.size() - 1)
//         cout << front->children[i]->data;

//       else
//         cout << front->children[i]->data << ",";
//     }

//     cout << endl;

//   }
// }

// int main() {
// 	/*TreeNode<int>* root = new TreeNode<int>(1);
// 	TreeNode<int>* node1 = new TreeNode<int>(2);
// 	TreeNode<int>* node2 = new TreeNode<int>(3);
// 	root->children.push_back(node1);
// 	root->children.push_back(node2);
// 	*/
// 	TreeNode<int>* root = takeInputLevelWise();
// 	// printTree(root);
// 	printLevelWise(root);
// 	// TODO delete the tree
// }

//find sum of node

int sumOfNodes(TreeNode<int> *root) {
  // Write your code hereint sumOfNodes(TreeNode<int>* root) {
  /* Given a generic tree, count and return the sum of all nodes present in the
   * given tree.*/
  if (root == nullptr)
    return 0;
  int result = root->data; // root node
  int childCount = root->children.size();
  for (int i = 0; i < childCount; i++)
  result += sumOfNodes(root->children[i]);
  return result;
}


// max data node
TreeNode<int> *maxDataNode(TreeNode<int> *root) {
  // Write your code hereif(root==nullptr) return nullptr;
  TreeNode<int> *result = root; // root node
  int max = root->data;         // root node
  int childCount = root->children.size();
  for (int i = 0; i < childCount; i++) {
    TreeNode<int> *temp = maxDataNode(root->children[i]);
    if (temp->data > max) {
      max = temp->data;
      result = temp;
    }
  }
  return result;
}