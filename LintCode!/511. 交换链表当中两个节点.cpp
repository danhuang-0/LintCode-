//// 就是链表中两节点交换的问题
//// 需要注意的是要找到要交换节点前面的节点
//// 才能处理前面节点的 next 问题
//// 情况比较多，需要都考虑到，注意看测试用例
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
//			// 只找到第一个
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
//	//s.swapNodes( &vecNodes[0], 3, 6 );  // 无关联非特殊节点
//	//s.swapNodes( &vecNodes[0], 1, 2 );  // 头和二，正序
//	//s.swapNodes( &vecNodes[0], 2, 1 );  // 头和二，倒序
//	//s.swapNodes( &vecNodes[0], 1, 3 );  // 头和隔一个节点
//	//s.swapNodes( &vecNodes[0], 1, 4 );  // 头和正常节点
//	//s.swapNodes( &vecNodes[0], 1, 10 ); // 头和尾
//	//s.swapNodes( &vecNodes[0], 4, 5 );  // 两节点相连，正序
//	//s.swapNodes( &vecNodes[0], 5, 4 );  // 两节点相连，倒序
//	//s.swapNodes( &vecNodes[0], 9, 10 ); // 两节点相连，有尾
//	//s.swapNodes( &vecNodes[0], 4, 11 ); // 普通未找到
//	//s.swapNodes( &vecNodes[0], 1, 11 ); // 头和未找到
//	//s.swapNodes( &vecNodes[0], 10, 11 );// 尾和未找到
//	//s.swapNodes( &vecNodes[0], 11, 12 );// 都未找到
//	//s.swapNodes( &vecNodes[0], 4, 4 );  // 数值相同
//	s.swapNodes( nullptr, 1, 2); // 头节点为空
//	return 0;
//}