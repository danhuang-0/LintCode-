//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param grid: a list of lists of integers
//     * @return: An integer, minimizes the sum of all numbers along its path
//     */
//    int minPathSum(vector<vector<int>> &grid) {
//        // write your code here
//		if( grid.empty() )
//			return 0;
//		for( int i=1; i<grid.size(); i++ )
//			grid[i][0] += grid[i-1][0];
//		for( int i=1; i<grid[0].size; i++ )
//			grid[0][i] += grid[0][i-1];
//		for( int i=1; i<grid.size(); i++ )
//			for( int j=1; j<grid[i].size(); j++ )
//				grid[i][j] = min( grid[i-1][j], grid[i][j-1]) + grid[i][j];
//		return grid.back().back();
//	}
//};