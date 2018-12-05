//// 无脑二分查找
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: An integer array sorted in ascending order
//     * @param target: An integer
//     * @return: An integer
//     */
//    int findPosition(vector<int> &nums, int target) {
//        // write your code here
//
//		int nLeft = 0;
//		int nRight = nums.size() - 1;
//		
//		while( nLeft < nRight ){
//			int nMid = ( nLeft + nRight ) / 2;
//			if( nums[nMid] == target )
//				return nMid;
//			else if( nums[nMid] < target )
//				nLeft = nMid + 1;
//			else 
//				nRight = nMid - 1;
//		}
//		return -1;
//    }
//};