//// 从内到外，一圈一圈的向内侧进行构造
//// 首先先确定圈数
//// 然后把所有一圈一圈的构造完毕
//// 如果圈数是奇数，也就是中间会有一个点的
//// 最后把这个点赋值就行了
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
//			// 上
//			for( int j=i; j<n-i-1; j++ )
//				vecRet[i][j] = nCount++;
//			// 右
//			for( int j=i; j<n-i-1; j++ )
//				vecRet[ j ][ n-1-i ] = nCount++;
//			// 下
//			for( int j = n-1-i; j>i; j-- )
//				vecRet[ n-1-i  ][ j ] = nCount++; 
//			// 左
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