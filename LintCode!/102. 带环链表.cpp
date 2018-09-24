//// 让一个指针每一次走两步
//// 另一个指针每一次走一步
//// 一旦两个指针相遇了说明这个链表中有环
//// 第二个指针先走到NULL了肯定没环
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
//
//class Solution {
//public:
//    /**
//     * @param head: The first node of linked list.
//     * @return: True if it has a cycle, or false
//     */
//    bool hasCycle(ListNode * head) {
//        // write your code here
//		
//		if( head == nullptr )
//			return false;
//
//		ListNode * pOneStep = head;
//		ListNode * pTwoStep = head->next ;
//		
//		bool bHasCycle = false  ;
//		while( pTwoStep ){
//			
//			if( pTwoStep == pOneStep ){
//				bHasCycle = true;
//				break;
//			}
//			pOneStep = pOneStep->next;
//			pTwoStep = pTwoStep->next;
//			if( pTwoStep )
//				pTwoStep = pTwoStep->next;
//		}
//		return bHasCycle;
//    }
//};