//// leetcode ��ԭ��
//// �����ַ���Ӧ���뵽��̬�滮�㷨
//// ������ö�ά������ж�̬�滮
//// vecDep[i][j] �ĺ�������s1��i����ĸ��s2��j����ĸ
//// �ܷ�ƴ���� s3 �� i+j ����ĸ���ַ���
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param s1: A string
//     * @param s2: A string
//     * @param s3: A string
//     * @return: Determine whether s3 is formed by interleaving of s1 and s2
//     */
//    bool isInterleave(string &s1, string &s2, string &s3) {
//        // write your code here
//	
//		if( s3.size()==0 )
//			return true;
//
//		int nSizeOfS1 = s1.size();
//		int nSizeOfS2 = s2.size();
//		vector<vector<bool>> vecDP;
//		for( int i=0; i<nSizeOfS1+1; i++ )
//			vecDP.push_back( vector<bool>( nSizeOfS2+1, false ) );
//
//		if( nSizeOfS2 > 0 )
//			vecDP[0][1] = ( s2[0] == s3[0] );
//		if( nSizeOfS1 > 0 )
//			vecDP[1][0] = ( s1[0] == s3[0] );
//		// ��һ��
//		for( int i=2; i<=nSizeOfS1; i++ ){
//			if( vecDP[i-1][0] && s1[i-1]==s3[i-1] )
//				vecDP[i][0] = true;
//		}
//		// ��һ��
//		for( int i=2; i<=nSizeOfS2; i++ ){
//			if( vecDP[0][i-1] && s2[i-1]==s3[i-1] )
//				vecDP[0][i] = true;
//		}
//		// ���ϣ�1,1��������
//		for( int i=1; i<=nSizeOfS1; i++ ){
//			for( int j=1; j<=nSizeOfS2; j++ ){
//				if( vecDP[i-1][j] && s1[i-1] == s3[i+j-1]
//				 || vecDP[i][j-1] && s2[j-1] == s3[i+j-1] )
//					vecDP[i][j] = true;
//			}
//		}
//		return vecDP[nSizeOfS1][nSizeOfS2];
//	}
//};
//
//int main(){
//
//	string s1( "aabcc" );
//	string s2("dbbca");
//	string s3("aadbbbaccc");
//	Solution s;
//	cout << s.isInterleave(s1, s2, s3) << endl ;
//	return 0;
//}
//
