//// �ݹ�N�㣬����Ҫÿһ�����һλ�����
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: An integer
//     * @return: An array storing 1 to the largest number with n digits.
//     */
//	void makeNums( vector<int> &vecNums, int nLevel, int nMaxLevel ){
//		if( nLevel > nMaxLevel )
//			return;
//		int nBegin = pow(10, nLevel-1);
//		int nEnd = pow(10, nLevel);
//		for( int i=nBegin; i<nEnd; i++ ){
//			vecNums.push_back(i);
//		}
//		makeNums( vecNums, nLevel+1, nMaxLevel);
//	}
//    vector<int> numbersByRecursion(int n) {
//        // write your code here
//		vector<int> vecRet;
//		makeNums( vecRet, 1, n );
//		return vecRet;
//    }
//};
//
//int main(){
//	Solution s;
//	s.numbersByRecursion( 6 );
//
//	return 0;
//}