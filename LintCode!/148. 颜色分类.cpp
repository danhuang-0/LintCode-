//// 利用 Partition 的思想
//// 0 丢左边，2 丢右边
//// 由于是从左到右扫描的
//// 可能会出现换过来 0 的情况
//// 如果这个 0 之前全都是 0 那就不需要再给这个 0 找位置了
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: A list of integer which is 0, 1 or 2 
//     * @return: nothing
//     */
//    void sortColors(vector<int> &nums) {
//        // write your code here
//		int nLeft = -1;
//		int nRight = nums.size();
//		for( int i=0; i<nRight;  ){
//			if( nums[i] == 0 ) {
//				if( i == nLeft + 1 )
//					i++;
//				else
//					swap( nums[++nLeft], nums[i] );
//			} else if ( nums[i] == 2 ) {
//				swap( nums[--nRight], nums[i] );
//			} else {
//				i++;
//			}
//		}
//    }
//};
//
//int main (){
//
//	int arr[] = {2,0,0,1,2,0,2};
//	vector<int> vecNums( begin(arr), end( arr ));
//
//	Solution s;
//	s.sortColors( vecNums );
//
//
//	return 0;
//}