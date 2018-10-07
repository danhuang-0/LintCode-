//// 使用前缀和
//// 前缀和相等的两个位置中间的路过的数组和必为0
//
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: A list of integers
//     * @return: A list of integers includes the index of the first number and the index of the last number
//     */
//    vector<int> subarraySum(vector<int> &nums) {
//        // write your code here
//		if( nums.size()== 0 )
//			return vector<int>();
//		vector<int> vecSum( nums.size() );
//		vecSum[0] = nums[0];
//		for( int i=1; i<nums.size(); i++ )
//			vecSum[i] =  vecSum[i-1] + nums[i];
//		unordered_map<int, int > mapNums;
//		vector<int> vecRet;
//		for( int i=0; i<vecSum.size(); i++ ){
//			if( vecSum[i]==0 ){
//				vecRet.push_back(0);
//				vecRet.push_back(i);
//				break;
//			} else if( mapNums.find( vecSum[i] )!= mapNums.end() ){
//				vecRet.push_back( mapNums[vecSum[i]] + 1 );
//				vecRet.push_back(i);
//				break;
//			} else {
//				mapNums[vecSum[i]] = i;
//			}
//		}
//		return vecRet;
//    }
//};
//
//int main(){
//	int arr[] = {0};
//	Solution s;
//	s.subarraySum( vector<int>( begin(arr), end(arr)) );
//
//	return 0;
//}