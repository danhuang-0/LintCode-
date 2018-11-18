//// 题目中已经保证不是头或者尾了
//// 再一个，这个输入，你也没办法做处理
//// 只需要把要删除的节点赋值为下一个节点的值
//// 之后 O(1) 的时间删除下一个节点就行了
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
//     * @param node: the node in the list should be deletedt
//     * @return: nothing
//     */
//    void deleteNode(ListNode * node) {
//        // write your code here
//		if( node == nullptr )
//			return;
//		ListNode *pNext = node->next;
//		
//		node->val = pNext->val;
//		node->next = pNext->next;
//		delete pNext;
//		return;
//    }
//};