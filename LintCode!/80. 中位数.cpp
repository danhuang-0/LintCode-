//// ���ÿ��ŵ� Partition ʵ��top K��˼·
//// O(n) ��ʱ�临�Ӷ��ҵ���K�����
//// ���������ҵ��� n/2 �����
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: A list of integers
//     * @return: An integer denotes the middle number of the array
//     */
//	int Partition( vector<int> &nums, int left, int right ){
//		swap( nums[left], nums[right] );
//		int index = left;
//		for( int i=left; i<right; i++ ){
//			if( nums[i] < nums[right] ){
//				swap( nums[index], nums[i] );
//				index ++;
//			}
//		}
//		swap( nums[index], nums[right] );
//		return index;
//	}
//    int median(vector<int> &nums) {
//        // write your code here
//		int nMid = ( nums.size() - 1 ) / 2 ;
//		int nLeft = 0;
//		int nRight = nums.size() - 1;
//		int nLoc = Partition( nums, nLeft, nRight );
//		while( nLoc != nMid ){
//			if( nMid > nLoc ){
//				nLeft = nLoc + 1;
//			} else {
//				nRight = nLoc - 1;
//			}
//			nLoc = Partition( nums, nLeft, nRight );
//		}
//		return nums[nMid];
//	}
//};
//
//int main (){
//
//	int arr[] = {2,3,1,1,1,1,1,4,5,9};
//	vector<int> vecNums( begin(arr), end(arr) );
//	Solution s;
//	s.median( vecNums );
//	return 0;
//}