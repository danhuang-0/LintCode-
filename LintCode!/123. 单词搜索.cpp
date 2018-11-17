//// ����ͼ�� DFS �����㷨
//// �����ҵ�һ���͵�һ����ĸ��ȵ����
//// Ȼ�����ڿ�ʼ���ķ�����DFS
//// ʹ��һ����ԭ����һ����bool��������¼�Ƿ�ʹ�ù�
//// ��ʵҲ����ʹ��һ��������ֵ��ַ�����ԭ������ֱ�ӽ����滻
//// ���ﵽ��֤һ����ĸֻ��ʹ��һ�ε�Ŀ��
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param board: A list of lists of character
//     * @param word: A string
//     * @return: A boolean
//     */
//
//	void DFS( bool &bRet, vector<vector<char>> &board,
//		vector<vector<bool>> &isUse, string word, int nLevel,
//		int nX, int nY ){
//		if( bRet ) {
//			return;
//		}
//		if( nLevel == word.size() ){
//			bRet = true;
//			return;
//		}
//		if( nX - 1 >= 0 ){
//			if( board[nX-1][nY] == word[nLevel] && isUse[nX-1][nY] == false){
//				isUse[ nX - 1 ][nY] = true;
//				DFS( bRet, board, isUse, word, nLevel+1, nX-1, nY );
//				isUse[ nX - 1 ][nY] = false;
//			}
//		}
//		if( nX + 1 < board.size() ){
//			if( board[nX+1][nY] == word[nLevel] && isUse[nX+1][nY] == false){
//				isUse[ nX + 1 ][nY] = true;
//				DFS( bRet, board, isUse, word, nLevel+1, nX+1, nY );
//				isUse[ nX + 1 ][nY] = false;
//			}
//		}
//		if( nY - 1 >= 0 ){
//			if( board[nX][ nY - 1 ] == word[nLevel] && isUse[nX][ nY - 1 ] == false){
//				isUse[nX][ nY - 1 ] = true;
//				DFS( bRet, board, isUse, word, nLevel+1, nX, nY-1 );
//				isUse[nX][ nY - 1 ] = false;
//			}
//		}
//		if( nY + 1 <board[0].size() ){
//			if( board[nX][ nY + 1 ] == word[nLevel] && isUse[nX][ nY + 1 ] == false){
//				isUse[nX][ nY + 1 ] = true;
//				DFS( bRet, board, isUse, word, nLevel+1, nX, nY+1 );
//				isUse[nX][ nY + 1 ] = false;
//			}
//		}
//	}
//
//    bool exist(vector<vector<char>> &board, string &word) {
//        // write your code here
//		if( word.size() == 0 )
//			return true;
//		if( board.size() == 0 )
//			return false;
//
//		bool bRet = false;
//
//		vector<vector<bool>> isUse( board.size() );
//		for( int i=0; i<isUse.size(); i++ ){
//			isUse[i] = vector<bool>( board[0].size(), false );
//		}
//
//		for( int i=0; i<board.size(); i++ ){
//			for( int j=0; j<board[i].size(); j++ ){
//				if( board[i][j] == word[0] ){
//					DFS( bRet, board, isUse, word, 1, i, j );
//				}
//				if( bRet == true )
//					break;
//			}
//			if( bRet )
//				break;
//		}
//		return bRet;
//    }
//};
//
//int main(){
//
//	vector<vector<char>> board(3);
//	char arr[][4] = {{'A','B','C','E'},
//					 {'S','F','C','S'},
//					 {'A','D','E','E'}};
//	for( int i=0; i<3; i++ ){
//		board[i] = vector<char>( begin(arr[i]), end(arr[i]));
//	}
//
//	Solution s;
//	s.exist( board, string("SEE"));
//	s.exist( board, string("ABCCED"));
//	s.exist( board, string("ABCB"));
//
//	return 0;
//}