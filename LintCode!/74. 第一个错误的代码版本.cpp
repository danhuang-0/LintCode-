//// ���ֲ��ң�������Ŀ����ģ������ж��߼�
//// �����ж��߼����ҳ���һ��Ϊtrue����һ��Ϊfalse��ֵ������
//// ֵΪfalse���Ҳ��ң�ֵΪtrue��ǰһ������false���������
//
//#include <iostream>
//
//using namespace std;
//
//class SVNRepo{
//public:
//	static int m_n;
//	static bool isBadVersion( int n ){
//		return n >= m_n;
//	}
//};
//int SVNRepo::m_n = -1;
//
//class Solution {
//public:
//    /**
//     * @param n: An integer
//     * @return: An integer which is the first bad version.
//     */
//    int findFirstBadVersion(int n) {
//        // write your code here
//
//		long long nLeft = 1;
//		long long  nRight = n;
//		long long nMid = ( nLeft + nRight ) / 2;
//		int nRet = -1;
//		while( 1 ){
//			bool bIsBad = SVNRepo::isBadVersion( nMid );
//			if( bIsBad && ( nMid==1 || !SVNRepo::isBadVersion( nMid - 1) ) ){
//				nRet = nMid;
//				break;
//			} else if ( !bIsBad ) {
//				nLeft = nMid + 1;
//			} else {
//				nRight = nMid - 1;
//			}
//			nMid = ( nLeft + nRight ) / 2;
//		}
//		return nRet;
//    }
//};
//
//int main(){
//
//	SVNRepo::m_n = 2147483647 ;
//	Solution s;
//	cout << s.findFirstBadVersion(2147483647);
//	return 0;
//}