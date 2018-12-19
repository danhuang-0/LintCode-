//// 先用字符初始化一个 string 然后从右到左复制就好了
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class StringUtils {
//public:
//    /*
//     * @param originalStr: the string we want to append to
//     * @param size: the target length of the string
//     * @param padChar: the character to pad to the left side of the string
//     * @return: A string
//     */
//    static string leftPad(string &originalStr, int size, char padChar=' ') {
//        // write your code here
//		if( size <= originalStr.size() )
//			return originalStr;
//		string strRet( size, padChar );
//		int nSize = originalStr.size();
//		for( int i = 0; i < nSize; i++ )
//			strRet[ size - 1 - i ] = originalStr[ nSize - 1- i ];
//		return strRet;
//    }
//};
//
//int main(){
//	StringUtils su;
//
//	string str1( "foo" );
//	su.leftPad( str1, 5 );
//	string str2( "foobar" );
//	su.leftPad( str2, 6 );
//	string str3( "1" );
//	su.leftPad( str3, 2, '0' );
//	return 0;
//}