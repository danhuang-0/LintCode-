//#include <iostream>
//
//using namespace std;
//class ListNode {
//public:
//	ListNode(){}
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
//     * @param head: n
//     * @return: The new head of reversed linked list.
//     */
//    ListNode * reverse(ListNode * head) {
//        // write your code here
//		if ( !head ) 
//			return NULL;
//
//		ListNode *left = NULL,
//				 *mid = head,
//				 *right = head->next;
//
//		while ( right!=NULL ) {
//			mid->next = left;
//			left = mid;
//			mid = right;
//			right = right->next;
//		}
//		mid->next = left;
//		return mid;
//    }
//};
//
//int main(){
//
//	ListNode arrNode[5];
//	
//	for( int i=0; i<5; i++)
//		arrNode[i].val = i;
//	for( int i=0; i<4; i++ )
//		arrNode[i].next = &arrNode[i+1];
//	arrNode[4].next = NULL;
//	for( ListNode *p=&arrNode[0]; p!=NULL; p=p->next )
//		printf("%d\n", p->val);
//
//	Solution s;
//	ListNode *p = s.reverse( &arrNode[0] );
//	printf("-----");
//	for( p ; p!=NULL; p=p->next )
//		printf("%d\n", p->val);
//	system("pause");
//	return 0;
//}