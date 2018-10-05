//// 动态规划，从下至上
//// 每个节点都储存到这个节点后，能走到最底下的最小距离
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param triangle: a list of lists of integers
//     * @return: An integer, minimum path sum
//     */
//    int minimumTotal(vector<vector<int>> &triangle) {
//        // write your code here
//
//		for( int i=triangle.size()-2; i>=0; i--  ){
//			for( int j=0; j<i; j++ ){
//				triangle[i][j] += min( triangle[i+1][j], triangle[i+1][j+1] );
//			}
//		}
//		return triangle[0][0];
//    }
//};