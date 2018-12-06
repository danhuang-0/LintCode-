//// 使用快排 partition 的思想
//// 把数据按某一个值进行分片，左边大，又变小
//// 直到某一次，这个 index 为指定值为止
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: An integer array
//     * @return: The second max number in the array.
//     */
//
//	int Partition( vector<int> &nums, int nLeft, int nRight ){
//		if( nLeft == nRight )
//			return nLeft;
//		if( nLeft > nRight )
//			return -1;
//		int nLoc = nLeft;
//		swap( nums[nLeft], nums[nRight] );
//		for( int i=nLeft; i<nRight; i++ ){
//			if( nums[i] > nums[nRight] )
//				swap( nums[i], nums[nLoc++] );
//		}
//		swap( nums[nRight], nums[nLoc] );
//		return nLoc;
//	}
//    int secondMax(vector<int> &nums) {
//        // write your code here
//		int nLeft = 0;
//		int nRight = nums.size() - 1;
//		int nLoc = Partition( nums, nLeft, nRight );
//		while( nLoc != 1 ){
//			if( nLoc < 1 )
//				nLoc = Partition( nums, nLoc + 1, nRight );
//			else
//				nLoc = Partition( nums, nLeft, nLoc - 1 );
//		}
// 		return nums[1];
//    }
//};