//// 简单的二分查找，找到了就返回
//// 没找到的话，当前left的下标就是最后一个比target小的下标
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: an integer sorted array
//     * @param target: an integer to be inserted
//     * @return: An integer
//     */
//    int searchInsert(vector<int> &A, int target) {
//        // write your code here
//
//		if( A.size() == 0 )
//			return 0;
//
//		int nLeft = 0;
//		int nRight = A.size() - 1;
//		int nMid = ( nLeft + nRight ) / 2;
//		
//		while( nLeft <= nRight ){
//			if( A[nMid] == target )
//				break;
//			else if( target > A[nMid] )
//				nLeft = nMid + 1;
//			else
//				nRight = nMid - 1;
//			nMid = ( nLeft + nRight ) / 2;
//		}
//		return nLeft <= nRight ? nMid : nLeft;
//    }
//};
//
//int main(){
//
//	int arr[] = {1,3,5,6};
//	Solution s;
//	s.searchInsert( vector<int> ( begin(arr), end(arr) ), 3);
//	s.searchInsert( vector<int> ( begin(arr), end(arr) ), 4);
//	s.searchInsert( vector<int> ( begin(arr), end(arr) ), 0);
//	s.searchInsert( vector<int> ( begin(arr), end(arr) ), 7);
//	return 0;
//}