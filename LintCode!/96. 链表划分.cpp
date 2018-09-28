//// �� vector ��¼�������������������������
//// �ر�򵥵�һ���⣬Ҫע���ϸ���ر��
//// �п���û�б�xС������Ҳ�п���û�д��ڵ���x������С��ջ���
//// ������β��nullptr�ᵼ�²���ʱ����������ʱ
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
//     * @param head: The first node of linked list
//     * @param x: An integer
//     * @return: A ListNode
//     */
//	
//    ListNode * partition(ListNode * head, int x) {
//        // write your code here
//		if( !head )
//			return nullptr;
//		if( !head->next )
//			return head;
//		vector<ListNode *> vecLarger;
//		vector<ListNode *> vecSmaller;
//
//		for( auto p=head; p ; p=p->next ){
//			if( p->val < x )
//				vecSmaller.push_back( p );
//			else
//				vecLarger.push_back( p );
//		}
//		if( vecSmaller.size() != 0 )
//			head = vecSmaller[0];
//		else
//			head = vecLarger[0];
//		ListNode * pNode = head;
//		for( int i=1; i<vecSmaller.size(); i++ ){
//			pNode->next = vecSmaller[i];
//			pNode = pNode->next;
//		}
//		int index = 0;
//		// no smaller
//		if( !vecLarger.empty() && pNode == vecLarger[0] )
//			index = 1;
//		while( index < vecLarger.size() ){
//			pNode->next = vecLarger[index];
//			index ++;
//			pNode = pNode->next;
//		}
//		pNode->next = nullptr;
//		return head;
//    }
//};
//
//int main (){
//
//	ListNode nodes[] = {1,4,3,2,5,2};
//	for( int i=0; i<5; i++)
//		nodes[i].next = &nodes[i+1];
//	Solution s;
//	s.partition( &nodes[0], 15 );
//
//
//	return 0;
//}