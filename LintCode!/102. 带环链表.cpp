//// ��һ��ָ��ÿһ��������
//// ��һ��ָ��ÿһ����һ��
//// һ������ָ��������˵������������л�
//// �ڶ���ָ�����ߵ�NULL�˿϶�û��
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