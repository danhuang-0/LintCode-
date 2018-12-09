//// 直接转化成字符串处理就好了，省事的很
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param num: a positive number
//     * @return: true if it's a palindrome or false
//     */
//    bool isPalindrome(int num) {
//        // write your code here
//		string strNum = to_string( num );
//		int nSize = strNum.size();
//		for( int i=0; i<nSize / 2; i++ ){
//			if( strNum[i] != strNum[ nSize - 1 - i] )
//				return false;
//		}
//		return true;
//    }
//};