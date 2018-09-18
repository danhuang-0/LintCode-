//// 先排序 负数在前
//// 在当前数列中 找到后两个数和为前面的数的负数即可
//// 值得一提的是，跳过数字的时候要跳过所有数字相同的项
//// 否则会出现重复答案情况。
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
//     * @param numbers: Give an array numbers of n integer
//     * @return: Find all unique triplets in the array which gives the sum of zero.
//     */
//	void findSumK( vector<int> &vecNums, int nLeft,
//		int nRight, int k, vector<vector<int>> &vecRet ){
//		while( nLeft < nRight ){
//			if( vecNums[nLeft] + vecNums[nRight] > -k ){
//				while( nRight > nLeft && vecNums[nRight]==vecNums[nRight-1] )
//					nRight --;
//				nRight --;
//			} else if ( vecNums[nLeft] + vecNums[nRight] < -k ){
//				while( nRight > nRight && vecNums[nLeft] == vecNums[nLeft+1])
//					nLeft ++;
//				nLeft ++;	
//			}
//			else {
//				int arr[] = { k, vecNums[nLeft], vecNums[nRight]};
//				vecRet.push_back( vector<int>( begin(arr), end(arr) ) );
//				while( nRight > nLeft && vecNums[nRight]==vecNums[nRight-1] )
//					nRight --;
//				nRight --;
//				while( nRight > nRight && vecNums[nLeft] == vecNums[nLeft+1])
//					nLeft ++;
//				nLeft ++;	
//			}
//		}
//	}
//    vector<vector<int>> threeSum(vector<int> &numbers) {
//        // write your code here
//		
//		vector<vector<int>> vecRet;
//
//		sort( numbers.begin(), numbers.end() );
//		int nSize = numbers.size();
//		if( nSize == 0 )
//			return vecRet;
//
//		if( numbers[0] > 0 || numbers[nSize -1 ] < 0 )
//			return vecRet;
//		for( int i=0; i<nSize-2; i++ ){
//			if( i!=0 && numbers[i] == numbers[i-1] )
//				continue;
//			if( numbers[i] > 0 )
//				break;
//			findSumK( numbers, i+1, nSize-1, numbers[i], vecRet );
//		}
//
//		return vecRet;
//    }
//};
//
//int main (){
//
//	int arr[] = {1,0,-1,-1,-1,-1,0,1,1,1};
//	vector<int> vecNums( begin(arr), end(arr) );
//	Solution s;
//	s.threeSum( vecNums );
//
//	return 0;
//}