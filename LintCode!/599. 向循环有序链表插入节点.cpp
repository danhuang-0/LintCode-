//// 只要找对插入位置就好
//// 需要判断传入是否为空，是否一个节点
//// 是否全是一个值
//// 然后额外注意，当前值有可能比所有的值都大或者都小
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
//        this->val = val;
//        this->next = NULL;
//    }
//};
//
//class Solution {
//public:
//    /*
//     * @param node: a list node in the list
//     * @param x: An integer
//     * @return: the inserted new list node
//     */
//    ListNode * insert(ListNode * node, int x) {
//        // write your code here
//		ListNode *pNode = new ListNode(x);
//		if( node == nullptr ){
//			pNode->next = pNode;
//			return pNode;
//		} else if ( node->next == node ){
//			pNode->next = node->next;
//			node->next = pNode;
//			return node;
//		}
//		ListNode * pLeft = node;
//		ListNode * pRight = node->next;
//
//		while( !(pLeft->val <= x && pRight->val > x) ){
//			pLeft = pRight;
//			pRight = pRight->next;
//			// 循环
//			if( pLeft == node )
//				break;
//			// 头尾交接处
//			if ( pLeft->val > pRight->val ){
//				if( x > pLeft->val )
//					break;
//				if( x < pRight->val )
//					break;
//			}
//		}
//		pLeft->next = pNode;
//		pNode->next = pRight;
//		return node;
//    }
//};
//
//int main(){
//
//	int arr[] = {3,5,1,2};
//	vector<ListNode> vecNodes( begin(arr), end(arr));
//	for( int i=0; i<vecNodes.size()-1; i++ )
//		vecNodes[i].next = & vecNodes[i+1];
//	vecNodes[3].next = &vecNodes[0];
//	Solution s;
//	s.insert( &vecNodes[0], 7);
//	 
//	return 0;
//}