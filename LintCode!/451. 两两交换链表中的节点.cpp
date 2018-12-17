//// �൱�����ָ�����
//// ��һ������ͷ����¼���ص�����ͷ
//// һ����������β����¼����β
//// ÿ�δ�ԭ������ȡ���������ڵ㣬����ӵ���������
//// ֱ��ȡ������Ϊֹ
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
//     * @return: a ListNode
//     */
//    ListNode * swapPairs(ListNode * head) {
//        // write your code here
//		if( head == nullptr )
//			return nullptr;
//		if( head->next == nullptr )
//			return head;
//		ListNode * pRet = head->next;;
//		ListNode * pNow = pRet;
//
//		ListNode * pNext = head->next;
//		ListNode * pThis = head;
//		ListNode * pNextOfNext = pNext->next;
//		
//		do{
//			pNow->next = pNext;
//			pNow = pNow->next;
//			pNow->next = pThis;
//			pNow = pNow->next;
//			pThis = pNextOfNext;
//			pNext = pThis ? pThis->next : nullptr;
//			pNextOfNext = pNext ? pNext->next : nullptr;
//		} while( pNext != nullptr );
//		pNow->next = pThis;
//		if( pThis )
//			pThis->next = nullptr;
//		return pRet;
//    }
//};
//
//int main(){
//	
//	vector<ListNode> vecNode(5, 1);
//	for( int i=0; i<vecNode.size(); i++ )
//		vecNode[i].val = i+1;
//	for( int i=0; i<vecNode.size() - 1; i++ )
//		vecNode[i].next = &vecNode[ i + 1 ];
//
//	Solution s;
//	auto p = s.swapPairs( & vecNode[0] ); 
//	return 0;
//}