//// ��̬�滮����������
//// ÿ���ڵ㶼���浽����ڵ�����ߵ�����µ���С����
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