///* 剑指Offer 原题晋级
// * 由于有相同元素的时候，会出现左中右三值相等的情况
// * 导致无法选择走左边还是右边
// * 此时就只能退化为循环来处理了
// */
//
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: an integer ratated sorted array and duplicates are allowed
//     * @param target: An integer
//     * @return: a boolean 
//     */
//    bool search(vector<int> &A, int target) {
//        // write your code here
//        int nSize = A.size();
//        int nLeft = 0;
//        int nRight = nSize - 1;
//        int nMid = ( nLeft + nRight ) / 2;
//        while( nLeft <= nRight ){
//
//            if( A[nMid] == target )
//                return true;
//            if ( A[nMid]==A[nRight] && A[nMid]==A[nLeft] ) {
//                for( int i=nLeft+1; i<nRight; i++) {
//                    if (A[i]==target)
//                        return true;
//                }
//                return false;
//            }
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
//        return false;
//    }
//};