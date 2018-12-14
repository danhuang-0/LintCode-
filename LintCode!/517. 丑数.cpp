//// 既然只有因数 2,3,5
//// 那就一直除到底就好了
//// 要额外注意 0 可能导致死循环，需要提前剔除
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param num: An integer
//     * @return: true if num is an ugly number or false
//     */
//    bool isUgly(int num) {
//        // write your code here
//		if( num == 0 )
//			return false;
//		while( num != 1 ){
//			if( num % 2 == 0 )
//				num /= 2;
//			else if ( num % 3 == 0 )
//				num /= 3;
//			else if ( num % 5 == 0 )
//				num /= 5;
//			else
//				break;
//		}
//		return num == 1;
//    }
//};