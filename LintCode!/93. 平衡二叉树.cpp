//// ����ƽ��������Ķ���
//// ���������������ĸ߶Ȳ����һ
//// ֻҪ�ݹ�����������Ⱥ���������ȾͿ�����
//// ά��ȫ�ֱ�����¼���Ƿ�ƽ��
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
//
//class Solution {
//public:
//    /**
//     * @param root: The root of binary tree.
//     * @return: True if this Binary tree is Balanced, or false.
//     */
//	bool isBalance;
//
//	int isBalanceNode( TreeNode * pNode ){
//		if( !pNode )
//			return 0;
//		int nLeft = isBalanceNode( pNode->left );
//		int nRight = isBalanceNode( pNode->right );
//		isBalance = isBalance && ( abs( nLeft-nRight ) <= 1 );
//		return max( nLeft, nRight ) + 1 ;
//	}
//	
//	bool isBalanced(TreeNode * root) {
//        // write your code here
//
//		isBalance = true;
//		isBalanceNode( root );
//		return isBalance;
//    }
//};
//
//
//int main(){
//
//	TreeNode root(3);
//	//root.left = new TreeNode(9);
//	root.right = new TreeNode(20);
//	root.right->left = new TreeNode(15);
//	root.right->right = new TreeNode(7);
//
//	Solution s;
//	s.isBalanced( &root );
//
//	delete root.right->left;
//	delete root.right->right;
//	delete root.right;
//	delete root.left;
//	return 0;
//}