//// 采用二分查找的方式
//// 如果没对数都是两两挨着的话
//// 在落单的数前面的都是 a[2n] == a[2n+1]
//// 在落单的数后面都不满足这个条件
//// 只要找到第一个 a[2n] != a[2n+1] 的地方就可以了
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: The number array
//     * @return: Return the single number
//     */
//    int getSingleNumber(vector<int> &nums) {
//        // Write your code here
//		int nLeft = 0;
//		int nRight = nums.size()-1;
//		int nMid = ( nLeft + nRight ) / 2;
//		while( 1 ){
//			if( nMid % 2 != 0 )
//				nMid--;
//			
//			if( nums[nMid] == nums[nMid+1] ) {
//				nLeft = nMid + 2;
//			} else {
//				if ( nMid == 0 || nums[nMid-2] == nums[nMid-1] ){
//					break;
//				} else {
//					nRight = nMid - 2;
//				}
//			}
//			nMid = ( nLeft + nRight ) / 2;
//		}
//		return nums[nMid] ;
//    }
//};
//
//int main (){
//
//	int arr[] = { 4,3,3,2,2,5,5 };
//	vector<int> vecNums( begin( arr ), end( arr ));
//	Solution s;
//	s.getSingleNumber( vecNums );
//
//
//	return 0;
//}