//// ����ɻ��ĵ�����
//// һ����ĸ����������������ĸ���ֻ����һ��
//// ������ĸ���ִ�������ż��
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
