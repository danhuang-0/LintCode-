///* 同样是快速搜索二维矩阵的思路
// * 从右上角向左下角进行遍历
// * 可以一次性斩去一行或者一列
// * 不同的是如果相等的话会斩去一行带一列
// * 时间复杂度 m+n
// */
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param matrix: A list of lists of integers
//     * @param target: An integer you want to search in matrix
//     * @return: An integer indicate the total occurrence of target in the given matrix
//     */
//    int searchMatrix(vector<vector<int>> &matrix, int target) {
//        // write your code here
//		int nSize = matrix.size();
//		if( nSize ==0 )
//			return 0;
//		int nRight = matrix[0].size() - 1;
//		int nTop = 0;
//		int nCount = 0;
//		while( nRight>=0 && nTop<nSize ){
//			if( matrix[nTop][nRight] > target ){
//				nRight--;
//			} else if( matrix[nTop][nRight] < target ) {
//				nTop++;
//			} 
//			// matrix[nTop][nRight] == target
//			else{
//				nRight--;
//				nTop++;
//				nCount++;
//			}
//		}
//		return nCount;
//	}
//};
//
//int main(){
//
//	int arr[6][19] ={
//		{62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80},
//		{63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81},
//		{64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82},
//		{65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83},
//		{66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84},
//		{67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85}
//	};
//
//	vector<vector<int>> vecNums;
//	for( int i=0; i<6; i++)
//		vecNums.push_back(vector<int>(begin(arr[i]), end(arr[i]) ));
//	Solution s;
//	cout << s.searchMatrix(vecNums, 81);
//	system("pause");
//	return 0;
//}