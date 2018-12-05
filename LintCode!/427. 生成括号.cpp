//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: n pairs
//     * @return: All combinations of well-formed parentheses
//     */
//	void DFS( vector<string> &vecRet, int nLeft, int nRight, string strTemp){
//		if( nLeft == 0 ){
//			for( int i=0; i<nRight; i++ )
//				strTemp.push_back(')');
//			vecRet.push_back( strTemp );
//			return;
//		}
//		for( int i=1; i<=nLeft; i++ ){
//			strTemp.push_back('(');
//			DFS( vecRet, nLeft-i, nRight, strTemp );
//			for( int j=1; j<=nRight-nLeft+i; j++ ){
//				strTemp.push_back(')');
//				DFS( vecRet, nLeft-i, nRight-j, strTemp );
//			}
//			for( int j=1; j<=nRight-nLeft-i; j++ )
//				strTemp.pop_back();
//		}
//	}
//    vector<string> generateParenthesis(int n) {
//        // write your code here
//		vector<string> vecRet;
//		DFS( vecRet, n, n, string() );
//		return vecRet;
//    }
//};
//
//int main(){
//
//	Solution s;
//	s.generateParenthesis(3);
//
//	return 0;
//}