//// 使用二分查找的方式
//// 在1-最大长度之间二分查找出一个长度
//// 遍历每个木头段，用当前长度判断漫步满足长度
//// 只要是当前长度满足，当前长度 +1 不满足
//// 当前长度就是满足条件的最大长度
//// 无法分割的情况就是长度为1都不行
//// nRight 会到 0，退出的时候nMid直接就是0无需处理
//// 需要注意可能会出现数据溢出的情况。
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param L: Given n pieces of wood with length L[i]
//     * @param k: An integer
//     * @return: The maximum length of the small pieces
//     */
//    int woodCut(vector<int> &L, int k) {
//        // write your code here
//		if( L.size() == 0 || k <= 0 )
//			return 0;
//		int nMaxLength = 1;
//		for( auto length : L ){
//			if( length > nMaxLength ){
//				nMaxLength = length;
//			}
//		}
//
//		long long nLeft = 1;
//		long long nRight = nMaxLength;
//		long long nMid = ( nLeft + nRight ) / 2;
//		
//		while( nLeft <= nRight ){
//
//			int nIncLength = nMid + 1;
//			int nCountOfMid = 0;
//			int nCountOfInc = 0;
//			for( auto length : L ){
//				nCountOfMid += length / nMid;
//				nCountOfInc += length / nIncLength;
//			}
//			if( nCountOfMid >= k && nCountOfInc < k ){
//				break;
//			} else if ( nCountOfMid < k ) {
//				nRight = nMid - 1;
//			} else {
//				// nCountOfMid >= k && nCountOfInc > k
//				nLeft = nMid + 1;
//			}
//			nMid = ( nLeft + nRight ) / 2 ;
//		}
//		return nMid;
//    }
//};
//
//int main(){
//
//	//int arr[] = {232, 124, 456};
//	int arr[] = {2147483644,2147483645,2147483646,2147483647};
//
//	vector<int> vecNums( begin(arr), end(arr) );
//
//	Solution s;
//	//s.woodCut( vecNums, 7 );
//	//s.woodCut( vecNums, 10000 );
//	//s.woodCut( vecNums, 0 );
//	//s.woodCut( vector<int>(), 10000 );
//	//s.woodCut( vecNums, 1 );
//	s.woodCut( vecNums, 4 );
//
//
//	return 0;
//}