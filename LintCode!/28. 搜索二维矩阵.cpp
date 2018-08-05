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
//		//���ֲ���������
//		//���ֲ���������
//		int nLeft = 0;
//		int nRight = matrix.size() - 1;
//		int nMid = ( nLeft + nRight ) / 2;
//		bool isFind = false;
//		bool isOver = false;
//		while( nLeft <= nRight
//				&& !isOver )
//		{
//			//�ҵ���������
//			if( target >= matrix[nMid].front() 
//				&& target <= matrix[nMid].back() )
//			{
//				//ֻҪ���������� ������û�ҵ���������
//				isOver = true;
//				//�ڵ�ǰ���ڶ��ֲ������ĸ�λ��
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
//					//��ǰֵ��Ŀ��ֵ�� ��������
//					else if( matrix[nNowRow][nMid] > target )
//					{
//						nRight = nMid - 1;
//					}
//					//��ǰֵ��Ŀ��ֵС ���Ҳ����
//					else
//					{
//						nLeft = nMid + 1;
//					}
//					nMid = ( nLeft + nRight ) / 2;
//				}
//			}
//			//��ǰ�����Ҳ��Ŀ��С ȥ�Ҳ����
//			else if( target > matrix[nMid].back() )
//			{
//				nLeft = nMid + 1;
//			}
//			//��ǰ��������Ŀ��С ȥ������
//			else
//			{
//				nRight = nMid - 1;
//			}
//			//�����м�λ��
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