//// һȦһȦ���⵽����ת
//// ÿȦ�У�����һ��תһȦ
//// �����ĸ���ʱ�� ��Ȧ��ת����
//// 1 2 3 1
//// 3     2
//// 2     3
//// 1 3 2 1
//// ���� 1,2,3 �ķ��飬ÿ���ĸ��ֻ�λ��
//// ֻҪ�ҵ����ĸ��Ĺ��ɾͺ���
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param matrix: a lists of integers
//     * @return: nothing
//     */
//	void rotateOneCircle( vector<vector<int>> &matrix, int nCircle ){
//		int nSize = matrix.size();
//		int nBegin = nCircle;
//		int nEnd = nSize-1-nCircle;
//		int nFromX;
//		int nToX, nToY;
//		int nTemp;
//		for( int nFromY=nCircle; nFromY<nEnd; nFromY++ ){
//			nFromX = nCircle;
//			nTemp = matrix[nFromX][nFromY];
//			for( int i=0; i<4; i++ ){
//				nToX = nFromY;
//				nToY = nSize - 1 - nFromX;
//				swap( nTemp, matrix[nToX][nToY] );
//				nFromX = nToX;
//				nFromY = nToY;
//			}
//		}
//	}
//    void rotate(vector<vector<int>> &matrix) {
//        // write your code here
//		for( int i=0; i<matrix.size(); i++ ){
//			rotateOneCircle( matrix, i );
//		}
//    }
//};
//
//
//int main (){
//
//	vector<vector<int>> vecNums( 5 );
//	for( int i=0; i<5; i++ ){
//		for( int j=1; j<=5; j++ )
//			vecNums[i].push_back( i * 5 + j );
//	}
//
//	Solution s;
//	s.rotate( vecNums );
//
//	return 0;
//}