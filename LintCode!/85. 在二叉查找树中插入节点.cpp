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
    /*
     * @param root: The root of the binary search tree.
     * @param node: insert this node into the binary search tree
     * @return: The root of the new binary search tree.
     */
    TreeNode * insertNode(TreeNode * root, TreeNode * node) {
        // write your code here

		TreeNode * pNode = root;
		while( 1 ){
			if( node->val > pNode->val ){
				if( !pNode->right ){
					pNode->right = node;
					break;
				} else {
					pNode = pNode->right;
				}
			} else if ( node->val < pNode->val ){
				if( !pNode->left ){
					pNode->left = node;
					break;
				} else {
					pNode = pNode->left;
				}  
			} else {
				break;
			}
		}
		return root;
    }
};