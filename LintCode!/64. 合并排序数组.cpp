//// 直接无脑从后向前合并就好了
//#include <iostream>
//
//class Solution {
//public:
//    /*
//     * @param A: sorted integer array A which has m elements, but size of A is m+n
//     * @param m: An integer
//     * @param B: sorted integer array B which has n elements
//     * @param n: An integer
//     * @return: nothing
//     */
//    void mergeSortedArray(int A[], int m, int B[], int n) {
//        // write your code here
//		int nMaxLength = m+n;
//		int rightOfA = m-1;
//		int rightOfB = n-1;
//		for( int i=nMaxLength-1; i>=0; i-- ){
//			if( A[rightOfA] > B[rightOfB] )
//				A[i] = A[rightOfA--];
//			else
//				A[i] = B[rightOfB--];
//		}
//    }
//};