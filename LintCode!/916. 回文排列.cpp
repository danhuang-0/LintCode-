//// 能组成回文的排列
//// 一个字母出现奇数次数的字母最多只能有一个
//// 其余字母出现次数都是偶数
//
//#include <iostream>
//#include <string>
//#include <map>
//
//using namespace std;
//
//
//class Solution {
//public:
//    /**
//     * @param s: the given string
//     * @return: if a permutation of the string could form a palindrome
//     */
//    bool canPermutePalindrome(string &s) {
//        // write your code here
//		map<char, int> mapCount;
//		for( auto ch : s )
//			mapCount[ch] ++;
//		bool isFirst = true ;
//		bool isOk = true;
//		for( auto ite=mapCount.begin(); ite!=mapCount.end(); ite++ ){
//			if( ite->second %2 != 0 ){
//				if( isFirst )
//					isFirst = false;
//				else {
//					isOk = false;
//					break;
//				}
//			}
//		}
//		return isOk;
//    }
//};
