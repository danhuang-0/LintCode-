//// 原题不需要排序
//// 简化版 Partition 即可
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param nums: an array of integers
//     * @return: nothing
//     */
//    void partitionArray(vector<int> &nums) {
//        // write your code here
//		if( nums.size() < 2 )
//			return;
//
//		int nLeft = 0;
//		int nRight = nums.size() - 1;
//		while( nLeft < nRight ){
//			while( nums[nLeft]%2 != 0 && nLeft < nRight )
//				nLeft ++;
//			while( nums[nRight]%2 == 0 && nLeft < nRight )
//				nRight --;
//			if( nLeft < nRight ){
//				swap( nums[nLeft], nums[nRight] );
//				nLeft ++;
//				nRight --;
//			}
//		}
//    }
//};
//
//int main(){
//
//	int arr[] = {1, 2, 3, 4};
//
//	vector<int> vecNums( begin(arr), end(arr) );
//
//	Solution s;
//	s.partitionArray( vecNums );
//
//	return 0;
//}