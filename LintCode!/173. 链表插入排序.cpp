//// 就是普通的插入排序，从前往后扫描就行了
//
//#include <iostream>
//#include <iostream>
//#include <vector>
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
//     * @return: The head of linked list.
//     */
//    ListNode * insertionSortList(ListNode * head) {
//        // write your code here
//		
//		ListNode * pRet = nullptr;
//		ListNode * pUnsorted = head ;
//		while( pUnsorted != nullptr ){
//			ListNode * pThis = pUnsorted;
//			pUnsorted = pUnsorted->next;
//			if( pRet == nullptr ){
//				pRet = pThis;
//				pRet->next = nullptr;
//			} else if ( pThis->val < pRet->val ) {
//				pThis->next = pRet;
//				pRet = pThis;
//			} else {
//				ListNode * pNode = pRet;
//				while( pNode->next != nullptr && pNode->next->val < pThis->val )
//					pNode = pNode->next;
//				pThis->next = pNode->next;
//				pNode->next = pThis;
//			}
//		}
//		return pRet;
//    }
//};
//
//using namespace std;
//
//int main(){
//
//	vector<ListNode> vecNodes;
//	vecNodes.push_back( ListNode(1));
//	vecNodes.push_back( ListNode(3));
//	vecNodes.push_back( ListNode(2));
//	vecNodes.push_back( ListNode(0));
//	vecNodes.push_back( ListNode(4));
//	for( int i=0; i<4; i++ )
//		vecNodes[i].next = & vecNodes[i+1];
//	
//	Solution s;
//	s.insertionSortList( &vecNodes[0] );
//	s.insertionSortList( nullptr );
//	s.insertionSortList( &vecNodes[4]);
//	return 0;
//}