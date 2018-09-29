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
//     * @param head: a ListNode
//     * @param val: An integer
//     * @return: a ListNode
//     */
//    ListNode * removeElements(ListNode * head, int val) {
//        // write your code here
//		if( !head )
//			return nullptr;
//		while( head && head->val==val ){
//			head = head->next;
//		}
//		if( !head )
//			return nullptr;
//		
//		auto pLast = head;
//		auto pNode = head->next;
//		while( pNode ){
//			if( pNode->val == val ){
//				pLast->next = pNode->next;
//			} else {
//				pLast = pNode;
//			}
//			pNode = pNode->next;
//		}
//		return head;
//	}
//};