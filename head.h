#ifndef BSTree_h
#define BSTree_h

class BSTree {
private:
	struct TreeNode {
		int value;
		TreeNode* left;
		TreeNode* right;
	};

public:
	TreeNode* root;
	BSTree();
	~BSTree();
	void insertNode(int, TreeNode*&);
	//void searchNode(int,TreeNode*&);
	void deleteNode(int, TreeNode*&);
	void displayBST(TreeNode*) const;
	void displayInOrder(TreeNode*)const;
	void displayPreOrder(TreeNode*)const;
	void displayPostOrder(TreeNode*)const;
};
#endif
