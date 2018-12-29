//// 找规律做出来的
//
//#include <iostream>
//
//class Solution {
//public:
//    /**
//     * @param num: a non-negative integer
//     * @return: one digit
//     */
//    int addDigits(int num) {
//        // write your code here
//		if( num == 0 )
//			return 0;
//		int nRet = num % 9;
//		if( nRet == 0 )
//			nRet = 9;
//		return nRet;
//    }
//};