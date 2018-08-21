///* 先二分法找到这个数字
// * 之后从二分的点，分别向两侧二分寻找头和尾
// */
//
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: an integer sorted array
//     * @param target: an integer to be inserted
//     * @return: a list of length 2, [index1, index2]
//     */
//    vector<int> searchRange(vector<int> &A, int target) {
//        // write your code here
//        vector<int> ret(2, -1);
//        int nLeft = 0;
//        int nRight = A.size() - 1;
//        int nMid = ( nLeft + nRight )/2;
//        while( nLeft <= nRight ){
//            if( target > A[nMid] )
//                nLeft = nMid + 1;
//            else if( target < A[nMid] )
//                nRight = nMid - 1;
//            else{
//                break;
//            }
//            nMid = ( nLeft + nRight )/2;
//        }
//        if( nLeft > nRight )
//            return ret;
//        int nTempMid = nMid;
//        int nTempRight = nRight;
//        // 找头
//        do {
//            if( nMid == 0 || ( A[nMid]==target && A[nMid-1] < target) ) {
//                ret[0] = nMid;
//                break;
//            }
//            else if ( target == A[nMid] )
//                nRight = nMid - 1;
//            else
//                nLeft = nMid + 1;
//            nMid = (nLeft + nRight) / 2;
//        } while( 1 );
//
//        // 找尾
//        nLeft = nTempMid;
//        nRight = nTempRight;
//
//        do {
//            nMid = (nLeft + nRight) / 2;
//            if( nMid == A.size()-1 ||( A[nMid]==target && A[nMid+1] > target) ) {
//                ret[1] = nMid;
//                break;
//            }
//            else if ( target == A[nMid] )
//                nLeft = nMid + 1;
//            else
//                nRight = nMid - 1;
//        } while( 1 );
//
//        return ret;
//    }
//};