//// 和51. 上一个排列判断条件正好相反
//// 51 中是找到第一个逆序的
//// 本题中是找到第一个顺序的
//// 51 中是找到第一个比逆序数字小的
//// 本题中是找到第一个比顺序数组大的
//// 交换后同样反转后面的数组
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
//		return nums;
//    }
//};
//
//int main (){
//	
//	//int arr[] = {1,3,2,3};
//	int arr[] = {4,3,2,1};
//	vector<int> nums( begin(arr), end(arr));
//	Solution s;
//	s.previousPermuation( nums );
//
//	return 0;
//}