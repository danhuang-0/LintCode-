//// ���ڵ��⣬һȦһȦ�����ڲ���й���
//// ������ȷ��Ȧ��
//// Ȼ�������һȦһȦ�Ĺ������
//// ���Ȧ����������Ҳ�����м����һ�����
//// ��������㸳ֵ������
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: An integer
//     * @return: a square matrix
//     */
//    vector<vector<int>> generateMatrix(int n) {
//        // write your code here
//		vector<vector<int>> vecRet;
//		if( n <= 0 )
//			return vecRet;
//		vecRet = vector<vector<int>>( n, vector<int>(n));
//		int nCountOfCircle = n / 2 + ( n%2==0 ? 0 : 1 );
//		int nCount = 1;
//		for( int i=0; i<nCountOfCircle; i++ ){
//			
//			// ��
//			for( int j=i; j<n-i-1; j++ )
//				vecRet[i][j] = nCount++;
//			// ��
//			for( int j=i; j<n-i-1; j++ )
//				vecRet[ j ][ n-1-i ] = nCount++;
//			// ��
//			for( int j = n-1-i; j>i; j-- )
//				vecRet[ n-1-i  ][ j ] = nCount++; 
//			// ��
//			for( int j= n-1-i; j>i; j-- )
//				vecRet[ j ][ i ] = nCount++;
//		}
//		if( n%2 != 0 ){
//			vecRet[ n/2 ][ n/2 ] = nCount;
//		}
//		return vecRet;
//    }
//};
//
//int main(){
//
//	Solution s;
//	s.generateMatrix(1);
//	s.generateMatrix(3);
//	s.generateMatrix(4);
//	return 0;
//}