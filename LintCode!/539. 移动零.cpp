//// 从左到右扫一边即可
//// 维持一个计数统计有多少正数了
//// 碰见大于 0 的就跟计数位置交换
//// 0 就直接跳过
//// 从计数位置开始，向后全置 0 即可
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: an integer array
//     * @return: nothing
//     */
//    void moveZeroes(vector<int> &nums) {
//        // write your code here
//		int nIndex = 0;
//		for( int i=0; i<nums.size(); i++ ){
//			if( nums[i] != 0 )
//				swap( nums[i], nums[nIndex++] );
//		}
//		for( int i=nIndex; i<nums.size(); i++ )
//			nums[i] = 0;
//    }
//};
//
//int main(){
//
//	int arr[] = {0, 1, 0, 3, 12};
//	vector<int> vecNums( begin(arr), end(arr) );
//	Solution s;
//	s.moveZeroes(vecNums);
//	return 0;
//}