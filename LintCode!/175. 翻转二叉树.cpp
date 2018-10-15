//// 直接递归做就好了，先交换当前节点的左右子树
//// 之后递归的去翻转左右子树
//#include <iostream>
//
//using namespace std;
//
//class TreeNode {
//public:
//    int val;
//    TreeNode *left, *right;
//    TreeNode(int val) {
//        this->val = val;
//        this->left = this->right = NULL;
//    }
//};
//
//class Solution {
//public:
//    /**
//     * @param root: a TreeNode, the root of the binary tree
//     * @return: nothing
//     */
//    void invertBinaryTree(TreeNode * root) {
//        // write your code here
//		if( root == nullptr )
//			return;
//		swap( root->left, root->right );
//		invertBinaryTree( root->left );
//		invertBinaryTree( root->right );
//    }
//};