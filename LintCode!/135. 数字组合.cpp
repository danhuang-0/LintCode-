//// 无脑DFS
//// 使用有序的特性进行去重
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
//     * @param candidates: A list of integers
//     * @param target: An integer
//     * @return: A list of lists of integers
//     */
//
//	void DFS( vector<int> &candidates, vector<vector<int>> &vecRet,
//		vector<int> &vecTemp, int nLoc, int target ){
//		if( target == 0 ){
//			vecRet.push_back( vecTemp );
//			return;
//		}
//		if( target < 0 )
//			return;
//		for( int i=nLoc; i<candidates.size(); ){
//			vecTemp.push_back( candidates[i] );
//			DFS( candidates, vecRet, vecTemp, i, target - candidates[i] );
//			vecTemp.pop_back();
//			int nLast = i;
//			while( i<candidates.size() && candidates[i] == candidates[nLast] )
//				i++;
//		}
//	}
//
//    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
//        // write your code here
//		vector<vector<int>> vecRet;
//		if( candidates.size() == 0 )
//			return vecRet;
//		sort( candidates.begin(), candidates.end() );
//		vector<int> vecTemp;
//		DFS( candidates, vecRet, vecTemp, 0, target);
//		return vecRet;
//    }
//};
//
//int main(){
//
//	int arr[] = { 2 };
//	int nTarget = 8;
//
//	vector<int> vecNums( begin(arr), end(arr) );
//	
//	Solution s;
//	s.combinationSum( vecNums, nTarget );
//
//	return 0;
//}