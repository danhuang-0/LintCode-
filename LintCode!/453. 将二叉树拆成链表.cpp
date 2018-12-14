#include <iostream>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val) {
        this->val = val;
        this->left = this->right = NULL;
    }
};

class Solution {
public:
    /**
     * @param root: a TreeNode, the root of the binary tree
     * @return: nothing
     */

	TreeNode * flattenSubTree( TreeNode * root, TreeNode **pTail ){
		if( root == nullptr ) {
			pTail = nullptr;
			return nullptr;
		}
		TreeNode * pTempLeft = root->left;
		TreeNode * pTempRight = root->right;

		root->left = pTail == nullptr ? nullptr: *pTail;

		root->right = flattenSubTree( pTempLeft, pTail );
		if( *pTail ) {
			TreeNode * pTempHead = flattenSubTree( pTempRight, pTail );
			(*pTail)->right = pTempHead;
			if( pTempHead )
				pTempHead->left = *pTail;
		}
		else
			*pTail = root;
		return root;
	}

    void flatten(TreeNode * root) {
        // write your code here
		TreeNode * pTemp = nullptr;
		flattenSubTree( root , &pTemp );
    }
};

int main(){
	TreeNode root(1);
	root.left = new TreeNode(2);
	root.right = new TreeNode(5);
	root.left->left = new TreeNode(3);
	root.left->right = new TreeNode(4);
	root.right->right = new TreeNode(6);

	Solution s;
	s.flatten( &root );

	return 0;

}