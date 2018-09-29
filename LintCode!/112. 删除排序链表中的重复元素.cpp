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
//
//class Solution {
//public:
//    /**
//     * @param head: head is the head of the linked list
//     * @return: head of linked list
//     */
//    ListNode * deleteDuplicates(ListNode * head) {
//        // write your code here
//
//		if( !head || !head->next )
//			return head;
//		ListNode *pLast = head;
//		ListNode *pNode = head->next;
//		while( pNode ){
//			if( pNode->val == pLast->val ){
//				pLast->next = pNode->next;
//			} else {
//				pLast = pNode;
//			}
//			pNode = pNode->next;
//		}
//		return head;
//    }
//};