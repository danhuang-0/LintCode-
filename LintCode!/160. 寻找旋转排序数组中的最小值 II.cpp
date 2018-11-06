//// 当左右两侧相等的时候，无法根据左侧中部右侧来判断向左走还是向右走
//// 只能退化成遍历算法了
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: a rotated sorted array
//     * @return: the minimum number in the array
//     */
//    int findMin(vector<int> &nums) {
//        // write your code here
//        int nSize = nums.size();
//        int nLeft = 0;
//        int nRight = nSize - 1;
//        int nMid = ( nLeft + nRight ) / 2;
//        while( nLeft <= nRight ){
//
//			if( nums[nRight] > nums[nLeft] )
//				break;
//			
//			if( nums[nRight] == nums[nLeft] ){
//				for( int i = nLeft; i<=nRight; i++ ){
//					if( nums[i] < nums[nLeft] )
//						nLeft = i;
//				}
//				break;
//			}
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
//	int arr[] = {1,1,1,0,1,1,1};
//	vector<int> vecNums( begin(arr), end(arr) );
//	Solution s;
//	s.findMin( vecNums );
//	return 0;
//}