//// 解法同33，只不过用一个全局变量进行计数罢了
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//
//class Solution {
//public:
//    /*
//     * @param n: The number of queens
//     * @return: All distinct solutions
//     */
//	int m_nCountOfLine;
//	int m_nCountOfAnswer;
//	void DFS( vector<int> &vecNums, int nLevel
//		, vector<bool> &vecMajor, vector<bool> &vecMinor ){
//		if( nLevel == vecNums.size() ){
//			m_nCountOfAnswer ++;
//			return;
//		}
//		for( int i=nLevel; i<vecNums.size(); i++ ){
//			swap( vecNums[nLevel], vecNums[i] );
//			int nRow = nLevel;
//			int nCol = vecNums[nLevel];
//
//			if( !vecMajor[ ( (nRow - nCol) + m_nCountOfLine ) % m_nCountOfLine ]
//				&& !vecMinor[ nRow + nCol ] ){
//				
//				vecMajor[ ( (nRow - nCol) + m_nCountOfLine ) % m_nCountOfLine ] = true;
//				vecMinor[ nRow + nCol ] = true;
//
//				DFS( vecNums, nLevel+1, vecMajor, vecMinor );
//				
//				vecMajor[ ( (nRow - nCol) + m_nCountOfLine ) % m_nCountOfLine ] = false;
//				vecMinor[ nRow + nCol ] = false;
//			}
//			swap( vecNums[nLevel], vecNums[i] );
//		}
//	}
//
//	int totalNQueens(int n) {
//        // write your code here
//
//		vector<int> vecNums;
//		m_nCountOfLine = n*2-1;
//		m_nCountOfAnswer = 0;
//		vector<bool> vecMajor( m_nCountOfLine, false );
//		vector<bool> vecMinor( m_nCountOfLine, false );
//
//		for( int i=0; i<n; i++ ){
//			vecNums.push_back(i);	
//		}
//
//		DFS( vecNums, 0, vecMajor, vecMinor);
//		return m_nCountOfAnswer;
//    }
//};
//
//int main (){
//
//	Solution s;
//	s.totalNQueens( 8 );
//	return 0;
//}