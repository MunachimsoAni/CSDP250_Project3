#include <iostream>
#include "head.h"

using namespace std;

BSTree::BSTree() {
	root = nullptr;
}

BSTree::~BSTree() {

}

void BSTree::insertNode(int n, TreeNode*& root) {
	//Step 1: Construct a new node
	TreeNode* newNode = new TreeNode;
	newNode->value = n;
	newNode->left = newNode->right = nullptr;

	//Step 2 Traverse the BST to the right place
	if (root == nullptr) {
		root = newNode;
	}
	else if (n < root->value) {
		insertNode(n, root->left);
	}
	else if (n > root->value) {
		insertNode(n, root->right);
	}
}

void BSTree::deleteNode(int n, TreeNode*& root) {
	if (root == nullptr) {
		cout << "Nothing to delete here";
	}
	else if (n < root->value){
		deleteNode(n, root->left);
	}
	else if (n > root->value) {
		deleteNode(n, root->right);
	}
}

void BSTree::displayBST(TreeNode* rt)const {
	cout << "In-order Traversal: ";
	displayInOrder(rt);
	cout << endl;
	cout << "Pre-order Traversal: ";
	displayPreOrder(rt);
	cout << endl;
	cout << "Post-order Traversal: ";
	displayPostOrder(rt);
	cout << endl;
}

void BSTree::displayInOrder(TreeNode* root)const {
	if (root) {
		displayInOrder(root->left);
		cout << root->value << " ";
		displayInOrder(root->right);
	}
}

void BSTree::displayPreOrder(TreeNode* root)const {
	if (root) {
		cout << root->value << " ";
		displayPreOrder(root->left);
		displayPreOrder(root->right);
	}
}

void BSTree::displayPostOrder(TreeNode* root)const {
	if (root) {
		displayPostOrder(root->left);
		displayPostOrder(root->right);
		cout << root->value << " ";
	}
}
