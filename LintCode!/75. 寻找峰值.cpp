//// ������һ���ص� ��ֵ������������Ҳ����½�
//// ʹ�����ƶ��ֲ��ҵķ�ʽ
//// mid �����ұ�ȷ�������������½���
//// ���һ�� left��right�˳�ʱ��left��right�о���һ���Ƿ�ֵ��
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: An integers array.
//     * @return: return any of peek positions.
//     */
//    int findPeak(vector<int> &A) {
//        // write your code here
//
//		int nSize = A.size();
//		int nLeft = 0;
//		int nRight = nSize - 1;
//		int nMid = ( nLeft + nRight ) / 2;
//		while( nLeft <= nRight ){
//			// �Ҳ�Ϊ�������У�����
//			if( nMid+1 < nSize && A[nMid] > A[nMid+1]){
//				nRight = nMid - 1;
//			} else {
//				nLeft = nMid + 1;
//			}
//			nMid = ( nLeft + nRight ) / 2;
//		}
//		return A[nLeft] > A[nRight] ? nLeft : nRight;
//    }
//};
//
//int main (){
//
//	int arr[] = {1,2,1,2,3,1} ;
//	Solution s;
//	cout<<s.findPeak( vector<int>( begin(arr), end(arr)));
//
//	return 0;
//}