//// 无脑斐波那契数列
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: An integer
//     * @return: An integer
//     */
//    int climbStairs(int n) {
//        // write your code here
//		if( n==0 )
//			return 0;
//		if( n==1 )
//			return 1;
//		if( n==2 )
//			return 2;
//		int nLastOne = 2;
//		int nLastTwo = 1;
//		int nRet;
//		
//		for( int i=3; i<=n; i++ ){
//			nRet = nLastOne + nLastTwo;
//			nLastTwo = nLastOne;
//			nLastOne = nRet;
//		}
//
//		return nRet;
//    }
//};