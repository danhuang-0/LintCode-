//// ����һ���������˼·
//// ��ͷ��β�ʹ�β��ͷ���α���
//// ǰ���� 1, a0, a0*a1 .... a0*a1*...*a(n-1)
//// ������ an*...*a[1], an*...*a[2], ... a[n], 1
//// ǰ�����εĽ����˾���ȥ����ǰ���ĳ˻���
//// ������ǰ���֣���Լʱ��ռ�
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param nums: Given an integers array A
//     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
//     */
//    vector<long long> productExcludeItself(vector<int> &nums) {
//        // write your code here
//		vector<long long > vecRet( nums.size(), 1 );
//		long long nTemp = 1;
//		for( int i=0; i<nums.size()-1; i++ ){
//			nTemp *= nums[i];
//			vecRet[ i + 1 ] *= nTemp;
//		}
//		nTemp = 1;
//		for( int i=nums.size()-1; i>=1; i-- ){
//			nTemp *= nums[i];
//			vecRet[ i - 1 ] *= nTemp;
//		}
//		return vecRet;
//	}
//};
//
//int main (){
//
//	int arr[] = { 1,2,3 };
//
//	vector<int > vecNums( begin(arr), end(arr));
//
//	Solution s;
//	s.productExcludeItself( vecNums );
//	return 0;
//}