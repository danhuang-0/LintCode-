//// �򵥵ĵݹ�
//// ��������ȵ������Ǹ��ڵ�ֵ��ȣ��������������������ֱ����
//// ���жϵ�ǰ�ڵ�ֵ�Ƿ����
//// �����ȣ������ж� A ���������� B ���������Ƿ����
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