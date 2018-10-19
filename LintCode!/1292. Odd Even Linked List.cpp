//// 用两个指针管理奇数节点和偶数节点
//// 来了新节点，一个扔给奇数，一个扔给偶数
//// 之后把两个链表连起来返回就行了
//
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
//       this->val = val;
//       this->next = NULL;
//    }
//};
//
//class Solution {
//public:
//    /**
//     * @param head: a singly linked list
//     * @return: Modified linked list
//     */
//    ListNode * oddEvenList(ListNode * head) {
//        // write your code here
//		if( head == nullptr )
//			return nullptr;
//		if( head->next == nullptr )
//			return head;
//
//		ListNode * pOdd = head;
//		ListNode * pEven = head->next;
//		ListNode * ptr[2] = { pOdd, pEven };
//		ListNode * pNode = pEven->next;
//		int nSelect = 0;
//		while( pNode ){
//			ptr[nSelect]->next = pNode;
//			ptr[nSelect] = pNode;
//			nSelect = 1 - nSelect;
//			pNode = pNode->next;
//		}
//		ptr[0]->next = pEven;
//		ptr[1]->next = nullptr;
//		return pOdd;
//    }
//};
//
//int main(){
//
//	vector< ListNode > vecNodes;
//	for( int i=0; i<9; i++ )
//		vecNodes.push_back( ListNode( i ) );
//	for( int i=0; i<8; i++ )
//		vecNodes[i].next = & vecNodes[i+1];
//
//	Solution s;
//	s.oddEvenList( &vecNodes[0] );
//
//
//	return 0;
//}