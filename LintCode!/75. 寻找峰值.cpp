//// 数组有一个特点 峰值左侧是上升，右侧是下降
//// 使用类似二分查找的方式
//// mid 和左右比确认是上升还是下降。
//// 最后一次 left在right退出时，left和right中就有一个是峰值了
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: An integers array.
//     * @return: return any of peek positions.
//     */
//    int findPeak(vector<int> &A) {
//        // write your code here
//
//		int nSize = A.size();
//		int nLeft = 0;
//		int nRight = nSize - 1;
//		int nMid = ( nLeft + nRight ) / 2;
//		while( nLeft <= nRight ){
//			// 右侧为上升序列，向左看
//			if( nMid+1 < nSize && A[nMid] > A[nMid+1]){
//				nRight = nMid - 1;
//			} else {
//				nLeft = nMid + 1;
//			}
//			nMid = ( nLeft + nRight ) / 2;
//		}
//		return A[nLeft] > A[nRight] ? nLeft : nRight;
//    }
//};
//
//int main (){
//
//	int arr[] = {1,2,1,2,3,1} ;
//	Solution s;
//	cout<<s.findPeak( vector<int>( begin(arr), end(arr)));
//
//	return 0;
//}