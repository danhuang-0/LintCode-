//// ������������в��
//// a ��������� b���������� b ����������
//// ����������Դ�ǰ��ѡ����ļ��ϣ��ѵ�ǰ���ּӵ�����Ϳ�����
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
//     * @param nums: a set of distinct positive integers
//     * @return: the largest subset 
//     */
//    vector<int> largestDivisibleSubset(vector<int> &nums) {
//        // write your code here
//		if( nums.size() <= 1 )
//			return nums;
//		sort( nums.begin(), nums.end() );
//		vector<int> *vecRet = nullptr;
//		vector<vector<int>> vecDP( nums.size() );
//		for( int i=0; i<nums.size(); i++ ){
//			for( int j=i-1; j>=0; j-- ){
//				if( nums[i] % nums[j] == 0 ){
//					if( vecDP[j].size() + 1 > vecDP[i].size() ){
//						vecDP[i] = vecDP[j];
//					}
//				}
//			}
//			vecDP[i].push_back(nums[i]);
//			if( !vecRet || vecDP[i].size() > vecRet->size() )
//				vecRet = &vecDP[i];
//		}
//		return *vecRet;
//    }
//};
//
//int main(){
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	vector<int> vecNums( begin(arr), end(arr) );
//
//	Solution s;
//	s.largestDivisibleSubset( vecNums );
//}