//// ����׷������һ��һ����һ����һ��һ��������
//// ׷������ʱ�����Ĳ���һ���ǻ����ȵ�������
//// ֮������һ��ָ�����߻��������ľ���
//// ����һ��ָ�뿪ʼ�ߣ������ĵص���ǻ�����ڡ�
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
//     * @param head: The first node of linked list.
//     * @return: The node where the cycle begins. if there is no cycle, return null
//     */
//    ListNode * detectCycle(ListNode * head) {
//        // write your code here
//		if( head == nullptr )
//			return nullptr;
//		ListNode * pOneStep = head;
//		ListNode * pTwoStep = head->next;
//		int nStep = 1;
//		while( pTwoStep ) {
//			if( pOneStep == pTwoStep ){
//				break;
//			}
//			nStep ++;
//			pOneStep = pOneStep->next;
//			pTwoStep = pTwoStep->next;
//			if( pTwoStep )
//				pTwoStep = pTwoStep->next;
//
//		}
//		if( pTwoStep == nullptr )
//			return nullptr;
//		ListNode * pFront = head;
//		while( nStep-- )
//			pFront = pFront->next;
//		ListNode *pTail = head;
//		while( pFront != pTail ){
//			pFront = pFront->next;
//			pTail = pTail->next;
//		}
//		return pFront;
//    }
//};
//
//int main (){
//
//	vector<ListNode> vecNodes;
//	for( int i=0; i<5; i++ )
//		vecNodes.push_back( ListNode(i) );
//	for( int i=0; i<4; i++ )
//		vecNodes[i].next = &vecNodes[i+1];
//	vecNodes[4].next = &vecNodes[2];
//
//	Solution s;
//	s.detectCycle( &vecNodes[0]);
//	return 0;
//}