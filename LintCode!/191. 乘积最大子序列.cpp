//// �������ݹ��ɱȽϺ�����������Ϊ������0��Ƚ��鷳
//// ����ʹ��DP���в���
//// ά���������� ����max[i]������a[i]Ϊ��β�Ĵ������ֵ
//// max[i] = max( a[i], max[i-1]*a[i], min[i-1]*a[i] )
//// min[i] = min( a[i], max[i-1]*a[i], min[i-1]*a[i] )
//// ���ű��������������ֵ����
//
//#include <iostream>
//#include <vector>
// 
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: An array of integers
//     * @return: An integer
//     */
//	inline int max( int a, int b, int c ){
//		a = a>b ? a : b;
//		a = a>c ? a : c;
//		return a;
//	}
//	inline int min( int a, int b, int c ){
//		a = a<b ? a : b;
//		a = a<c ? a : c;
//		return a;
//	}
//    int maxProduct(vector<int> &nums) {
//        // write your code here
//
//		int nSize = nums.size();
//		if( nSize<=0 )
//			return 0;
//		vector<int> vecMax( nSize );
//		vector<int> vecMin( nSize );
//		
//		int nMax = vecMax[0] = vecMin[0] = nums[0];
//
//		for( int i=1; i<nSize; i++ ){
//			vecMax[i] = max( nums[i],
//							 vecMax[i-1]*nums[i],
//							 vecMin[i-1]*nums[i]);
//			vecMin[i] = min( nums[i],
//							 vecMax[i-1]*nums[i],
//							 vecMin[i-1]*nums[i]);
//			if( vecMax[i] > nMax ){
//				nMax = vecMax[i];
//			}
//		}
//		return nMax;
//    }
//};