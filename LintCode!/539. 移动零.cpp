//// ������ɨһ�߼���
//// ά��һ������ͳ���ж���������
//// �������� 0 �ľ͸�����λ�ý���
//// 0 ��ֱ������
//// �Ӽ���λ�ÿ�ʼ�����ȫ�� 0 ����
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: an integer array
//     * @return: nothing
//     */
//    void moveZeroes(vector<int> &nums) {
//        // write your code here
//		int nIndex = 0;
//		for( int i=0; i<nums.size(); i++ ){
//			if( nums[i] != 0 )
//				swap( nums[i], nums[nIndex++] );
//		}
//		for( int i=nIndex; i<nums.size(); i++ )
//			nums[i] = 0;
//    }
//};
//
//int main(){
//
//	int arr[] = {0, 1, 0, 3, 12};
//	vector<int> vecNums( begin(arr), end(arr) );
//	Solution s;
//	s.moveZeroes(vecNums);
//	return 0;
//}