//// 跟数组合并一样，很简单
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
//     * @param l1: ListNode l1 is the head of the linked list
//     * @param l2: ListNode l2 is the head of the linked list
//     * @return: ListNode head of linked list
//     */
//    ListNode * mergeTwoLists(ListNode * l1, ListNode * l2) {
//        // write your code here
//		if( l1==nullptr )
//			return l2;
//		if( l2==nullptr )
//			return l1;
//		ListNode *pHead;
//		if( l1->val < l2->val ){
//			pHead = l1;
//			l1 = l1->next;
//		} else {
//			pHead = l2;
//			l2 = l2->next;
//		}
//		ListNode *pNode = pHead;
//		while( l1 && l2 ){
//			if( l1->val < l2 ->val ){
//				pNode->next = l1;
//				l1 = l1->next;
//			} else {
//				pNode->next = l2;
//				l2 = l2->next;
//			}
//			pNode = pNode->next;
//		}
//		if( l1 ) {
//			pNode->next = l1;
//		}
//		if ( l2 ){
//			pNode->next = l2;
//		}
//		return pHead;
//    }
//};
//
//int main(){
//	vector<ListNode> vecL1, vecL2;
//	vecL1.push_back(1);
//	vecL1.push_back(3);
//	vecL1.push_back(8);
//	vecL1.push_back(11);
//	vecL1.push_back(15);
//
//	for( int i=0; i<4; i++ )
//		vecL1[i].next = &vecL1[i+1];
//	vecL2.push_back(2);
//
//	Solution s;
//	s.mergeTwoLists(&vecL1[0], &vecL2[0] );
//
//	return 0;
//}