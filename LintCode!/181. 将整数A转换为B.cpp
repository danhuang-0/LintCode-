//// �������ֻ����Ҫ�ı��λ
//// ֮��ͨ��������-1ȡλ��Ĳ������������ǰ�����ж��ٸ�1
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param a: An integer
//     * @param b: An integer
//     * @return: An integer
//     */
//    int bitSwapRequired(int a, int b) {
//        // write your code here
//		int nDiff = a ^ b;
//		int nCount = 0;
//		while( nDiff ){
//			nCount++;
//			nDiff = nDiff & ( nDiff - 1 );
//		}
//		return nCount;
//	}
//};
//
//int main(){
//	int a = 31;
//	int b = 14;
//	Solution s;
//	s.bitSwapRequired(a,b);
//	return 0;
//}