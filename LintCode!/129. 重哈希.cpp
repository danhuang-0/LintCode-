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
//int hashcode(int key, int capacity) {
//    return key % capacity;
//}
//
//class Solution {
//public:
//    /**
//     * @param hashTable: A list of The first node of linked list
//     * @return: A list of The first node of linked list which have twice size
//     */    
//    vector<ListNode*> rehashing(vector<ListNode*> hashTable) {
//        // write your code here
//		
//		if( hashTable.size()==0 )
//			return vector<ListNode*>();
//		int capacity = 2 * hashTable.size();
//		vector<ListNode *> vecRet( capacity, nullptr );
//		for( auto pNode : hashTable ){
//			while( pNode ){
//				ListNode * pTemp = pNode->next;
//				pNode->next = nullptr;
//				int nLoc = ( pNode->val % capacity + capacity ) % capacity;
//				ListNode * pLoc = vecRet[nLoc];
//				if( pLoc == nullptr ){
//					vecRet[nLoc] = pNode;
//				} else {
//					while( pLoc->next )
//						pLoc = pLoc->next;
//					pLoc->next = pNode;
//				}
//				pNode = pTemp;
//			}
//		}
//		return vecRet;
//    }
//};