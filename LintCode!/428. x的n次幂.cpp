//// 使用乘法特性
//// a^2n = a^n * a^n
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param x: the base number
//     * @param n: the power number
//     * @return: the result
//     */
//    double myPow(double x, int n) {
//        // write your code here
//		
//		if( n < 0) {
//			if( x == 0 )
//				return 0;
//			x = 1.0 / x;
//			if( n==INT_MIN )
//				n++;
//			n = -n;
//		}
//		if( n==0 )
//			return 1;
//		if( n==1 )
//			return x;
//		int half = n/2;
//		double dRet = myPow( x, n/2 );
//		if( n%2 == 0 )
//			return dRet * dRet;
//		return dRet * dRet * x;
//    }
//};
//
//int main (){
//	Solution s;
//	s.myPow( 2.0 , -2147483648 );
//	return 0;
//}