//// 和全子集差不多
//// 只不过当前排列要求只深度为K就返回，
//// 且命中条件为深度为 K 并且和为Target
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param A: an integer array
//     * @param k: a postive integer <= length(A)
//     * @param target: an integer
//     * @return: A list of lists of integer
//     */
//	void DFS( vector<int> &A, int k, int target, int level,
//		int nSum, vector<int> &vecNow, vector<vector<int>> &vecRet ){
//		if( vecNow.size() == k ){
//			if( nSum == target )
//				vecRet.push_back( vecNow );
//			return; 
//		}
//		for( int i=level ; i<A.size(); i++ ){
//			vecNow.push_back( A[i] );
//			DFS( A, k, target, i + 1, nSum + A[i], vecNow, vecRet);
//			vecNow.pop_back();
//		}
//	}
//	
//    vector<vector<int>> kSumII(vector<int> &A, int k, int target) {
//        // write your code here
//
//		sort( A.begin(), A.end() );
//		vector<vector<int>> vecRet;
//		vector<int> vecTemp;
//		DFS(A, k, target, 0, 0, vecTemp, vecRet);
//		
//		return vecRet;
//    }
//};
//
//int main (){
//
//	int arr[] = {1,4,5,6,8};
//	int k = 1;
//	int target = 4;
//	Solution s;
//	s.kSumII( vector<int>(begin(arr), end(arr)), k, target);
//	return 0;
//}