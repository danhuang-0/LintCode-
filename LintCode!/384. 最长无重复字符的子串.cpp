//// ��һ�������¼ÿ����ĸ�����ֵ�λ��
//// ͨ�������ֵ�λ�ú� start ��λ��
//// O(1)���ж� s[i] �Ƿ��� start �� i-1 ֮����ֹ�
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param s: a string
//     * @return: an integer
//     */
//    int lengthOfLongestSubstring(string &s) {
//        // write your code here
//		vector<int> vecLoc( 256, -1 );
//		int nStart = 0;
//		int nMax = 0;
//		
//		for( int i=0; i<s.size(); i++ ){
//			// s[i] �� nStart ֮�����
//			if( vecLoc[ s[i] ] >= nStart ){
//				while( s[nStart] != s[i] )
//					nStart++;
//				nStart++;
//			}
//			vecLoc[ s[i] ] = i;
//			if( i - nStart + 1 > nMax )
//				nMax = i - nStart + 1;
//		}
//		return nMax;
//	}
//};
//
//int main(){
//	string str("a");
//	// string str("abcabcbb");
//
//	Solution s;
//	s.lengthOfLongestSubstring( str );
//
//	return 0;
//}