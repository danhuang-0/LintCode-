//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: A string
//     * @param B: A string
//     * @return: the length of the longest common substring.
//     */
//    int longestCommonSubstring(string &A, string &B) {
//        // write your code here
//		if(A.size()==0 || B.size()==0 )
//			return 0;
//		vector<vector<int>> DP( A.size() );
//		for(int i=0; i<A.size(); i++ )
//			DP[i] = vector<int>(B.size());
//		DP[0][0] = A[0]==B[0];
//		int nMax = 0;
//		for( int i=1; i<A.size(); i++){
//			if( A[i]==B[0] ){
//				DP[i][0] = 1;
//				nMax = 1;
//			}
//			else
//				DP[i][0] = 0;
//		}
//		for( int i=1; i<B.size(); i++){
//			if( A[0] == B[i]){
//				DP[0][i] = 1;
//				nMax = 1;
//			}
//			else
//				DP[0][i] = 0;
//		}
//		
//		for( int i=1; i<A.size(); i++ ){
//			for( int j=1; j<B.size(); j++ ){
//				if( A[i]==B[j] )
//					DP[i][j] = DP[i-1][j-1] + 1;
//				else
//					DP[i][j] = 0;
//				if( DP[i][j] > nMax )
//					nMax = DP[i][j];
//			}
//		
//		}
//		return nMax;
//    }
//};
//
//int main (){
//
//	string strA("ABCD");
//	string strB("CBCE");
//	Solution s;
//	s.longestCommonSubstring(strA, strB );
//
//	return 0;
//}