///* 剑指Offer 的题
// * 利用旋转数组最少有一半是排过序的规律
// * 将数组分为排序和未排序两部分
// * 并用类似二分查找的方式进行处理
// */
//
//
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: an integer rotated sorted array
//     * @param target: an integer to be searched
//     * @return: an integer
//     */
//    int search(vector<int> &A, int target) {
//        // write your code here
//        int nSize = A.size();
//        int nLeft = 0;
//        int nRight = nSize - 1;
//        int nMid = ( nLeft + nRight ) / 2;
//        while( nLeft <= nRight ){
//
//            if( A[nMid] == target )
//                return nMid;
//            if( A[nMid] >= A[nLeft] ){
//                if( target < A[nMid] && target >= A[nLeft] )
//                    nRight = nMid - 1;
//                else
//                    nLeft = nMid + 1;
//            } else {
//                if( target >A[nMid] && target <= A[nRight] )
//                    nLeft = nMid + 1;
//                else
//                    nRight = nMid - 1;
//            }
//            nMid = ( nLeft + nRight ) / 2;
//        }
//        return -1;
//    }
//};