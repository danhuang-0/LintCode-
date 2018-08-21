//// 题目并不难，就是要考虑的情况特别多
//// 需要考虑特别多的测试用例
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param str: A string
//     * @return: An integer
//     */
//    int atoi(string &str) {
//        // write your code here
//		int nSize = str.size();
//		if( nSize==0 )
//			return 0;
//		int nRet = 0;
//		bool isNegative = false;
//		int nStart = 0;
//		// 去掉前面的空格
//		while( isspace(str[nStart]) )
//			nStart++;
//
//		if( str[nStart]=='-' ){
//			nStart++;
//			isNegative = true;
//		} else if ( str[nStart]=='+' )
//			nStart++;
//
//		int nCount = 0;
//		for( int i=nStart; i<nSize-1; i++){
//			
//			if( isdigit(str[i]) ){
//				nRet *= 10;
//				nRet += str[i] - '0';
//				nCount++;
//				if( nCount > 10 )
//					return isNegative? INT_MIN: INT_MAX;
//			} else if ( str[i]=='.'){
//				for( i++ ;i<nSize-1; i++){
//					if( !isdigit(str[i]) )
//						break;
//				}
//				for( ;i<nSize-1; i++){
//					if( !isspace(str[i]) )
//						return 0;
//				}
//				return isNegative? -nRet: nRet;
//			} else if( isspace(str[i])){
//				for( i++ ;i<nSize-1; i++){
//					if( !isspace(str[i]) )
//						return 0;
//				}
//				return isNegative? -nRet: nRet;
//			} else {
//				return isNegative? -nRet: nRet;
//			}
//		}
//
//		if( !isdigit(str[nSize-1]))
//			return 0;
//
//		if( isNegative ){
//			if( isspace(str[nSize-1])){
//				return -nRet;
//			}
//			if( nRet> INT_MAX/10 ||
//				( nRet==INT_MAX/10 && str[nSize-1]>8 ) )
//				return INT_MIN;
//			else {
//				nRet *= 10;
//				nRet += str[nSize-1] - '0';
//				nRet = -nRet;
//			}
//		} else {
//			if( isspace(str[nSize-1])){
//				return nRet;
//			}
//			if( nRet> INT_MAX/10 ||
//				( nRet==INT_MAX/10 && str[nSize-1]>7 ) )
//				return INT_MAX;
//			else {
//				nRet *= 10;
//				nRet += str[nSize-1] - '0';
//			}
//		}
//		return nRet;
//	}
//};
//
//
//int main(){
//
//	Solution s;
//	cout<<s.atoi(string("    +123K "))<<endl;
//	cout<<s.atoi(string("    -52abc     "))<<endl;
//	cout<<s.atoi(string("    -5211314"))<<endl;
//	cout<<s.atoi(string("1.0 "))<<endl;
//	cout<<s.atoi(string("-1.234  "))<<endl;
//	cout<<s.atoi(string("10"))<<endl;
//	cout<<s.atoi(string("-1"))<<endl;
//	cout<<s.atoi(string("123123123123123"))<<endl;
//	cout<<s.atoi(string("1.0"))<<endl;
//	cout<<s.atoi(string("10."))<<endl;
//	cout<<s.atoi(string("2147483648"))<<endl;
//	cout<<s.atoi(string("2147483679"))<<endl;
//	cout<<s.atoi(string("-2147483649"))<<endl;
//	cout<<s.atoi(string("-2147483699"))<<endl;
//	cout<<s.atoi(string("123abc!@#$"))<<endl;
//
//	system("pause");
//	return 0;
//}