//// 利用二进制的特性
//// 一个数字 位与 这个数字-1 会去掉数字中最后一个 1
//// 统计计算的次数即可
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param num: An integer
//     * @return: An integer
//     */
//    int countOnes(int num) {
//        // write your code here
//		int nRet = 0;
//		while( num != 0 ){
//			nRet++;
//			num = ( num &(num-1) );
//		}
//		return nRet;
//    }
//};
//
//int main(){
//	Solution s;
//	s.countOnes(100);
//	s.countOnes(-1);
//}