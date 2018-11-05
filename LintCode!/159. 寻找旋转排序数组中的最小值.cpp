//// 和搜索排序数组类似
//// 如果右侧比左侧小
//// 如果右侧比中间值小，则说明最小值在中间值右侧
//// 否则右侧比中间值大，则说明最小值在中间值左侧
//// 如果右侧比左侧大，则左侧就是最小值
//// 同时要判断
//
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: an integer rotated sorted array
//     * @param target: an integer to be searched
//     * @return: an integer
//     */
//   int findMin(vector<int> &nums){
//        // write your code here
//        int nSize = nums.size();
//        int nLeft = 0;
//        int nRight = nSize - 1;
//        int nMid = ( nLeft + nRight ) / 2;
//        while( nLeft <= nRight ){
//
//			if( nums[nRight] >= nums[nLeft] )
//				break;
//
//			if( nMid > 0 && nMid < nSize - 1 &&
//				nums[nMid - 1] > nums[nMid] && nums[nMid + 1] > nums[nMid] ){
//				nLeft = nMid;
//				break;
//			}
//
//            if( nums[nRight] <= nums[nMid] ){
//                nLeft = nMid + 1;
//            } else {
//                nRight = nMid - 1;
//            }
//            nMid = ( nLeft + nRight ) / 2;
//        }
//        return nums[nLeft];
//    }
//};
//
//int main(){
//	
//	Solution s;
//	
//	int arr[] = {5,6,7,0,1,2,4};
//
//	s.findMin( vector<int>( begin(arr), end(arr)) );
//
//	return 0;
//}