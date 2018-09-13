//// 暴力过的，暂时没找到什么好方法
//#include <iostream>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: a list
//     * @param B: a list
//     * @param C: a list
//     * @param D: a list
//     * @return: how many tuples (i, j, k, l) there are such that A[i] + B[j] + C[k] + D[l] is zero
//     */
//    int fourSumCount(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D) {
//        // Write your code here
//		map<int, int> mapCount;
//		for( auto a : A )
//			for( auto b : B )
//				mapCount[a+b] += 1;	
//		int nCount = 0;
//		for( auto c : C )
//			for( auto d : D )
//				nCount += mapCount[ -(c+d)];
//		return nCount;
//    }
//};