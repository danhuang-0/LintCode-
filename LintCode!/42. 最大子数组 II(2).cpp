//// ά��һ����������
//// һ���Ǵ����ҵĵ���ǰ�����������������
//// һ���Ǵ��ҵ���ĵ���ǰ�����������������
//// ��ÿһ���ָ����������ͼ���
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param nums: A list of integers
//     * @return: An integer denotes the sum of max two non-overlapping subarrays
//     */
//    int maxTwoSubArrays(vector<int> &nums) {
//        // write your code here
//		vector<int> maxSumLeft( nums.size() );
//		vector<int> maxSumRight( nums.size() );
//
//		bool bAllIsMinus = true;
//		int nMax = INT_MIN;
//		int nSum = 0;
//		for( int i=0; i<nums.size(); i++ ){
//			if( nums[i] > 0 )
//				bAllIsMinus = false;
//			if( bAllIsMinus ){
//				if( nums[i] > nMax )
//					nMax = nums[i];
//				maxSumLeft[i] = nMax;
//				continue;
//			}
//			if( nSum < 0 )
//				nSum = 0;
//			nSum += nums[i];
//			if( nSum > nMax )
//				nMax = nSum;
//			maxSumLeft[i] = nMax;
//		}
//		bAllIsMinus = true;
//		nMax = INT_MIN;
//		nSum = 0;
//		for( int i=nums.size()-1; i>=0; i-- ){
//			if( nums[i] > 0 )
//				bAllIsMinus = false;
//			if( bAllIsMinus ){
//				if( nums[i] > nMax )
//					nMax = nums[i];
//				maxSumRight[i] = nMax;
//				continue;
//			}
//			if( nSum < 0 )
//				nSum = 0;
//			nSum += nums[i];
//			if( nSum > nMax )
//				nMax = nSum;
//			maxSumRight[i] = nMax;
//		}
//		nMax = INT_MIN;
//		for( int i=0; i<nums.size()-1; i++ ){
//			int nTemp = maxSumLeft[i]+maxSumRight[i+1];
//			if( nTemp > nMax )
//				nMax = nTemp;
//		}
//		return nMax;
//    }
//};