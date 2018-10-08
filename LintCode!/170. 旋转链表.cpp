//// �ȴ��� K ����K����ɺ��������
//// ���˵�������Ϊ0��1�����������Ҫ��
//// ֮��ֻҪ�ҵ��µ�ͷ�����ض��������½��Ͼͺ���
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
//     * @param head: the List
//     * @param k: rotate to the right k places
//     * @return: the list after rotation
//     */
//    ListNode * rotateRight(ListNode * head, int k) {
//        // write your code here
//		
//		ListNode * pNode = head;
//		int nSize = 0;
//		while( pNode ){
//			nSize ++;
//			pNode = pNode -> next;
//		}
//		if( nSize <= 1 )
//			return head;
//		k = ( k % nSize + nSize ) % nSize;
//		if( k == 0 )
//			return head;
//		ListNode * pTail = head;
//		k = nSize - k;
//		for( int i=0; i<k-1; i++ )
//			pTail = pTail->next;
//		pNode = pTail;
//		pTail = pTail->next;
//		pNode->next = nullptr;
//		pNode = pTail;
//		while( pTail->next )
//			pTail = pTail->next;
//		pTail->next = head;
//		return pNode;
//    }
//};
//
//int main(){
//
//	vector<ListNode> vecNodes;
//	for( int i=1; i<=5; i++ )
//		vecNodes.push_back( ListNode(i) );
//	for( int i=0; i<4; i++ )
//		vecNodes[i].next = &vecNodes[i+1];
//	Solution s;
//	ListNode * p =  s.rotateRight( &vecNodes[0] , 2 );
//	return 0;
//}