//#include <iostream>
//#include <unordered_set>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param str: A string
//     * @return: a boolean
//     */
//    bool isUnique(string &str) {
//        // write your code here
//		unordered_set<char> setChars;
//		bool bRet = true;
//		for( auto ch : str ){
//			if( setChars.find(ch) != setChars.end() ){
//				bRet = false;
//				break;
//			}
//			setChars.insert( ch );
//		}
//		return bRet;
//    }
//};
//
//int main(){
//
//	string str1 ("bc");
//	string str2( "aa" );
//	Solution s;
//	s.isUnique( str1 );
//	s.isUnique( str2 );
//	return 0;
//}