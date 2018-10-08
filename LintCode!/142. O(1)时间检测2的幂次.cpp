//// 利用二进制的特性
//// 一个数减一就是把最右一个1变成0，把后面的0全变成1
//// 之后与原数字做位与，就可以去掉原数字最后一个1
//// 2 的次幂中二进制1只有一个，去掉一个1如果是0就是2的次幂了
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: An integer
//     * @return: True or false
//     */
//    bool checkPowerOf2(int n) {
//        // write your code here
//		if( n<=0 )
//			return false;
//		return n&(n-1) == 0;
//    }
//};