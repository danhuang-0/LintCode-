//// 无脑DP，左边和上边上的格子走法只有一种
//// 右下方的走法数量是左侧的数量和上侧的数量和
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param m: positive integer (1 <= m <= 100)
//     * @param n: positive integer (1 <= n <= 100)
//     * @return: An integer
//     */
//    int uniquePaths(int m, int n) {
//        // write your code here
//		vector<vector<int>> DP( m, vector<int>(n) );
//		for( int i=0; i<m; i++ )
//			DP[i][0] = 1;
//		for( int i=0; i<n; i++ )
//			DP[0][i] = 1;
//		for( int i=1; i<m; i++ )
//			for( int j=1; j<n; j++ )
//				DP[i][j] = DP[i-1][j] + DP[i][j-1];
//		return DP[m-1][n-1];
//    }
//};