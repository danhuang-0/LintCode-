//// �������������ڵ㽻��������
//// ��Ҫע�����Ҫ�ҵ�Ҫ�����ڵ�ǰ��Ľڵ�
//// ���ܴ���ǰ��ڵ�� next ����
//// ����Ƚ϶࣬��Ҫ�����ǵ���ע�⿴��������
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
//     * @param head: a ListNode
//     * @param v1: An integer
//     * @param v2: An integer
//     * @return: a new head of singly-linked list
//     */
//    ListNode * swapNodes(ListNode * head, int v1, int v2) {
//        // write your code here
//		if( head == nullptr )
//			return head;
//		if( v1 == v2 )
//			return head;
//		ListNode * preV1 = nullptr;
//		ListNode * preV2 = nullptr;
//		auto pNode = head;
//		while( pNode->next && ( !preV1 || !preV2) ){
//			// ֻ�ҵ���һ��
//			if( !preV1 && pNode->next->val == v1 )
//				preV1 = pNode;
//			if( !preV2 && pNode->next->val == v2 )
//				preV2 = pNode;
//			pNode = pNode->next;
//		}
//		if( head->val == v1 || head->val == v2 ){
//
//			ListNode * swapPre = head->val == v1 ? preV2 : preV1;
//			if( swapPre == nullptr )
//				return head;
//			ListNode * pNext = head->next;
//			if( head->next == swapPre->next ){
//				head->next = pNext->next;
//				pNext->next = head;
//				return pNext;
//			}
//			ListNode * pRet = swapPre->next;
//			head->next = pRet->next;
//			swapPre->next = head;
//			pRet->next = pNext;
//			return pRet;
//		}
//		if( preV1 == nullptr || preV2 == nullptr )
//			return head;
//		if( preV1->next == preV2 || preV2->next == preV1 ){
//			ListNode * pPre = preV1->next == preV2 ? preV1 : preV2;
//			ListNode * pFirst = pPre->next;
//			ListNode * pSecond = pFirst->next;
//			pPre->next = pSecond;
//			pFirst->next = pSecond->next;
//			pSecond->next = pFirst;
//		} else {
//			ListNode * p1 = preV1->next;
//			ListNode * p2 = preV2->next;
//			ListNode * p1Next = p1->next;
//			ListNode * p2Next = p2->next;
//			p1->next = p2Next;
//			p2->next = p1Next;
//			preV1->next = p2;
//			preV2->next = p1;
//		}
//		return head;
//    }
//};
//
//int main(){
//
//	vector<ListNode> vecNodes(10, 0);
//	for( int i=0; i<vecNodes.size(); i++ )
//		vecNodes[i].val = i+1;
//	for( int i=0; i<vecNodes.size()-1; i++ )
//		vecNodes[i].next = &vecNodes[i+1];
//	Solution s;
//	//s.swapNodes( &vecNodes[0], 3, 6 );  // �޹���������ڵ�
//	//s.swapNodes( &vecNodes[0], 1, 2 );  // ͷ�Ͷ�������
//	//s.swapNodes( &vecNodes[0], 2, 1 );  // ͷ�Ͷ�������
//	//s.swapNodes( &vecNodes[0], 1, 3 );  // ͷ�͸�һ���ڵ�
//	//s.swapNodes( &vecNodes[0], 1, 4 );  // ͷ�������ڵ�
//	//s.swapNodes( &vecNodes[0], 1, 10 ); // ͷ��β
//	//s.swapNodes( &vecNodes[0], 4, 5 );  // ���ڵ�����������
//	//s.swapNodes( &vecNodes[0], 5, 4 );  // ���ڵ�����������
//	//s.swapNodes( &vecNodes[0], 9, 10 ); // ���ڵ���������β
//	//s.swapNodes( &vecNodes[0], 4, 11 ); // ��ͨδ�ҵ�
//	//s.swapNodes( &vecNodes[0], 1, 11 ); // ͷ��δ�ҵ�
//	//s.swapNodes( &vecNodes[0], 10, 11 );// β��δ�ҵ�
//	//s.swapNodes( &vecNodes[0], 11, 12 );// ��δ�ҵ�
//	//s.swapNodes( &vecNodes[0], 4, 4 );  // ��ֵ��ͬ
//	s.swapNodes( nullptr, 1, 2); // ͷ�ڵ�Ϊ��
//	return 0;
//}