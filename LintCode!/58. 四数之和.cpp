//// 跟三数之和思路类似
//// 时间复杂度 n^3
//// 双重遍历取出前两个数
//// 之后在后面的范围内找后两个数
//// 时刻要注意去重的问题
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param numbers: Give an array
//     * @param target: An integer
//     * @return: Find all unique quadruplets in the array which gives the sum of zero
//     */
//
//    vector<vector<int>> fourSum(vector<int> &numbers, int target) {
//        // write your code here
//
//		vector<vector<int>> vecRet;
//		if( numbers.size() < 4 )
//			return vecRet;
//		sort( numbers.begin(), numbers.end() );
//
//		int nFirst = 0;
//		while( nFirst < numbers.size() - 3 ){
//			int nSecond = nFirst + 1;
//			while( nSecond < numbers.size() - 2 ){
//				int nSumOfFirstAndSecond = numbers[nFirst] + numbers[nSecond];
//				int nLeft = nSecond + 1;
//				int nRight = numbers.size() - 1;
//				while( nLeft < nRight ) {
//					if( numbers[nLeft] + numbers[nRight] + nSumOfFirstAndSecond < target ){
//						while( nLeft < nRight && numbers[nLeft] == numbers[nLeft+1] )
//							nLeft++;
//						nLeft++;
//					} else if ( numbers[nLeft] + numbers[nRight] + nSumOfFirstAndSecond > target ) {
//						while( nLeft < nRight && numbers[nRight] == numbers[nRight-1] )
//							nRight--;
//						nRight--;
//					} else {
//						int arr[] = { numbers[nFirst], numbers[nSecond],
//									  numbers[nLeft], numbers[nRight] };
//						vecRet.push_back( vector<int>( begin(arr), end(arr)));
//						while( nLeft < nRight && numbers[nLeft] == numbers[nLeft+1] )
//							nLeft++;
//						nLeft++;
//						while( nLeft < nRight && numbers[nRight] == numbers[nRight-1] )
//							nRight--;
//						nRight--;
//					}
//				}
//				while( nSecond < numbers.size() && numbers[nSecond] == numbers[nSecond+1])
//					nSecond ++;
//				nSecond++;
//			}
//			while( nFirst < numbers.size() && numbers[nFirst] == numbers[nFirst+1])
//				nFirst ++;
//			nFirst++;
//		}
//		return vecRet;
//    }
//};
//
//int main(){
//
//	int arr[] = {1,0,-1,-1,-1,-1,0,1,1,1,2};
//	int nTarget = 2;
//
//	Solution s;
//	s.fourSum( vector<int>(begin(arr), end(arr)), nTarget );
//
//	return 0;
//}