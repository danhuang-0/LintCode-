//// 注释掉的做法是变成双链表的做法
//// 但是题目脑残，必须要变成单链表才行
//// 整体思路就是按照前序遍历一样，先当前，再左，再右
//// 可以用递归来处理，动态维护一个最后的节点指针
//// 先递归处理左子树，然后接到最后面
//// 再递归处理右子树，然后接到最后面
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
//     * @param root: a TreeNode, the root of the binary tree
//     * @return: nothing
//     */
//
//	void flattenSubTree( TreeNode * root, TreeNode **pTail ){
//		if( root == nullptr ) {
//			return;
//		}
//		TreeNode * pTempLeft = root->left;
//		TreeNode * pTempRight = root->right;
//
//		// root->left = *pTail == nullptr ? nullptr: *pTail;
//		root->left = nullptr;
//		*pTail = root;
//
//		root->right = pTempLeft;
//		flattenSubTree( pTempLeft, pTail );
//
//		// 左子树的尾
//		TreeNode * pTempTail = *pTail;
//
//		flattenSubTree( pTempRight, pTail );
//
//		if( pTempTail )
//			pTempTail->right = pTempRight;
//		//if( pTempRight )
//		// 	pTempRight->left = pTempTail;
//	}
//
//    void flatten(TreeNode * root) {
//        // write your code here
//		if( !root )
//			return;
//		TreeNode * pTemp = nullptr;
//		flattenSubTree( root , &pTemp );
//    }
//};
//
//int main(){
//	TreeNode root(1);
//	root.left = new TreeNode(2);
//	root.right = new TreeNode(5);
//	root.left->left = new TreeNode(3);
//	root.left->right = new TreeNode(4);
//	root.right->right = new TreeNode(6);
//
//	Solution s;
//	s.flatten( &root );
//
//	return 0;
//}