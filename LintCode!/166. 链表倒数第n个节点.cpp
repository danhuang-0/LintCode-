//// 题目中保证了节点个数大于n
//// 所以去掉了不必要的处理，很简单的做就好了
//// 一个指针先走n步的方法去做
//
//#include <iostream>
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
//class Solution {
//public:
//    /*
//     * @param head: The first node of linked list.
//     * @param n: An integer
//     * @return: Nth to last node of a singly linked list. 
//     */
//    ListNode * nthToLast(ListNode * head, int n) {
//        // write your code here
//
//		ListNode * pTail = head;
//		ListNode * pFront = head;
//		for( int i=0; i<n; i++ )
//			pTail = pTail->next;
//		while( pTail ){
//			pFront = pFront->next;
//			pTail = pTail->next;
//		}
//		return pFront;
//    }
//};