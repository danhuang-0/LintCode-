//// 根据数据规律比较好做，但是因为可能有0会比较麻烦
//// 所以使用DP进行操作
//// 维护两个数组 其中max[i]代表以a[i]为结尾的串的最大值
//// max[i] = max( a[i], max[i-1]*a[i], min[i-1]*a[i] )
//// min[i] = min( a[i], max[i-1]*a[i], min[i-1]*a[i] )
//// 随着遍历持续更新最大值即可
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
//     * @return: An integer
//     */
//	inline int max( int a, int b, int c ){
//		a = a>b ? a : b;
//		a = a>c ? a : c;
//		return a;
//	}
//	inline int min( int a, int b, int c ){
//		a = a<b ? a : b;
//		a = a<c ? a : c;
//		return a;
//	}
//    int maxProduct(vector<int> &nums) {
//        // write your code here
//
//		int nSize = nums.size();
//		if( nSize<=0 )
//			return 0;
//		vector<int> vecMax( nSize );
//		vector<int> vecMin( nSize );
//		
//		int nMax = vecMax[0] = vecMin[0] = nums[0];
//
//		for( int i=1; i<nSize; i++ ){
//			vecMax[i] = max( nums[i],
//							 vecMax[i-1]*nums[i],
//							 vecMin[i-1]*nums[i]);
//			vecMin[i] = min( nums[i],
//							 vecMax[i-1]*nums[i],
//							 vecMin[i-1]*nums[i]);
//			if( vecMax[i] > nMax ){
//				nMax = vecMax[i];
//			}
//		}
//		return nMax;
//    }
//};