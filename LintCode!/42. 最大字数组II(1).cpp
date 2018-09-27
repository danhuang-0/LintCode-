//// 贪心 最大子数组和一定不包括最小的负数
//// 但是不能解决最小数字重复问题，使用数组记录又很浪费时间
//// 采用方案2

//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param nums: A list of integers
//     * @return: An integer denotes the sum of max two non-overlapping subarrays
//     */
//    int maxSubArrays( vector<int> &nums, int nLeft, int nRight ){
//
//		int nMax = INT_MIN;
//		for( int i=nLeft; i<=nRight; i++ ){
//			if( nums[i] > nMax )
//				nMax = nums[i];
//		}
//		if( nMax < 0 )
//			return nMax;
//
//		int nSum = 0;
//		nMax = 0;
//		for( int i=nLeft; i<=nRight; i++ ){
//			nSum += nums[i];
//			if( nSum > nMax )
//				nMax = nSum;
//			if( nSum < 0 )
//				nSum = 0;
//		}
//		return nMax;
//	}
//    int maxTwoSubArrays(vector<int> &nums) {
//        // write your code here
//		if( nums.size() == 2 )
//			return nums[0] + nums[1];
//		int nMin = 0;
//		for( int i=1; i<nums.size(); i++ ){
//			if( nums[i] < nums[nMin] )
//				nMin = i;
//		}
//		if( nums[nMin] > 0 ){
//			int nSum = 0;
//			for( auto num : nums )
//				nSum += num;
//			return nSum;
//		}
//		if( nMin == 0 ) {
//			auto ite = nums.begin();
//			nums.erase( ite );
//			return maxTwoSubArrays( nums );
//		} else if ( nMin == nums.size()-1 ){
//			nums.pop_back();
//			return maxTwoSubArrays( nums );
//		}
//		return maxSubArrays( nums, 0, nMin-1) + maxSubArrays(nums, nMin+1, nums.size()-1);
//    }
//};