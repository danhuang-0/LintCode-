//// 详见 52. 下一个排列
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: An array of integers
//     * @return: nothing
//     */
//    void nextPermutation(vector<int> &nums) {
//        // write your code here
//		int index;
//		for( index = nums.size()-2; index >= 0; index-- ){
//			if( nums[index+1] > nums[index] )
//				break;
//		}
//		// 没找到
//		if( index == -1 ){
//			reverse( nums.begin(), nums.end() );
//		} else {
//			for( int index2 = nums.size()-1; ; index2-- ){
//				if( nums[index2] > nums[index] ){
//					swap( nums[index2], nums[index]);
//					int nBegin = index + 1;
//					for( int i=nBegin; i<(nBegin+nums.size())/2; i++ ){
//						swap( nums[i], nums[nums.size()-1-i+nBegin]);
//					}
//					break;
//				}
//			}	
//		}
//    }
//};