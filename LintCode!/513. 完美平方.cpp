//// ¶¯Ì¬¹æ»®
//// A[ x^2 ] = 1, x = 1,2,3...
//// A[n] = min( A[n-1]+1, A[n-4]+1, A[n-9]+1 ...)
//
//#include <iostream>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: a positive integer
//     * @return: An integer
//     */
//    int numSquares(int n) {
//        // write your code here
//		if( n <= 0 )
//			return 0;
//		vector<int> vecCount( n+1, INT_MAX );
//		vecCount[0] = 0;
//		for( int i=1; i<=n; i++ ){
//			int nSqrt = floor( sqrt(i) );
//			for( int j=nSqrt; j>=1; j-- ){
//				if( vecCount[ i - j * j ] + 1 < vecCount[i] )
//					vecCount[i] = vecCount[ i - j * j ] + 1;
//			}
//		}
//		return vecCount[ n ];
//    }
//};
//
//int main(){
//	Solution s;
//	s.numSquares( 13 );
//	return 0;
//}