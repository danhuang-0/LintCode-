///*
// * 剑指Offer原题 29
// * 采用计数法，通过对一个数字计数
// * 相同+1，不同-1，为0换数
// * 最后剩下的一定是出现次数大于一半的
// */
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param nums: a list of integers
//     * @return: find a  majority number
//     */
//    int majorityNumber(vector<int> &nums) {
//        // write your code here
//
//		int nCount = 0;
//		int nTemp = 0;
//		for( auto ite=nums.begin(); ite!=nums.end(); ite++ ){
//			if( nCount == 0 ){
//				nTemp = *ite;
//				nCount = 1;
//			} else if( *ite==nTemp ) {
//				nCount ++;
//			} else {
//				nCount --;
//			}
//		}
//		return nTemp;
//    }
//};
//
//int main(){
//
//
//	return 0;
//}