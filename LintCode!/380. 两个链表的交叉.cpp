//// ���и����ĵ�����Ϣ�����⣬�����ں�
//// ˼·�����ó�����������ǰ��һ��·����ʣ�µ���������ͬ
//// Ȼ��ͬʱ��ǰ�ߣ�ֱ����ͬΪֹ�������ߵ����ȫ���� nullptr
//// ��Ҫע��������
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
//     * @param headA: the first list
//     * @param headB: the second list
//     * @return: a ListNode
//     */
//    ListNode * getIntersectionNode(ListNode * headA, ListNode * headB) {
//        // write your code here
//		if( headA == nullptr || headB == nullptr )
//			return nullptr;
//		int nSizeOfA = 0;
//		for( auto p = headA; p!=nullptr; p=p->next, nSizeOfA++ );
//		int nSizeOfB = 0;
//		for( auto p = headB; p!=nullptr; p=p->next, nSizeOfB++ );
//		if( nSizeOfA > nSizeOfB ){
//			int nStep = nSizeOfA - nSizeOfB;
//			for( int i=0; i<nStep; i++ )
//				headA = headA->next;
//		}else{
//			int nStep = nSizeOfB - nSizeOfA;
//			for( int i=0; i<nStep; i++ )
//				headB = headB->next;
//		}
//		while( headA != headB ){
//			headA = headA->next;
//			headB = headB->next;
//		}
//		return headA;
//    }
//};
//
//int main(){
//
//	ListNode * pNode = new ListNode( 5 );
//	pNode->next = new ListNode( 6 );
//	pNode->next->next = new ListNode( 7 );
//
//	ListNode * pNodeA = new ListNode( 1 );
//	ListNode * pNodeB = new ListNode( 2 );
//	pNodeB->next = new ListNode( 3 );
//	pNodeB->next->next = pNode;
//	pNodeA->next = pNode;
//
//	Solution s;
//	s.getIntersectionNode( pNodeA, pNodeB );
//	return 0;
//}