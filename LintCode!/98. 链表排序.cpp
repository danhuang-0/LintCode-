#include <iostream>
#include <vector>

using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int val) {
       this->val = val;
       this->next = NULL;
    }
};


class Solution {
public:
    /**
     * @param head: The head of linked list.
     * @return: You should return the head of the sorted linked list, using constant space complexity.
     */

	ListNode * Partition( ListNode * pHead, ListNode * pTail ){
		if( pHead == nullptr || pTail == nullptr )
			return nullptr;
		if( pHead == pTail )
			return pHead;
		swap( pHead->val, pTail->val );
		ListNode *pIndex = pHead;
		for( auto pNode = pHead; pNode != pTail; pNode = pNode->next ){
			if( pNode->val < pTail->val ){
				swap( pNode->val, pIndex->val );
				pIndex = pIndex->next;
			}
		}
		swap( pIndex->val, pTail->val );
		return pIndex;
	}

	ListNode * QuickSort( ListNode * pHead, ListNode * pTail ){
		if( !pHead || !pTail )
			return nullptr;
		if( pHead == pTail )
			return pHead;
		ListNode * pLoc = Partition( pHead, pTail );
		ListNode * pPre = pHead;
		while( pPre != pLoc )
			pPre = pPre->next;

		QuickSort( pHead, pPre );
		QuickSort( pLoc->next, pTail );

		return pHead;
	}

    ListNode * sortList(ListNode * head) {
        // write your code here
		if( nullptr == head )
			return nullptr;
		ListNode * pTail = head;
		while( pTail->next )
			pTail = pTail->next;
		ListNode * pLoc = QuickSort( head, pTail );
		return pLoc;
    }
};

int main (){

	vector<ListNode> vecNodes( 10, 0 );
	for( int i=1; i<10; i++ ){
		vecNodes[i].val = 10 - i;
		vecNodes[i-1].next = &vecNodes[i];
	}

	Solution s;
	s.sortList( &vecNodes[0] );

	return 0;
}