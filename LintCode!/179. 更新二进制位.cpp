//// �����Ҫ i+j��
//// �����Ƚ�n��iλ����ļ�¼����
//// ��n�� jλ����Ķ�����
//// ��m����iλ
//// m��n��λ��ʹ n �е� i��jλΪm
//// n��ԭ��n��i����Ľ���λ��ʹi�����λ��ԭ
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: An integer
//     * @param m: An integer
//     * @param i: A bit position
//     * @param j: A bit position
//     * @return: An integer
//     */
//    int updateBits(int n, int m, int i, int j) {
//        // write your code here
//		int nRightDigit;
//		if( i>0 ){
//			nRightDigit = 1;
//			for( auto count = 0; count < i-1; count++ )
//				nRightDigit = ( nRightDigit << 1 ) + 1;
//		} else {
//			nRightDigit = 0;
//		}
//		int nRightTemp = n & nRightDigit;
//		if( j>0 ){
//			nRightDigit = 1;
//			for( auto count = 0; count < j; count++ )
//				nRightDigit = ( nRightDigit << 1 ) + 1;
//		} else {
//			nRightDigit = 0;
//		}
//		nRightDigit = ~nRightDigit;
//		n = n & nRightDigit ;
//		n = n | nRightTemp;
//		m = m << i;
//		n = n | m;
//		return n;
//    }
//};
//
//int main(){
//	Solution s;
//	s.updateBits(1001,30,2,7);
//	return 0;
//}