//// ֱ�ӵݹ����ͺ��ˣ��Ƚ�����ǰ�ڵ����������
//// ֮��ݹ��ȥ��ת��������
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