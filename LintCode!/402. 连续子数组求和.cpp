//// ֻҪһ�α����ͺ���
//// ������Ҫ�����±꣬������ȫ�Ǹ��������������Ҫ���⿼��
//// ֱ���ڼ���·�ϾͿ����ж��ˡ�
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param A: An integer array
//     * @return: A list of integers includes the index of the first number and the index of the last number
//     */
//    vector<int> continuousSubarraySum(vector<int> &A) {
//        // write your code here
//		vector<int> vecRet ( 2, 0 );
//		int nMax = INT_MIN;
//		int nSum = 0;
//		int nNowStart = 0;
//		int nNowEnd = 0;
//		for( int i=0; i<A.size(); i++ ){
//			nSum += A[i];
//			nNowEnd = i;
//			if( nSum > nMax ){
//				vecRet[0] = nNowStart;
//				vecRet[1] = nNowEnd;
//				nMax = nSum;
//			}
//			if( nSum < 0 ){
//				nSum = 0;
//				nNowStart = i+1;
//			}
//		}
//		return vecRet;
//    }
//};
//
//int main (){
//
//	//int arr[] = {-3, 1, 3, -3, 4};
//	int arr[] = {-5,-2,-3,-1,-4 };
//	//int arr[] = {-1};
//	
//	Solution s;
//	s.continuousSubarraySum( vector<int>( begin(arr), end(arr) ));
//
//	return 0;
//}