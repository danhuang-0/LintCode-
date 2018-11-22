//// 后缀一个指针 start 来动态计算以当前字符结尾的最长字符串
//// 用一个数组，记录每个字符最后出现的位置，需要初始化为-1
//// 如果判断当前字符最后出现的位置在 start 前面
//// 则当前字符不在 start 到 i-1 之间的字符串内，需要把字符计数加一
//// 如果字符计数超过 k 了，移动后缀的 start 指针
//// 直到找到一个不在 start 和 i-1之间的字母，把它丢弃后，重新计数
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
//     * @param s: A string
//     * @param k: An integer
//     * @return: An integer
//     */
//    int lengthOfLongestSubstringKDistinct(string &s, int k) {
//        // write your code here
//		if( s.size() == 0 || k == 0 )
//			return 0;
//		vector<int> vecLoc( 256, -1 );
//		int nMax = 0;
//		int nCount = 0;
//		int nStart = 0;
//		for( int i=0; i<s.size(); i++ ){
//			// 从 start 到 i 中没有 s[i] 这个字母
//			if( vecLoc[ s[i] ] < nStart ){
//				nCount++;
//			}
//			vecLoc[ s[i] ] = i;
//			if( nCount > k ){
//				while( vecLoc[ s[nStart] ] > nStart )
//					nStart++;
//				nStart++;
//				nCount --;
//			}
//			if( i - nStart + 1 > nMax ){
//				nMax = i - nStart + 1;
//			}
//		}
//		return nMax;
//    }
//};
//
//int main(){
//
//	string str( "eceba");
//	Solution s;
//	s.lengthOfLongestSubstringKDistinct(str, 3 );
//	return 0;
//}