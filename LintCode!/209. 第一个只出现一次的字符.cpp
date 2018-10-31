//// 不使用额外空间
//// O（n^2）的算法就好了
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param str: str: the given string
//     * @return: char: the first unique character in a given string
//     */
//    char firstUniqChar(string &str) {
//        // Write your code here
//		char chRet = 0;
//		
//		for( int i=0; i<str.size(); i++ ){
//			bool isFind = false;
//			for( int j=0; j<str.size(); j++ ){
//				if( j == i )
//					continue;
//				if( str[i] == str[j] ){
//					isFind = true;
//					break;
//				}
//			}
//			if( !isFind ){
//				chRet = str[i];
//				break;
//			}
//		}
//		return chRet;
//    }
//};
//
//int main(){
//
//	string str("abaccdeff");
//	Solution s;
//	s.firstUniqChar(str);
//
//	return 0;
//}
