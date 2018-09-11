//// 用一个特殊字符进行分割
//// 字符串中出现特殊字符则用两个进行转义
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param strs: a list of strings
//     * @return: encodes a list of strings to a single string.
//     */
//    string encode(vector<string> &strs) {
//        // write your code here
//		vector<char> vecStr;
//		
//		for( auto str : strs ){
//			for( auto ch : str ){
//				if( ch != '|' )
//					vecStr.push_back(ch);
//				else{
//					vecStr.push_back('|');
//					vecStr.push_back('|');
//				}
//			}
//			vecStr.push_back('|');
//		}		
//
//		string str( vecStr.begin(), vecStr.end());
//		return str;
//    }
//
//    /*
//     * @param str: A string
//     * @return: dcodes a single string to a list of strings
//     */
//    vector<string> decode(string &str) {
//        // write your code here
//
//		vector<string> vecStrs;
//		string strTemp;
//		for( int i=0; i<str.size(); i++ ){
//			if( str[i] == '|' ){
//				if( i+1 < str.size() && str[i+1] == '|' ){
//					strTemp.push_back('|' );
//					i++;
//				}
//				else{
//					vecStrs.push_back( strTemp );
//					strTemp = "";
//				}
//			} else {
//				strTemp.push_back( str[i] );
//			}
//		}
//		return vecStrs;
//    }
//};
//
//
//int main(){
//
//	vector<string> vecStr;
//	vecStr.push_back( "lint||" );
//	vecStr.push_back( "code" );
//	vecStr.push_back( "love" );
//	vecStr.push_back( "you" );
//	Solution s;
//	string str = s.encode( vecStr );
//	s.decode(str);
//
//	return 0;
//}