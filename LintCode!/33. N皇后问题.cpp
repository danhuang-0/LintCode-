//// 数量对不上，暂时放一放
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
//	void DFS(vector<vector<string>> &vecRet, vector<int> &vecNums, int nLevel
//		, vector<bool> &vecMajor, vector<bool> &vecMinor ){
//		if( nLevel == vecNums.size()-1 ){
//			vector<string> vecTemp(vecNums.size(), string(vecNums.size(), '.'));
//			for( int i=0; i<vecNums.size(); i++ ){
//				vecTemp[i][vecNums[i]] = 'Q';
//			}
//			vecRet.push_back( vecTemp );
//			return;
//		}
//		for( int i=nLevel; i<vecNums.size(); i++ ){
//			swap( vecNums[nLevel], vecNums[i] );
//			int larger = max( nLevel, vecNums[nLevel] );
//			int smaller = min( nLevel, vecNums[nLevel] );
//			if( !vecMajor[ vecNums.size() - larger + smaller -1 ]
//				&& !vecMinor[ (larger + smaller ) % vecNums.size()] ){
//				vecMajor[ vecNums.size() - larger + smaller -1 ] = true;
//				vecMinor[ (larger + smaller ) % vecNums.size()] = true;
//				DFS( vecRet, vecNums, nLevel+1, vecMajor, vecMinor );
//				vecMajor[ vecNums.size() - larger + smaller -1 ] = false;
//				vecMinor[ (larger + smaller ) % vecNums.size()] = false;
//			}
//			swap( vecNums[nLevel], vecNums[i] );
//		}
//	}
//
//    vector<vector<string>> solveNQueens(int n) {
//        // write your code here
//		vector<vector<string>> vecRet;
//		vector<int> vecNums;
//		vector<bool> vecMajor( n, false );
//		vector<bool> vecMinor( n, false );
//
//		for( int i=0; i<n; i++ ){
//			vecNums.push_back(i);	
//		}
//		DFS( vecRet, vecNums, 0, vecMajor, vecMinor);
//		return vecRet; 
//    }
//};
//
//int main (){
//
//	Solution s;
//	s.solveNQueens( 10 );
//	return 0;
//}