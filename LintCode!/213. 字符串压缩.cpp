//// 只需要使用两个变量记录就好了
//// 当记录的字符不一样的时候对字符进行更新
//// 最后一次记录的值在循环之外，要记得处理
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param originalString: a string
//     * @return: a compressed string
//     */
//    string compress(string &originalString) {
//        // write your code here
//
//		string strRet;
//		if( originalString.size() == 0 )
//			return strRet;
//
//		char cTemp = originalString[0];
//		int nCount = 1;
//		for( int i=1; i<originalString.size(); i++ ){
//			if( originalString[i]==cTemp ){
//				nCount++;
//			} else {
//				strRet.push_back( cTemp );
//				strRet += to_string( nCount );
//				cTemp = originalString[i];
//				nCount = 1;
//			}
//		}
//		strRet.push_back( cTemp );
//		strRet += to_string( nCount );
//		if( strRet.size() >= originalString.size() )
//			return originalString;
//		return strRet;
//    }
//};
//
//int main(){
//
//	//string str("aabcccccaaa");
//	//string str("aabbcc");
//	//string str("aaaa");
//	//string str("");
//	string str("a");
//
//	Solution s;
//
//	s.compress(str);
//
//	return 0;
//}