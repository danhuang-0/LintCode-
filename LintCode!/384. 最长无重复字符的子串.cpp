//// 用一个数组记录每个字母最后出现的位置
//// 通过最后出现的位置和 start 的位置
//// O(1)的判断 s[i] 是否在 start 和 i-1 之间出现过
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
//			// s[i] 在 nStart 之后存在
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