//// ���������е� b = 123898
//// b * b �ᳬ��int��Χ��Ҫע��
//// ��Ȼ���� a^2n = a^n * a^n �Ķ��ֲ���
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param a: A 32bit integer
//     * @param b: A 32bit integer
//     * @param n: A 32bit integer
//     * @return: An integer
//     */
//
//	long long func( int a, int b, int n ){
//		if( n==0 )
//			return 1 % b;
//		if( n==1 )
//			return a % b;
//		long long  nHalf = func( a, b, n/2 );
//		if( n % 2 == 0 )
//			return nHalf * nHalf % b;
//		return nHalf * nHalf % b * a % b;
//	}
//
//    int fastPower(int a, int b, int n) {
//        // write your code here
//		return func(a, b, n);
//    }
//};
//
//int main(){
//	Solution s;
//	s.fastPower(11, 123898, 12345);
//	return 0;
//}