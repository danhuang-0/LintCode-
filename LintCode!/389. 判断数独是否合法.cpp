//// 无脑遍历检测一边就好了
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param board: the board
//     * @return: whether the Sudoku is valid
//     */
//    bool isValidSudoku(vector<vector<char>> &board) {
//        // write your code here
//		if( board.size() == 0 )
//			return true;
//		
//		auto isBeing = vector<bool>( board.size(), false );
//		for( int i=0; i<board.size(); i++ ){
//			isBeing = vector<bool>( board.size(), false );
//			for( int j=0; j<board[i].size(); j++ ){
//				if( board[i][j] == '.' )
//					continue;
//				else{
//					if( isBeing[ board[i][j] - '0' ] == true )
//						return false;
//					isBeing[ board[i][j] - '0' ] = true; 
//				}
//			}
//		}
//		for( int i=0; i<board[0].size(); i++ ){
//			isBeing = vector<bool>( board[0].size(), false );
//			for( int j=0; j<board.size(); j++ ){
//				if( board[j][i] == '.' )
//					continue;
//				else{
//					if( isBeing[ board[j][i] -'0' ] == true )
//						return false;
//					isBeing[ board[j][i] - '0' ] = true;
//				}
//			}
//		}
//		for( int i=0; i<board.size()/3; i++ ){
//			for( int j=0; j<board[0].size()/3; j++ ){
//				int nStartI = 3 * i;
//				int nStartJ = 3 * j;
//				isBeing = vector<bool>( board.size(), false );
//				for( int countI=0; countI<3; countI++ ){
//					if( nStartI + countI > board.size() )
//						break;
//					for( int countJ=0; countJ<3; countJ++ ){
//						if( nStartJ + countJ > board[ nStartI + countI ].size() )
//							break;
//						if( board[nStartI+countI][nStartJ+countJ] == '.' )
//							continue;
//						else{
//							if( isBeing[ board[nStartI+countI][nStartJ+countJ] - '0' ] == true )
//								return false;
//							isBeing[ board[nStartI+countI][nStartJ+countJ] -'0'] = true; 
//						}
//					}
//				}
//			}
//		}
//		return true;
//    }
//};