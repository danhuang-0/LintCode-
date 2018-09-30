//// 对比114 增加了对障碍物的判断
//// 遇到障碍物就置零就好了
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param obstacleGrid: A list of lists of integers
//     * @return: An integer
//     */
//    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
//        // write your code here
//		obstacleGrid[0][0] = 1 - obstacleGrid[i][0];
//		for( int i=1; i<obstacleGrid.size(); i++ ){
//			if( obstacleGrid[i][0] == 0 )
//				obstacleGrid[i][0] = obstacleGrid[i-1][0];
//			else
//				obstacleGrid[i][0] = 0;
//		}
//		for( int i=1; i<obstacleGrid[0].size(); i++ ){
//			if( obstacleGrid[0][i] == 0 )
//				obstacleGrid[0][i] = obstacleGrid[0][i-1];
//			else
//				obstacleGrid[0][i] = 0;
//		}
//		for( int i=1; i<obstacleGrid.size(); i++ ){
//			for( int j=1; j<obstacleGrid[i].size(); j++	){
//				if( obstacleGrid[i][j] == 0 )
//					obstacleGrid[i][j] = obstacleGrid[i-1][j] + obstacleGrid[i][j-1];
//				else
//					obstacleGrid[i][j] = 0;
//			}
//		}
//		return obstacleGrid.back().back();
//    }
//};