//// ����һ��һ���ķ�ת����
//// ע������ļ�ⷽʽ����Ϊ�ǳ� 10 ���
//// �����п�������ֱ���Ƴ�������
//// ��Ҫ�ڳ˷�����֮����м��
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