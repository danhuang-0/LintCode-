///*
// * ��ָOfferԭ�� 29
// * ���ü�������ͨ����һ�����ּ���
// * ��ͬ+1����ͬ-1��Ϊ0����
// * ���ʣ�µ�һ���ǳ��ִ�������һ���
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