//// ��Ŀ���Ѿ���֤����ͷ����β��
//// ��һ����������룬��Ҳû�취������
//// ֻ��Ҫ��Ҫɾ���Ľڵ㸳ֵΪ��һ���ڵ��ֵ
//// ֮�� O(1) ��ʱ��ɾ����һ���ڵ������
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