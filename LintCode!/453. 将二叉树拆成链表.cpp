//// ע�͵��������Ǳ��˫���������
//// ������Ŀ�ԲУ�����Ҫ��ɵ��������
//// ����˼·���ǰ���ǰ�����һ�����ȵ�ǰ����������
//// �����õݹ���������̬ά��һ�����Ľڵ�ָ��
//// �ȵݹ鴦����������Ȼ��ӵ������
//// �ٵݹ鴦����������Ȼ��ӵ������
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
//		// ��������β
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