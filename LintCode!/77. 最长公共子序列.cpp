//#include <iostream>
//#include <vector>
//
//using namespace std;
//
////  d c c a e e d b e b
////b 0 0 0 0 0 0 0 1 1 1
////e 0 0 0 0 1 1 1 1 2 2
////d 1 2 2 2
////a 1
////a 0
////c 0
////b 0
////a 0
////d 1
////e 0
//
//class Solution {
//public:
//    /**
//     * @param A: A string
//     * @param B: A string
//     * @return: The length of longest common subsequence of A and B
//     */
//    int longestCommonSubsequence(string &A, string &B) {
//        // write your code here
//		if( A.size()==0  && B.size()==0 )
//			return 0;
//		vector<vector<int>> DP(A.size());
//		for( int i=0; i<A.size(); i++ ){
//			DP[i] = vector<int>(B.size());
//		}
//		DP[0][0] = A[0]==B[0];
//		for( int i=1; i<A.size(); i++){
//			if( A[i]==B[0] )
//				DP[i][0] = 1;
//			else
//				DP[i][0] = DP[i-1][0];
//		}
//		for( int i=1; i<B.size(); i++){
//			if( A[0] == B[i])
//				DP[0][i] = 1;
//			else
//				DP[0][i] = DP[0][i-1];
//		}
//		for( int i=1; i<A.size(); i++ ){
//			for( int j=1; j<B.size(); j++ ){
//				if( A[i]==B[j] )
//					DP[i][j] = DP[i-1][j-1] + 1;
//				else
//					DP[i][j] = max( DP[i-1][j], DP[i][j-1]);
//			}
//		
//		}
//		return DP[A.size()-1][B.size()-1];
//    }
//};
//
//int main (){
//
//	string str1 = "bedaacbade";
//	string str2 = "dccaeedbeb";
//	Solution s;
//	s.longestCommonSubsequence(str1, str2);
//	return 0;
//}