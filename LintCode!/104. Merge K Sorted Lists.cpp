//// 暴力过的
//// 其实这道题应该使用小顶堆进行操作
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
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
//    /**
//     * @param lists: a list of ListNode
//     * @return: The head of one sorted list.
//     */
//
//    ListNode *mergeKLists(vector<ListNode *> &lists) {
//        // write your code here
//		if( lists.size() == 0 )
//			return nullptr;
//		if( lists.size() == 1 )
//			return lists[0];
//
//		int nIsOver = 0;
//		ListNode *pHead = nullptr;;
//		int minIndex = -1;
//
//		for( int i=0; i<lists.size(); i++ ){
//			if( !lists[i] ){
//				nIsOver ++;
//				continue;
//			}
//			if( !pHead || lists[i]->val < pHead->val ){
//				minIndex = i;
//				pHead = lists[i];
//			}
//		}
//		if( minIndex == -1 )
//			return nullptr;
//		lists[minIndex] = lists[minIndex]->next;
//		if( !lists[minIndex] )
//			nIsOver ++;
//		
//		ListNode * pNode = pHead;
//		
//		while( nIsOver < lists.size() ){
//			ListNode * pMin = nullptr;
//			for( int i=0; i<lists.size(); i++ ){
//				if( !lists[i] ){
//					continue;
//				}
//				if( !pMin || lists[i]->val < pMin->val ){
//					minIndex = i;
//					pMin = lists[i];
//				}
//			}
//			pNode->next = pMin;
//			pNode = pMin;
//			lists[minIndex] = lists[minIndex]->next;
//			if( !lists[minIndex] )
//				nIsOver ++;
//		}
//		return pHead;
//    }
//};