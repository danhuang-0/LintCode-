//// ��ָOFFER˼·
//// �Ȱ������� ��ÿһ������ԭ�����ϸ���һ��
//// ֮�������ָ�룬���ƹ�����һ�����ָ��ֻҪָ��ǰ�����ָ��ָ�����һ��������
//// ��������һ��Ϊ����
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct RandomListNode {
//    int label;
//    RandomListNode *next, *random;
//    RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
//};
//
//class Solution {
//public:
//    /**
//     * @param head: The head of linked list with a random pointer.
//     * @return: A new head of a deep copy of the list.
//     */
//    RandomListNode *copyRandomList(RandomListNode *head) {
//         // write your code here
//		if( head==nullptr )
//			return nullptr;
//
//		RandomListNode * pNode = head;
//		while( pNode ){
//			RandomListNode * pTemp = new RandomListNode( pNode->label );
//			pTemp->next = pNode->next;
//			pNode->next = pTemp;
//			pNode = pTemp->next;
//		}
//		pNode = head;
//		while( pNode ){
//			if( pNode->random )
//				pNode->next->random = pNode->random->next;
//			pNode = pNode->next;
//			pNode = pNode->next;
//		}
//		RandomListNode * pRet = head->next;
//		RandomListNode * pRetIte = pRet;
//		RandomListNode * pOrigin = head;
//		pNode = pRet->next;
//		while( pNode ){
//			pOrigin->next = pNode;
//			pOrigin = pOrigin->next;
//			pRetIte->next = pNode->next;
//			pRetIte = pRetIte->next;
//			pNode = pNode->next->next;
//		}
//		pOrigin->next = nullptr;
//		pRetIte->next = nullptr;
//		return pRet;
//    }
//};
//
//int main (){
//
//	vector<RandomListNode> vecNodes;
//	for( auto i=0; i<10; i++ )
//		vecNodes.push_back( RandomListNode(i) );
//	for( auto i=0; i<9; i++ )
//		vecNodes[i].next = &vecNodes[i+1];
//
//	vecNodes[5].random = &vecNodes[0];
//	vecNodes[0].random = &vecNodes[9];
//
//	Solution s;
//
//	auto ret = s.copyRandomList( &vecNodes[0] );
//
//	while( ret ){
//		auto temp = ret->next;
//		delete ret;
//		ret = temp;
//	}
//	return 0;
//}