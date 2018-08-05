//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param matrix: matrix, a list of lists of integers
//     * @param target: An integer
//     * @return: a boolean, indicate whether matrix contains target
//     */
//    bool searchMatrix(vector<vector<int>> &matrix, int target) {
//        // write your code here
//		//二分查找在哪行
//		//二分查找在哪列
//		int nLeft = 0;
//		int nRight = matrix.size() - 1;
//		int nMid = ( nLeft + nRight ) / 2;
//		bool isFind = false;
//		bool isOver = false;
//		while( nLeft <= nRight
//				&& !isOver )
//		{
//			//找到了在哪行
//			if( target >= matrix[nMid].front() 
//				&& target <= matrix[nMid].back() )
//			{
//				//只要进了这里面 不管找没找到都结束了
//				isOver = true;
//				//在当前行内二分查找在哪个位置
//				int nNowRow = nMid;
//				nLeft = 0;
//				nRight = matrix[nNowRow].size() - 1;
//				nMid = ( nLeft + nRight ) / 2;
//				while( nLeft <= nRight )
//				{
//					if( matrix[nNowRow][nMid] == target )
//					{
//						isFind = true;
//						break;
//					}
//					//当前值比目标值大 向左侧查找
//					else if( matrix[nNowRow][nMid] > target )
//					{
//						nRight = nMid - 1;
//					}
//					//当前值比目标值小 向右侧查找
//					else
//					{
//						nLeft = nMid + 1;
//					}
//					nMid = ( nLeft + nRight ) / 2;
//				}
//			}
//			//当前行最右侧比目标小 去右侧查找
//			else if( target > matrix[nMid].back() )
//			{
//				nLeft = nMid + 1;
//			}
//			//当前行最左侧比目标小 去左侧查找
//			else
//			{
//				nRight = nMid - 1;
//			}
//			//更新中间位置
//			nMid = ( nLeft + nRight ) / 2;
//		}
//		return isFind;
//    }
//};
//
//
//int main()
//{
//	int a[][4] = { 1,3,5,7,10,11,16,20,23,30,34,50};
//	vector<vector<int>> vct;
//	for( int i=0; i<3; i++ )
//	{
//		vector<int> vctTemp;
//		for( int j=0; j<4; j++ )
//		{
//			vctTemp.push_back(a[i][j]);
//		}
//		vct.push_back(vctTemp);
//	}
//	Solution s;
//	int nFind;
//	cin>>nFind;
//	cout<<s.searchMatrix( vct, nFind );
//	system("pause");
//	return 0;
//}