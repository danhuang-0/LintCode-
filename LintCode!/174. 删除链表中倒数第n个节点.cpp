//// ͬ������Ŀ��֤�˸�������n�Ϳ��Լ��ٺܶ��������
//// ����һ����ǰ��N��
//// ����һ��ָ�����һ���ߣ�ͬʱά��һ��ǰ���ָ�����ɾ��
//// Ҫ����ɾ���Ľڵ�Ϊͷ�ڵ���������
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
//     * @param head: The first node of linked list.
//     * @param n: An integer
//     * @return: The head of linked list.
//     */
//    ListNode * removeNthFromEnd(ListNode * head, int n) {
//        // write your code here
//		ListNode * pDel = head;
//		ListNode * pTail = head;
//		ListNode * pFront = head;
//		for( int i=0; i<n; i++ )
//			pTail = pTail->next;
//		if( pTail ){
//			pDel = pDel->next;
//			pTail = pTail->next;
//		}
//		while( pTail ){
//			pFront = pFront->next;
//			pDel = pDel->next;
//			pTail = pTail->next;
//		}
//		if( pDel == head ){
//			ListNode * pRet = head->next;
//			delete head;
//			return pRet;
//		}
//		pFront->next = pDel->next;
//		delete pDel;
//		return head;
//    }
//};