//// 排序之后双指针进行判断
//// 思路类似于 MergeSort
//// 如果 Ai > Bj 则需要让 Bj 变大，使差值变小
//// 反之则让 Ai 变大，使差值变小
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: An integer array
//     * @param B: An integer array
//     * @return: Their smallest difference.
//     */
//    int smallestDifference(vector<int> &A, vector<int> &B) {
//        // write your code here
//		if( A.size() == 0 && B.size() == 0 )
//			return 0;
//		int nMin = INT_MAX;
//		if( A.size() == 0 ){
//			for( auto b : B )
//				if( abs(b) < nMin )
//					nMin = abs(b);
//			return nMin;
//		}
//		if( B.size() == 0 ){
//			for( auto a : A )
//				if( abs(a) < nMin )
//					nMin = abs(a);
//			return nMin;
//		}
//
//		sort( A.begin(), A.end() );
//		sort( B.begin(), B.end() );
//
//		int indexOfA = 0;
//		int indexOfB = 0;
//		
//		while( indexOfA < A.size() && indexOfB < B.size() ){
//			int nSub = abs( A[indexOfA] - B[indexOfB ] );
//			if( nSub < nMin )
//				nMin = nSub ;
//			if( nSub == 0 )
//				return 0;
//			if( A[indexOfA] > B[indexOfB] )
//				indexOfB ++;
//			else
//				indexOfA ++;
//		}
//		return nMin;
//    }
//};
//
//int main(){
//
//	int arrA[] = {3,4,6,7};
//	//int arrB[] = {2,3,8,9};
//	int arrB[] = { 1, 5, 9 };
//	auto vecA = vector<int>(begin(arrA), end(arrA));
//	auto vecB = vector<int>(begin(arrB), end(arrB));
//
//	Solution s;
//	s.smallestDifference( vecA, vecB );
//	return 0;
//}