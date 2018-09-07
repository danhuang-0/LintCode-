//// 1 3 2 4 5 6 -> 1 2 3 6 5 4
//// 1 2 3 6 5 4 -> 1 2 3 6 4 5
//// 1 2 3 6 4 5 -> 1 2 3 5 6 4
//// 按照字典序的上一个排列
//// 从后向前扫描，找到第一个升序的位置，记录下来
//// 向后找到第一个比记录值大的数，
//// 交换这两个位置，把后续全部翻转
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param nums: A list of integers
//     * @return: A list of integers that's previous permuation
//     */
//    vector<int> previousPermuation(vector<int> &nums) {
//        // write your code here
//		int index;
//		for( index = nums.size()-2; index >= 0; index-- ){
//			if( nums[index+1] < nums[index] )
//				break;
//		}
//		// 没找到
//		if( index == -1 ){
//			reverse( nums.begin(), nums.end() );
//		} else {
//			for( int index2 = nums.size()-1; ; index2-- ){
//				if( nums[index2] < nums[index] ){
//					swap( nums[index2], nums[index]);
//					reverse( find(nums.begin(), nums.end(), nums[index2]), nums.end() );
//					break;
//				}
//			}
//		}
//		return nums;
//    }
//};
//
//int main (){
//	
//	int arr[] = {2,1,1};
//	vector<int> nums( begin(arr), end(arr));
//	Solution s;
//	s.previousPermuation( nums );
//
//	return 0;
//}