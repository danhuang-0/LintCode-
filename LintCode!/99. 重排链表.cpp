//// 先拆成前后两个链表
//// 翻转后面的链表
//// 之后和为一个链表
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
//     * @param head: The head of linked list.
//     * @return: nothing
//     */
//    void reorderList(ListNode * head) {
//        // write your code here
//		
//		// 一分为二
//		if( head == nullptr )
//			return;
//		if( head->next == nullptr )
//			return;
//		ListNode * pOneStep = head;
//		ListNode * pTwoStep = head->next;
//		while( pTwoStep->next ){
//			pOneStep = pOneStep->next;
//			pTwoStep = pTwoStep->next;
//			if( pTwoStep->next )
//				pTwoStep = pTwoStep->next;
//		}
//		ListNode * pBack = pOneStep->next;
//		pOneStep->next = nullptr;
//
//		// 翻转后半
//		ListNode * pBefore = nullptr;
//		ListNode * pCur = pBack;
//		ListNode * pAfter = pBack;
//		while( pCur->next ){
//			pAfter = pCur->next;
//			pCur->next = pBefore;
//			pBefore = pCur;
//			pCur = pAfter;
//		}
//		pCur->next = pBefore;
//		pBack = pCur;
//
//		// 拼接链表
//		ListNode * pOld = head;
//		ListNode * pNew = pBack;
//		ListNode * pTemp;
//		while( pNew ){
//			pTemp = pNew->next;
//			pNew->next = pOld->next;
//			pOld->next = pNew;
//			pOld = pNew->next;
//			pNew = pTemp;
//		}
//    }
//};
//
//int main (){
//
//	vector< ListNode > vecNodes;
//	for( int i=0; i<9; i++ )
//		vecNodes.push_back( ListNode(i) );
//	for( int i=0; i<8; i++ )
//		vecNodes[i].next = &vecNodes[i+1];
//
//	Solution s;
//	s.reorderList( &vecNodes[0]);
//	return 0;
//}