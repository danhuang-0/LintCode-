//// 主要思路为最大子数组减最小子数组
//// 从左到右构建最大子数组，从右到左构建最小子数组
//// 最大值有可能是左减右也有可能是右减左
//// 所以需要构建四个临时数组。
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: A list of integers
//     * @return: An integer indicate the value of maximum difference between two substrings
//     */
//
//	int findMaxDiff( vector<int> nums ){
//		if( nums.size()==0 )
//			return 0;
//		int nRet = 0;
//		bool bAllIsMinus = true;
//		bool bAllIsPlus = true;
//		vector<int> vecMaxLeft( nums.size() );
//		vector<int> vecMinRight( nums.size() );
//		for( auto n : nums ) {
//			if( n >=0 ) {
//				bAllIsMinus = false;
//			} else {
//				bAllIsPlus = false;
//			}
//		}
//		
//		// 根据特性制作左侧最大子数组，右侧最小子数组
//		if( bAllIsMinus ) {
//			vecMaxLeft[0] = nums[0];
//			vecMinRight[ nums.size()-1 ] = nums[ nums.size()-1 ];
//			for( int i=1; i<nums.size(); i++ ){
//				vecMaxLeft[i] = max( vecMaxLeft[ i - 1 ], nums[i] );
//				vecMinRight[ nums.size() - 1 - i ] = 
//					vecMinRight[ nums.size() - i ] + nums[ nums.size() - 1 - i ];
//			}
//		} else if ( bAllIsPlus ) {
//			vecMaxLeft[0] = nums[0];
//			vecMinRight[ nums.size()-1 ] = nums[ nums.size()-1 ];
//			for( int i=1; i<nums.size(); i++ ) {
//				vecMaxLeft[i] = vecMaxLeft[ i - 1 ] + nums[i];
//				vecMinRight[ nums.size() - 1 - i ] = 
//					min( vecMinRight[ nums.size() - i ], nums[ nums.size() - 1 - i ] );
//			}
//		} else {
//			int nMax = nums[0];
//			int nMin = nums[ nums.size() - 1 ];
//			vecMaxLeft[ 0 ] = nMax;
//			vecMinRight[ nums.size() - 1 ] = nMin; 
//			for( int i=1; i<nums.size(); i++ ){
//				if( nMax < 0 )
//					nMax = 0;
//				if( nMin > 0 )
//					nMin = 0;
//
//				nMax += nums[i];
//				vecMaxLeft[ i ] = max( vecMaxLeft[i-1], nMax );
//				nMin += nums[ nums.size() - 1 - i ];
//				vecMinRight[ nums.size() - 1 - i ] =
//					min ( vecMinRight[ nums.size() - i ], nMin );
//			}
//		}
//
//		// 使用 42 的思路，从中间分割遍历
//		for( int i=0; i<nums.size()-1; i++ ) {
//			int nDiff = abs( vecMaxLeft[i] - vecMinRight[i+1] );
//			if( nDiff > nRet )
//				nRet = nDiff;
//		}
//		return nRet;
//	}
//
//    int maxDiffSubArrays(vector<int> &nums) {
//        // write your code here
//		int nRet_1 = findMaxDiff( nums );
//		reverse( nums.begin(), nums.end() );
//		int nRet_2 = findMaxDiff( nums );
//		return max( nRet_1, nRet_2 );
//    }
//};
//
//int main(){
//	// int arr[] = { -1, -2, -3, -4, -5 };
//	// int arr[] = { 1, 2, 3, 4, 5 };
//	int arr[] = {1, 2, -3, 1};
//	Solution s;
//	s.maxDiffSubArrays( vector<int>( begin(arr), end(arr) ));
//	return 0;
//}