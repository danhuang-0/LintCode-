//// 参考之前落单的数的思路
//// 有两个数 a 和 b 只有一个
//// 那么一直异或下去结果是 a 和 b
//// 根据异或的特性，结果中从右侧数第一个1就是a和b不一样的地方
//// 根据这一位将数组分为两部分，这两部分每部分中只有一个落单的数
//// 使用之前的落单的数的算法就能完成了。
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: An integer array
//     * @return: An integer array
//     */
//    vector<int> singleNumberIII(vector<int> &A) {
//        // write your code here
//
//		vector<int> vecRet;
//		int nTemp = 0;
//		for( auto num : A )
//			nTemp ^= num;
//		int nDigit = 1;
//		while( (nTemp & nDigit) == 0 ){
//			nDigit *= 2;
//		}
//		vector<int> vecNums[2];
//		for( auto num : A ){
//			if( (num & nDigit) == 0 )
//				vecNums[0].push_back( num );
//			else
//				vecNums[1].push_back( num );
//		}
//		
//		for( int i=0; i<2; i++) {
//			nTemp = 0;
//			for( auto num : vecNums[i] )
//				nTemp ^= num;
//			vecRet.push_back( nTemp );
//		}
//		return vecRet;
//    }
//};
//
//int main(){
//
//	int arr[] = {1,2,2,3,4,4,5,3};
//	vector<int> vecNums( begin(arr), end(arr) );
//	Solution s;
//	s.singleNumberIII( vecNums );
//	return 0;
//}