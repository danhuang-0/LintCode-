//// 在 [1,n) 的范围内进行二分查找
//// 找到一个数字n 使得 m^2 <= x且(n+1)^2 > x
//// 由于 sqrt(x) <= x/2 的特性，范围缩减至[1, x/2]
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param x: An integer
//     * @return: The sqrt of x
//     */
//    int sqrt(int x) {
//        // write your code here
//		if( x < 2 )
//			return x;
//		int nLeft = 1;
//		int nRight = x/2;
//		int nMid = ( nLeft + nRight ) / 2;
//		while( 1 ){
//			// sqrt(2147483647) = 46340.95
//			if( nMid > 46340 ){
//				nRight = nMid - 1;
//			}
//			else if( nMid * nMid <= x && ((nMid+1) * (nMid+1) > x || nMid+1 > 46340) ){
//				break;
//			} else if( nMid * nMid > x ){
//				nRight = nMid - 1;
//			} else {
//				nLeft = nMid + 1;
//			}
//			nMid = ( nLeft + nRight ) / 2;
//		}
//		return nMid;
//    }
//};
//
//int main(){
//	Solution s;
//	s.sqrt(1);
//	s.sqrt(3);
//	s.sqrt(4);
//	s.sqrt(2147483647);
//
//
//	return 0;
//}