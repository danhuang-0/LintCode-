//// 两个指针，把后面的都挪过来就行了，之后resize一下
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param A: A list of integers
//     * @param elem: An integer
//     * @return: The new length after remove
//     */
//    int removeElement(vector<int> &A, int elem) {
//        // write your code here
//		int nFirst = 0;
//		int nLast = 0;
//		while( nLast < A.size() ){
//			if( A[nLast] == elem ){
//				nLast ++;
//			} else {
//				swap( A[nFirst], A[nLast] );
//				nFirst++;
//				nLast++;
//			}
//		}
//		A.resize( nFirst );
//		return nFirst;
//    }
//};
//
//int main(){
//	int arr[] = {0,4,4,0,0,2,4,4};
//	vector<int> vecNums( begin(arr), end(arr) );
//	Solution s;
//	s.removeElement( vecNums, 4 );
//	return 0;
//}