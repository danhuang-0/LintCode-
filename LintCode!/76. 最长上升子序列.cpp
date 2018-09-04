//// DP������
//// dp[i] ��ʾ�� i ��β������������г���
//// �������i����ĸ��ʱ�򣬱���ǰ�����е�ֵ
//// ��ʼ dp[i] = 1
//// ����ҵ� x<i �� nums[x]<nums[i] �� dp[i] = max( dp[i], dp[x] + 1)
//
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: An integer array
//     * @return: The length of LIS (longest increasing subsequence)
//     */
//    int longestIncreasingSubsequence(vector<int> &nums) {
//        // write your code here
//
//		int nSize = nums.size();
//		if( nSize == 0 )
//			return 0;
//		vector<int> vecDP( nSize, 1 );
//		int nMax = 0;
//		for( int i=0; i<nSize; i++ ){
//			for( int j=0; j<i; j++ ){
//				if( nums[i] > nums[j] )
//					vecDP[i] = max( vecDP[i], vecDP[j]+1);
//			}
//			if( vecDP[i] > nMax )
//				nMax = vecDP[i];
//		}
//		return nMax;
//    }
//};
//
//int main(){
//
//	int arr[] = {88,4,24,82,86,1,56,74,71,9,8,18,26,53,77,87,60,27,69,17,76,23,67,14,98,13,10,83,20,43,39,29,92,31,0,30,90,70,37,59};
//
//	Solution s;
//	cout<<s.longestIncreasingSubsequence( vector<int>(begin(arr), end(arr)));
//
//	return 0;
//}