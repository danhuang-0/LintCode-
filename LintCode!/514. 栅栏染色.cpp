//// �򵥵Ķ�̬�滮��
//// ��ĿҪ����಻�ܳ�����������������ɫ��ͬ
//// Ҳ��������������������������ɫ��ͬ
//// �� count[i] Ϊһ���� i �����ӵĽ������
//// i �����ӵķ�������Ϊ�������
//// ��һ��������� i �����Ӻ͵� i-1 ��������ɫ��ͬ
//// ��� i ���͵� i-1 ������ֻ��Ҫ��� i-2 ��������ɫ��ͬ����
//// ���� k-1 ����ɫ�����Ե�ǰ�����Ϊ (k-1) * count[i-2]
//// �ڶ���������� i �����ӵ���ɫ��� i-1 �����ӵ������ͬ
//// ���Ե� i ������ֻ��Ҫ��� i-1 �����ӵ���ɫ��ͬ����
//// ���� k-1 ����ɫ��������������Ϊ (k-1) * count[i-1]
//// ���� count[i] = (k-1)( count[i-1] + count[i-2] )
//// ����Ϊ쳲���������
//// ���� count[1] = k, count[2] = k * k
//
//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: non-negative integer, n posts
//     * @param k: non-negative integer, k colors
//     * @return: an integer, the total number of ways
//     */
//    int numWays(int n, int k) {
//        // write your code here
//		if( n == 1 )
//			return k;
//		if( n == 2)
//			return k * k;
//		int count[2] = { k, k * k };
//		n -= 2;
//		int nTemp;
//		while( n-- ){
//			nTemp =( k - 1 ) * ( count[0] + count[1] );
//			count[0] = count[1];
//			count[1] = nTemp;
//		} 
//		return count[1];
//    }
//};
