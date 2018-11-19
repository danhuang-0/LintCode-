//// 很简单的递归进行就好了
//// 几百万数据也就递归个 20 层，炸不了
//// 在原树中先递归查找子树的根节点
//// 找到根节点之后，递归的去判断两棵树是否相等
//
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
//     * @param T1: The roots of binary tree T1.
//     * @param T2: The roots of binary tree T2.
//     * @return: True if T2 is a subtree of T1, or false.
//     */
//
//	bool judgeSubtree( TreeNode * pRoot1, TreeNode * pRoot2 ){
//		if( pRoot1 == nullptr && pRoot2 == nullptr )
//			return true;
//		if( pRoot1 == nullptr || pRoot2 == nullptr )
//			return false;
//		if( pRoot1->val != pRoot2->val )
//			return false;
//		bool bRetLeft = judgeSubtree( pRoot1->left, pRoot2->left );
//		bool bRetRight = judgeSubtree( pRoot1->right, pRoot2->right );
//		return bRetLeft && bRetRight;
//	} 
//
//    bool isSubtree(TreeNode * T1, TreeNode * T2) {
//        // write your code here
//		if( T2 == nullptr )
//			return true;
//		if( T1 == nullptr )
//			return false;
//		if( T1->val == T2->val ) {
//			if( judgeSubtree( T1, T2 ) == true ){
//				return true;
//			}
//		}
//		if( isSubtree( T1->left, T2 ) == true )
//			return true;
//		return isSubtree( T1->right, T2 );
//    }
//};
//
//void deleteTree( TreeNode * pRoot ){
//	if( pRoot == nullptr )
//		return;
//	deleteTree( pRoot->left );
//	deleteTree( pRoot->right );
//	delete pRoot;
//}
//
//int main(){
//
//	TreeNode * pT1 = new TreeNode( 1 );
//	pT1->left = new TreeNode( 2 );
//	pT1->right = new TreeNode( 3 );
//	pT1->right->left = new TreeNode( 4 );
//
//	TreeNode * pT2 = new TreeNode( 3 );
//	pT2->right = new TreeNode( 4 );
//
//	Solution s;
//	bool bRet = s.isSubtree( pT1, pT2 );
//	
//	deleteTree( pT1 );
//	deleteTree( pT2 );
//
//	return 0;
//}