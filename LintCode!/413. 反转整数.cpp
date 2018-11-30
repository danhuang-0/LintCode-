//// 就是一个一个的翻转就行
//// 注意溢出的检测方式，因为是乘 10 溢出
//// 所以有可能正数直接移除成正数
//// 需要在乘法进行之间进行检测
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: the integer to be reversed
//     * @return: the reversed integer
//     */
//    int reverseInteger(int n) {
//         write your code here
//		if( n == 0 )
//			return 0;
//		bool isMinus = false;
//		if( n < 0 ){
//			isMinus = true;
//			n = -n;
//		}
//		int nRet = 0;
//		while( n != 0 ){
//			if( nRet > INT_MAX / 10 + 1 )
//				return 0;
//			nRet *= 10;
//			nRet += ( n % 10 );
//			n /= 10;
//		}
//		if( nRet < 0 )
//			return 0;
//		if( isMinus )
//			nRet = -nRet;
//		return nRet;
//    }
//};
//
//int main(){
//
//	Solution s;
//	s.reverseInteger(123);
//	s.reverseInteger(-123);
//	s.reverseInteger(0);
//	s.reverseInteger(-1);
//	s.reverseInteger( 1234567899 );
//	s.reverseInteger( INT_MAX );
//	s.reverseInteger( INT_MIN );
//
//	return 0;
//}