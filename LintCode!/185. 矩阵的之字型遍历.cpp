//// 只有两个方向，左下和右上
//// 只要发现走到边缘了就切换方向就行了
//// 挺简单的，就是有点麻烦。
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param matrix: An array of integers
//     * @return: An array of integers
//     */
//    vector<int> printZMatrix(vector<vector<int>> &matrix) {
//        // write your code here
//		vector<int> vecRet;
//		if( matrix.size() == 0 || matrix[0].size() == 0 )
//			return vecRet;
//		int nMaxX = matrix.size()-1;
//		int nMaxY = matrix[0].size()-1;
//		int nX = 0;
//		int nY = 0;
//
//		vector<vector<int>> vecDirections( 2 );
//		vecDirections[0].push_back(-1);
//		vecDirections[0].push_back(1);
//		vecDirections[1].push_back(1);
//		vecDirections[1].push_back(-1);
//		int nNowDirection = 0;
//		while( nX!=nMaxX || nY!=nMaxY ){
//			vecRet.push_back( matrix[nX][nY] );
//			if( nX == nMaxX && vecDirections[nNowDirection][0] == 1 ){
//				nY ++;
//			} else if ( nX == 0 && vecDirections[nNowDirection][0] == -1 ){
//				if( nY == nMaxY ) {
//					nX ++;
//				} else {
//					nY ++;
//				}
//			}else if ( nY == nMaxY && vecDirections[nNowDirection][1] == 1 ) {
//				nX ++;
//			} else if ( nY == 0 && vecDirections[nNowDirection][1] == -1 ) {
//				if( nX == nMaxX ) {
//					nY ++;
//				} else {
//					nX ++;
//				}
//			} else {
//				nX += vecDirections[ nNowDirection ][0];
//				nY += vecDirections[ nNowDirection ][1];
//				continue;
//			}
//			nNowDirection = 1 - nNowDirection;
//		}
//		vecRet.push_back( matrix[nX][nY] );
//		return vecRet;
//    }
//};
//
//int main(){
//
//	//vector<vector<int>> vecNums(3);
//	//for( int i=0; i<3; i++ ){
//	//	for( int j=0; j<4; j++ ){
//	//		vecNums[i].push_back( i * 4 + j + 1 );
//	//	}
//	//}
//	//for( int i=0; i<3; i++ ){
//	//	vecNums[i].push_back(i);
//	//}
//	vector<vector<int>> vecNums(1);
//	for( int i=0; i<3; i++)
//		vecNums[0].push_back(i);
//
//	Solution s;
//	s.printZMatrix( vecNums );
//
//	return 0;
//}