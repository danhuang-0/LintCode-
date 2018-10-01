//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class ListNode {
//public:
//    int val;
//    ListNode *next;
//    ListNode(int val) {
//        this->val = val;
//        this->next = NULL;
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
//class Solution {
//public:
//    /*
//     * @param head: The first node of linked list.
//     * @return: a tree node
//     */
//	void DFS( vector<int> &vecNums, TreeNode **root, int nLeft, int nRight ){
//		if( nLeft > nRight )
//			return;
//		int nMid = ( nLeft + nRight ) / 2 ;
//		*root = new TreeNode( vecNums[nMid] );
//		DFS( vecNums, &((*root)->left), nLeft, nMid - 1 );
//		DFS( vecNums, &((*root)->right), nMid + 1, nRight );
//	}
//    TreeNode * sortedListToBST(ListNode * head) {
//        // write your code here
//		if( !head )
//			return nullptr;
//		vector<int> vecNums;
//		for( auto p=head; p!=nullptr; p=p->next )
//			vecNums.push_back( p->val );
//		TreeNode *pRet;
//		DFS( vecNums, &pRet, 0, vecNums.size()-1);
//		return pRet;
//    }
//};
//
//int main (){
//	vector<ListNode> vecNodes;
//	for( int i=0; i<10; i++ )
//		vecNodes.push_back(ListNode(i));
//	for( int i=0; i<9; i++ )
//		vecNodes[i].next = &vecNodes[i+1];
//	Solution s;
//	s.sortedListToBST( &vecNodes[0] );
//	
//}