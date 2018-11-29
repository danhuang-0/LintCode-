//// 解题思路类似合并排序数组
//// 通过 1 的个数来判断是否有进位，以及当前位的值
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param a: a number
//     * @param b: a number
//     * @return: the result
//     */
//    string addBinary(string &a, string &b) {
//        // write your code here
//		if( a.size() == 0 )
//			return b;
//		if( b.size() == 0 )
//			return a;
//		int index = 0;
//		const int nSizeOfA = a.size();
//		const int nSizeOfB = b.size();
//		string strRet( max(nSizeOfA, nSizeOfB) + 1, 0 );
//		char cInc = 0;
//		while( index < nSizeOfA && index < nSizeOfB ){
//			int nCount = 
//				( a[ nSizeOfA -1 - index ] - '0' )
//				+( b[ nSizeOfB - 1 - index ] - '0' )
//				+ cInc;
//			strRet[index] = nCount % 2 + '0';
//			cInc = nCount >= 2 ? 1 : 0;
//			index ++;
//		}
//		while( index < a.size() ){
//			int nCount =  
//				a[ nSizeOfA - 1 - index ] - '0'
//				+ cInc;
//			strRet[index] = nCount % 2 + '0';
//			cInc = nCount >= 2 ? 1 : 0;
//			index ++;
//		}
//		while( index < b.size() ){
//			int nCount =  
//				b[ nSizeOfB - 1 - index ] - '0'
//				+ cInc;
//			strRet[index] = nCount % 2 + '0';
//			cInc = nCount >= 2 ? 1 : 0;
//			index ++;
//		}
//		if( cInc )
//			strRet[ index ] = '1';
//		else{
//			strRet.resize( index );
//		}
//		reverse( strRet.begin(), strRet.end() );
//		return strRet;
//    }
//};
//
//int main(){
//
//	string strA( "0" );
//	string strB( "1" );
//
//	Solution s;
//	s.addBinary( strA, strB );
//	return 0;
//}