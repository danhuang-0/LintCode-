//// ʹ�ÿ��� partition ��˼��
//// �����ݰ�ĳһ��ֵ���з�Ƭ����ߴ��ֱ�С
//// ֱ��ĳһ�Σ���� index Ϊָ��ֵΪֹ
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
//     * @return: The second max number in the array.
//     */
//
//	int Partition( vector<int> &nums, int nLeft, int nRight ){
//		if( nLeft == nRight )
//			return nLeft;
//		if( nLeft > nRight )
//			return -1;
//		int nLoc = nLeft;
//		swap( nums[nLeft], nums[nRight] );
//		for( int i=nLeft; i<nRight; i++ ){
//			if( nums[i] > nums[nRight] )
//				swap( nums[i], nums[nLoc++] );
//		}
//		swap( nums[nRight], nums[nLoc] );
//		return nLoc;
//	}
//    int secondMax(vector<int> &nums) {
//        // write your code here
//		int nLeft = 0;
//		int nRight = nums.size() - 1;
//		int nLoc = Partition( nums, nLeft, nRight );
//		while( nLoc != 1 ){
//			if( nLoc < 1 )
//				nLoc = Partition( nums, nLoc + 1, nRight );
//			else
//				nLoc = Partition( nums, nLeft, nLoc - 1 );
//		}
// 		return nums[1];
//    }
//};