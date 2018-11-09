//// 和链表合并有点像
//// 不过要注意处理最后的进位问题
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
//     * @param l1: the first list
//     * @param l2: the second list
//     * @return: the sum list of l1 and l2 
//     */
//    ListNode * addLists(ListNode * l1, ListNode * l2) {
//        // write your code here
//		if( l1 == nullptr )
//			return l2;
//		if( l2 == nullptr )
//			return l1;
//
//		bool bHasCarry = false;
//		int nSum = l1->val + l2->val;
//		if( nSum >= 10 ){
//			nSum %= 10;
//			bHasCarry = true;
//		}
//		ListNode * pHead = new ListNode( nSum );
//		ListNode * pNode = pHead;
//		l1 = l1->next;
//		l2 = l2->next;
//		while( l1 && l2 ){
//			nSum = l1->val + l2->val;
//			if( bHasCarry )
//				nSum ++;
//			if( nSum >= 10 ){
//				nSum %= 10;
//				bHasCarry = true;
//			} else {
//				bHasCarry = false;
//			}
//			pNode->next = new ListNode( nSum );
//			pNode = pNode->next;
//			l1 = l1->next;
//			l2 = l2->next;
//		}
//		// 两个链表都空了 处理一下进位就行了
//		if( !l1 && !l2 ){
//			if( bHasCarry ){
//				pNode->next = new ListNode( 1 );
//			}
//		} else if ( l1 ) {
//			while( l1 ) {
//				nSum = l1->val;
//				if( bHasCarry ) 
//					nSum++;
//				if( nSum >= 10 ) {
//					bHasCarry = true;
//					nSum %= 10;
//				} else {
//					bHasCarry = false;
//				}
//				pNode->next = new ListNode( nSum );
//				pNode = pNode->next;
//				l1 = l1->next;
//			}
//			if( bHasCarry )
//				pNode->next = new ListNode( 1 );
//		} else {
//			while( l2 ) {
//				nSum = l2->val;
//				if( bHasCarry ) 
//					nSum++;
//				if( nSum >= 10 ) {
//					bHasCarry = true;
//					nSum %= 10;
//				} else {
//					bHasCarry = false;
//				}
//				pNode->next = new ListNode( nSum );
//				pNode = pNode->next;
//				l2 = l2->next;
//			}
//			if( bHasCarry )
//				pNode->next = new ListNode( 1 );
//		}
//		return pHead;
//    }
//};
//
//int main(){
//
//	vector<ListNode> vecNodes[2];
//	vecNodes[0].push_back( ListNode(3) );
//	vecNodes[0].push_back( ListNode(1) );
//	vecNodes[0].push_back( ListNode(5) );
//
//	vecNodes[1].push_back( ListNode(5) );
//	vecNodes[1].push_back( ListNode(9) );
//	vecNodes[1].push_back( ListNode(5) );
//	vecNodes[1].push_back( ListNode(9) );
//
//	for( int i=0; i<vecNodes[0].size()-1; i++ )
//		vecNodes[0][i].next = &vecNodes[0][i+1];
//
//	for( int i=0; i<vecNodes[1].size()-1; i++ )
//		vecNodes[1][i].next = &vecNodes[1][i+1];
//
//	Solution s;
//	s.addLists( &vecNodes[0][0], &vecNodes[1][0] );
//	return 0;
//}