//// ��51. ��һ�������ж����������෴
//// 51 �����ҵ���һ�������
//// ���������ҵ���һ��˳���
//// 51 �����ҵ���һ������������С��
//// ���������ҵ���һ����˳��������
//// ������ͬ����ת���������
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
//     * @return: A list of integers that's previous permuation
//     */
//    vector<int> previousPermuation(vector<int> &nums) {
//        // write your code here
//		int index;
//		for( index = nums.size()-2; index >= 0; index-- ){
//			if( nums[index+1] > nums[index] )
//				break;
//		}
//		// û�ҵ�
//		if( index == -1 ){
//			reverse( nums.begin(), nums.end() );
//		} else {
//			for( int index2 = nums.size()-1; ; index2-- ){
//				if( nums[index2] > nums[index] ){
//					swap( nums[index2], nums[index]);
//					int nBegin = index + 1;
//					for( int i=nBegin; i<(nBegin+nums.size())/2; i++ ){
//						swap( nums[i], nums[nums.size()-1-i+nBegin]);
//					}
//					break;
//				}
//			}	
//		}
//		return nums;
//    }
//};
//
//int main (){
//	
//	//int arr[] = {1,3,2,3};
//	int arr[] = {4,3,2,1};
//	vector<int> nums( begin(arr), end(arr));
//	Solution s;
//	s.previousPermuation( nums );
//
//	return 0;
//}