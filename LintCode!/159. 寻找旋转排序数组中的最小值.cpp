//// ������������������
//// ����Ҳ�����С
//// ����Ҳ���м�ֵС����˵����Сֵ���м�ֵ�Ҳ�
//// �����Ҳ���м�ֵ����˵����Сֵ���м�ֵ���
//// ����Ҳ����������������Сֵ
//// ͬʱҪ�ж�
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