///*
// * 整体思路为：
// * 将链表分为三段，将中间一段正常进行链表翻转
// * 之后再将三段接起来
// */
//
//#include <iostream>
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
//
//class Solution {
//public:
//    /**
//     * @param head: ListNode head is the head of the linked list
//     * @param m: An integer
//     * @param n: An integer
//     * @return: The head of the reversed ListNode
//     */
//
//    ListNode* Reverse(ListNode *pLeft, ListNode *pRight ){
//        if ( pLeft==NULL )
//            return NULL;
//        ListNode *pFirst = NULL;
//        ListNode *pMid = pLeft;
//        ListNode *pLast = pLeft->next;
//        while( pMid!=pRight ){
//            pMid->next = pFirst;
//            pFirst = pMid;
//            pMid = pLast;
//            pLast = pLast->next;
//        }
//        pMid->next = pFirst;
//        return pMid;
//    }
//
//    ListNode * reverseBetween(ListNode * head, int m, int n) {
//        // write your code here
//
//        ListNode *pLastLeft, *pRightFirst;
//        ListNode *pLeft, *pRight;
//        ListNode *ptr = head;
//        if ( m==1 ){
//            pLastLeft = NULL;
//            pLeft = ptr;
//        } else {
//            for ( int i=0; i<m-2; i++ )
//                ptr = ptr->next;
//            pLastLeft = ptr;
//            pLeft = pLastLeft->next;
//        }
//
//        pRight = pLeft;
//        for( int i=m; i<n; i++ ) {
//            pRight = pRight->next;
//        }
//
//        pRightFirst = pRight->next;
//
//        ListNode *newHead = Reverse(pLeft, pRight);
//        //翻转后左右节点互换
//
//        pLeft->next = pRightFirst;
//        if (pLastLeft!=NULL){
//            pLastLeft->next = pRight;
//        }
//        return m==1?newHead:head ;
//    }
//};
//
//
//int main(){
//
//    auto head = new ListNode(1);
//    auto ptr = head;
//    for( int i=2; i<=5; i++ ){
//        ptr->next = new ListNode(i);
//        ptr = ptr->next;
//    }
//    for( ptr = head; ptr!=NULL; ptr=ptr->next){
//        printf("%d ", ptr->val);
//    }
//    printf("\n");
//    Solution s;
//
//
//    head = s.reverseBetween(head, 1,4);
//    for( ptr = head; ptr!=NULL; ptr=ptr->next){
//        printf("%d ", ptr->val);
//    }
//    printf("\n");
//
//    return 0;
//}