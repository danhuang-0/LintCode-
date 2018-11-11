//// �� 135 һ���� DFS ģ��
//// �� 135 �Ĵ���ֻ���� DFS �ݹ����Ǵ��� i ���� i+1
//// ���� i ��һ�����ֿ������޴�ʹ��
//// ���� i+1��һ������ֻ��ʹ��һ��
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
//     * @param num: Given the candidate numbers
//     * @param target: Given the target number
//     * @return: All the combinations that sum to target
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
//			DFS( candidates, vecRet, vecTemp, i+1, target - candidates[i] );
//			vecTemp.pop_back();
//			int nLast = i;
//			while( i<candidates.size() && candidates[i] == candidates[nLast] )
//				i++;
//		}
//	}
//
//    vector<vector<int>> combinationSum2(vector<int> &num, int target) {
//        // write your code here
//		vector<vector<int>> vecRet;
//		if( num.size() == 0 )
//			return vecRet;
//		sort( num.begin(), num.end() );
//		vector<int> vecTemp;
//		DFS( num, vecRet, vecTemp, 0, target);
//		return vecRet;
//    }
//};
//
//int main(){
//
//	int arr[] = {10,1,6,7,2,1,5};
//	int nTarget = 8;
//
//	Solution s;
//	s.combinationSum2( vector<int>( begin(arr), end(arr)), nTarget );
//
//	return 0;
//}