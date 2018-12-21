//// 题干里面给了提示了
//// 如果不是快乐数就会一直循环
//// 一直循环就会出现重复数字
//// 所以只要记录这路过的数字，出现重复数字的就可以退出循环了
//
//#include <iostream>
//#include <unordered_set>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: An integer
//     * @return: true if this is a happy number or false
//     */
//    bool isHappy(int n) {
//        // write your code here
//		unordered_set<int> setNums;
//		bool bRet = false;
//		int nTemp;
//		int nDigit;
//		while( 1 ){
//			nTemp = 0;
//			while( n ){
//				nDigit = n % 10;
//				n /= 10;
//				nTemp += nDigit * nDigit;
//			}
//			if( nTemp == 1 ){
//				bRet = true;
//				break;
//			} else if ( setNums.find(nTemp) != setNums.end() ){
//				break;
//			} else {
//				setNums.insert( nTemp );
//				n = nTemp;
//			}
//		}
//		return bRet;
//    }
//};
//
//int main(){
//
//	Solution s;
//	s.isHappy( 18 );
//	s.isHappy( 19 );
//	return 0;
//}