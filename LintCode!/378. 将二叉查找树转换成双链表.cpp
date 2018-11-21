//// ��������ⲻ��ʹ��ԭ����˫������
//// ���Բ�����������ķ������߱����߹���˫������
//// ��Ҫע��öԿյĴ���
//
//#include <iostream>
//
//using namespace std;
//
//class DoublyListNode {
//public:
//    int val;
//    DoublyListNode *next, *prev;
//    DoublyListNode(int val) {
//        this->val = val;
//        this->prev = this->next = NULL;
//    }
//};
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
//     * @param root: The root of tree
//     * @return: the head of doubly list node
//     */
//
//	void DFS( TreeNode * root, DoublyListNode ** pRet ){
//		if( root == nullptr )
//			return ;
//		DFS( root->left, pRet );
//		auto pNode = new DoublyListNode( root->val );
//		if( *pRet != nullptr ){
//			(*pRet)->next = pNode;
//			pNode->prev = *pRet;
//		}
//		*pRet = pNode;
//		DFS( root->right, pRet );
//	}
//    DoublyListNode * bstToDoublyList(TreeNode * root) {
//        // write your code here
//		if( root == nullptr )
//			return nullptr;
//		DoublyListNode * pRet = nullptr;
//		DFS( root, &pRet );
//		while( pRet->prev != nullptr )
//			pRet = pRet->prev;
//		return pRet;
//    }
//};
//
//int main (){
//
//
//	TreeNode * pRoot = new TreeNode( 4 );
//	pRoot->left = new TreeNode( 2 );
//	pRoot->left->left = new TreeNode( 1 );
//	pRoot->left->right = new TreeNode( 3 );
//	pRoot->right = new TreeNode( 5 );
//
//	Solution s;
//	s.bstToDoublyList( nullptr );
//
//	return 0;
//}