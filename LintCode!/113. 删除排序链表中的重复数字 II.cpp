//// 用一个map计数，删除所有计数大于1的节点就好了
//
//#include <iostream>
//#include <map>
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
//     * @param head: head is the head of the linked list
//     * @return: head of the linked list
//     */
//    ListNode * deleteDuplicates(ListNode * head) {
//        // write your code here
//		if( !head )
//			return nullptr;
//		map<int , int > mapCount;
//		for( auto p=head; p!=nullptr; p=p->next ){
//			mapCount[p->val]++;
//		}
//		while( head && mapCount[head->val]>1 ){
//			head = head->next;
//		}
//		if( !head )
//			return nullptr;
//		auto pLast = head;
//		auto pNode = head->next;
//		while( pNode ){
//			if( mapCount[pNode->val] > 1 ){
//				pLast->next = pNode->next;
//			} else {
//				pLast = pNode;
//			}
//			pNode = pNode->next;
//		}
//		return head;
//    }
//};