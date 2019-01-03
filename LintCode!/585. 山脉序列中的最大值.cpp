//// 二分查找变形
//// 通过 mid 和 mid 左右做比较要注意情况比较多
//// 要考虑到什么时候需要有一个偏移量，什么时候不需要偏移量
//// 其实可以直接通过 mid，left，right 三者的关系做出判断的。。。
//// 做这题脑抽了
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: a mountain sequence which increase firstly and then decrease
//     * @return: then mountain top
//     */
//    int mountainSequence(vector<int> &nums) {
//        // write your code here
//		if( nums.size() ==  0 )
//			return 0;
//		int nLeft = 0;
//		int nRight = nums.size() - 1;
//		while( nLeft != nRight ){
//
//			// 防止两半有一样的数字
//			if( nums[nLeft] == nums[nRight] ){
//				if( nLeft == nRight - 1 )
//					return nums[nLeft];
//				nLeft++;
//				nRight--;
//				continue;
//			}
//
//			int nMid = ( nLeft + nRight ) / 2;
//
//			// 防止 nMid 处有多个重复数字
//			int nMidLeft = nMid;
//			int nMidRight = nMid;
//			while( nums[nMidLeft-1] == nums[nMid] && nMidLeft-1 > nLeft )
//				nMidLeft--;
//			while( nums[nMidRight+1] == nums[nMid] && nMidRight+1 < nRight )
//				nMidRight++;
//
//			if( nMidLeft - 1 >= nLeft && nums[nMidLeft-1] < nums[nMid] )
//				nLeft = nMidRight;
//			else if ( nMidRight + 1 <= nRight && nums[nMidRight+1] > nums[nMid] )
//				nLeft = nMidRight + 1;
//			else if ( nMidLeft - 1 >= nLeft && nums[nMidLeft-1] > nums[nMid] )
//				nRight = nMidLeft - 1;
//			else if ( nMidRight + 1 <= nRight && nums[nMidRight+1] < nums[nMid] )
//				nRight = nMidLeft;
//			else
//				return nums[nMid];
//		}
//		return nums[nRight];
//    }
//};
//
//using namespace std;
//
//int main(){
//	int arr[] = {1,2,3,4,5,10,4,3,2,1};
//	vector<int> vecNums( begin(arr), end(arr) );
//	Solution s;
//	s.mountainSequence( vecNums );
//	return 0;
//}