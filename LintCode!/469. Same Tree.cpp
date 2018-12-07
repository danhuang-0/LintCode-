//// 简单的递归
//// 两个树相等的条件是根节点值相等，并且左子树和右子树分别相等
//// 先判断当前节点值是否相等
//// 如果相等，在再判断 A 的左子树和 B 的左子树是否相等
//
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
//     * @param a: the root of binary tree a.
//     * @param b: the root of binary tree b.
//     * @return: true if they are identical, or false.
//     */
//    bool isIdentical(TreeNode * a, TreeNode * b) {
//        // write your code here
//		if( a == nullptr && b == nullptr )
//			return true;
//		if( a == nullptr || b == nullptr )
//			return false;
//		if( a->val == b->val )
//			return isIdentical( a->left, b->left )
//				&& isIdentical( a->right, b->right );
//		return false;
//    }
//};