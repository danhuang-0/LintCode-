//// 就是无脑贪心循环跑一遍
//// 只要当前数大于上一个数，递增序列计数加一，递减序列置一
//// 小于同理
//// 维护全局最大值即可
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: An array of Integer
//     * @return: an integer
//     */
//    int longestIncreasingContinuousSubsequence(vector<int> &A) {
//        // write your code here
//
//		if( A.size() <= 1 )
//			return A.size();
//
//		int nCountOfInc = 1;
//		int nCountOfDec = 1;
//		int nCountIncNow = 1;
//		int nCountDecNow = 1;
//		for( int i=1; i<A.size(); i++ ){
//			if( A[i] > A[i-1] ){
//				nCountIncNow ++;
//				nCountDecNow = 1;
//			} else if ( A[i] < A[i-1] ){
//				nCountDecNow ++;
//				nCountIncNow = 1;
//			} else {
//				nCountDecNow = 1;
//				nCountIncNow = 1;
//			}
//			
//			if( nCountIncNow > nCountOfInc )
//				nCountOfInc = nCountIncNow;
//			if( nCountDecNow > nCountOfDec )
//				nCountOfDec = nCountDecNow;
//		}
//		return max( nCountOfDec, nCountOfInc );
//    }
//};
//
//int main(){
//
//	// int arr[] = {5, 4, 2, 1, 3};
//	int arr[] = {5, 1, 2, 3, 4};
//	vector<int> vecNums( begin(arr), end(arr) );
//
//	Solution s;
//	s.longestIncreasingContinuousSubsequence( vecNums );
//
//	return 0;
//}