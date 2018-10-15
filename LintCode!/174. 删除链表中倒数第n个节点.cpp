//// 同样，题目保证了个数大于n就可以减少很多错误处理步骤
//// 先让一个向前走N步
//// 再让一个指针跟他一起走，同时维护一个前面的指针便于删除
//// 要考虑删除的节点为头节点的特殊情况
//#include <iostream>
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
//     * @param head: The first node of linked list.
//     * @param n: An integer
//     * @return: The head of linked list.
//     */
//    ListNode * removeNthFromEnd(ListNode * head, int n) {
//        // write your code here
//		ListNode * pDel = head;
//		ListNode * pTail = head;
//		ListNode * pFront = head;
//		for( int i=0; i<n; i++ )
//			pTail = pTail->next;
//		if( pTail ){
//			pDel = pDel->next;
//			pTail = pTail->next;
//		}
//		while( pTail ){
//			pFront = pFront->next;
//			pDel = pDel->next;
//			pTail = pTail->next;
//		}
//		if( pDel == head ){
//			ListNode * pRet = head->next;
//			delete head;
//			return pRet;
//		}
//		pFront->next = pDel->next;
//		delete pDel;
//		return head;
//    }
//};