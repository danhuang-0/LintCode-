//// 还是套 DFS 模板就好了
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: Given the range of numbers
//     * @param k: Given the numbers of combinations
//     * @return: All the combinations of k numbers out of 1..n
//     */
//
//	void DFS( int nStat, int n, int k,
//		vector<int> &vecTemp, vector<vector<int>> &vecRet ){
//		if( vecTemp.size() == k ){
//			vecRet.push_back( vecTemp );
//			return;
//		}
//		for( int i = nStat; i<=n; i++ ){
//			vecTemp.push_back( i );
//			DFS( i+1, n, k, vecTemp, vecRet );
//			vecTemp.pop_back();
//		}
//	}
//
//    vector<vector<int>> combine(int n, int k) {
//        // write your code here
//		vector<vector<int>> vecRet;
//		if( n==0 )
//			return vecRet;
//		if( n < k )
//			return vecRet;
//		vector<int> vecTemp;
//
//		DFS(1, n, k, vecTemp, vecRet );
//
//		return vecRet;
//    }
//};
//
//int main(){
//
//	Solution s;
//	s.combine( 4,2);
//	return 0;
//}