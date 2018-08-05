//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: sorted integer array A
//     * @param B: sorted integer array B
//     * @return: A new sorted integer array
//     */
//    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
//        // write your code here
//		int sizeA = A.size();
//		int sizeB = B.size();
//		vector<int> vctRet( sizeA + sizeB );
//		int i=0, j=0, k=0;
//
//		while( i<sizeA && j<sizeB )
//		{
//			vctRet[k++] = A[i]<B[j] ? A[i++]:B[j++];
//		}
//		while( i<sizeA )
//		{
//			vctRet[k++] = A[i++];
//		}
//		while( j<sizeB )
//		{
//			vctRet[k++] = B[j++];
//		}
//		return vctRet;
//    }
//};
//
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	int b[] = { 2,4,5,6 };
//	vector<int> A( a, a+4 );
//	vector<int> B( b, b+4 );
//	Solution s;
//	vector<int> C = s.mergeSortedArray( A, B );
//	for( int i=0; i<C.size(); i++ )
//		cout<<C[i]<<" ";
//	system("pause");
//	return 0;
//}