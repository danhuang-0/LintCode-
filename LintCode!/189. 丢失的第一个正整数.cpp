//// ����Ͱ�����˼��
//// ֱ��һ����������ַŵ��÷ŵ�λ��
//// ����� 1 �ŵ� A[0]
//// ���ֻҪ����һ�飬�ҵ���һ��λ�ò��Ե����־ͺ���
//// �Ȿ��ܼ򵥣�ֵ��ע��ĵط��Ƚ϶�
//// �������ֿ��ܻ����ظ��������ѭ���������г������ַ�Χ�Ĵ�����
//// ��ֱ������ȥ�ͺ���
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: An array of integers
//     * @return: An integer
//     */
//    int firstMissingPositive(vector<int> &A) {
//        // write your code here
//		for( int i=0; i<A.size(); ){
//			if( A[i] <= 0 || A[i] == i+1 ){
//				i++;
//				continue;
//			}
//			if( A[i]>A.size() || A[A[i]-1] == A[i] ){
//				i++;
//				continue;
//			}
//			swap( A[i], A[A[i]-1] );
//		}
//		int nRet = A.size() + 1;
//		for( int i=0; i<A.size(); i++){
//			if( A[i] != i+1 ){
//				nRet = i+1;
//				break;
//			}
//		}
//		return nRet;
//    }
//};
//
//int main(){
//	//int arr[] = {1,2,0};
//	//int arr[] = {3,4,-1,1};
//	//int arr[] = {1,2,3,4};
//	//int arr[] = {1,1};
//	
//	int arr[] = {-1,4,2,1,9,10};
//	Solution s;
//	s.firstMissingPositive( vector<int>( begin(arr), end(arr) ));
//	
//	return 0;
//}
//
