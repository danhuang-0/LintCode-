//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param A: Given an integer array
//     * @return: nothing
//     */
//
//	void adjust( vector<int> &vecNum, int nIndex ){
//		if( nIndex >= vecNum.size() )
//			return;
//		
//		int nLeft = nIndex * 2 + 1;
//		int nRight = nIndex * 2 + 2 ;
//		if( nLeft >= vecNum.size() )
//			return;
//		if( vecNum[nIndex] < vecNum[nLeft] && 
//			( nRight>=vecNum.size()|| vecNum[nIndex] < vecNum[nRight] ) ){
//			return;
//		}
//		int nMin;
//		if( nRight < vecNum.size() ){
//			nMin = vecNum[nLeft] < vecNum[nRight] ? nLeft : nRight;
//		} else {
//			nMin = nLeft;
//		}
//		swap( vecNum[nIndex], vecNum[nMin]);
//		adjust( vecNum, nMin );
//	}
//
//    void heapify(vector<int> &A) {
//        // write your code here
//		for( int i=A.size()/2; i>=0; i-- )
//			adjust( A, i );
//    }
//};
//
//int main(){
//
//	int arr[] = { 3,2,1,4,5 };
//	vector<int> vecNums( begin(arr), end(arr) );
//	Solution s;
//	s.heapify( vecNums );
//
//
//	return 0;
//}