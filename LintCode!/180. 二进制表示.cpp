//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: Given a decimal number that is passed in as a string
//     * @return: A string
//     */
//    string binaryRepresentation(string &n) {
//        // write your code here
//		if( n.size() ==0 ){
//			return "0";
//		}
//		string strRet;
//		int nFirstStart = 0;
//		while( nFirstStart == ' ' )
//			nFirstStart++;
//
//		bool isMinus = ( n[nFirstStart] == '-' );
//		if( isMinus ){
//			strRet.push_back('-');
//			nFirstStart++;
//		}
//		int indexOfPoint = n.find('.');
//		int nFirstEnd = indexOfPoint;
//		// 是一个整数
//		if( indexOfPoint == n.npos ){
//			nFirstEnd = n.size();
//		}
//		string strFirst = n.substr( nFirstStart, nFirstEnd );
//		string strSecond = n.substr( nFirstEnd, n.size() );
//		int nFirst = atoi( strFirst.c_str() );
//		int nSecond = atoi( strSecond.c_str() );
//		int nPos = 1;
//		while( !( nPos > nFirst || nPos == 1073741824 ) )
//			nPos *= 2;
//		while( nFirst != 0 ){
//			if( nFirst & nPos )
//				strRet.push_back( '1' );
//			else
//				strRet.push_back( '0' );
//			nFirst &= !nPos;
//			nPos >> 1;
//		}
//		if( nFirstEnd == n.size() )
//			return strRet;
//		strRet.push_back('.');
//		int nSecondLength = strSecond.size();
//		nPos = 1;
//		for( int i=0; i<nSecondLength; i++ ){
//			nPos
//		}
//
//
//		return strRet;
//    }
//};
//
//int main(){
//
//	return 0;
//}