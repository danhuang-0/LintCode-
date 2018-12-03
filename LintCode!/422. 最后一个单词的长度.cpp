//// 有 "a   b  " 这种情况
//// 从右往左数逻辑要简单的多
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param s: A string
//     * @return: the length of last word
//     */
//    int lengthOfLastWord(string &s) {
//        // write your code here
//		bool isFind = false;
//		int nCount = 0;
//		for( int i=s.size()-1; i>=0; i-- ){
//			if( s[i] == ' ' ){
//				if( !isFind )
//					continue;
//				else
//					break;
//			}
//			isFind = true;
//			nCount++;
//		}
//		return nCount;
//	}
//};
//
//int main(){
//
//	Solution s;
//	s.lengthOfLastWord( string("hello world") );
//	s.lengthOfLastWord( string("") );
//	s.lengthOfLastWord( string("      ") );
//	s.lengthOfLastWord( string("world") );
//	s.lengthOfLastWord( string("a   b  ") );
//
//	return 0;
//}