//// �����������ʹ��˫ָ��ķ�ʽ
//// ��Ϊһ�� S[I]+S[J] > S[K]
//// ��ôI��J֮������� + S[J] ������K
//// ��������������ʽ���ʱ�临�Ӷ�
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param S: A list of integers
//     * @return: An integer
//     */
//    int triangleCount(vector<int> &S) {
//        // write your code here
//		int nCount = 0;
//		sort( S.begin(), S.end() );
//		for( int k=S.size()-1; k>=2; k-- ){
//			int nMax = S[k];
//			int i = 0; 
//			int j = k-1;
//			while( i < j ){
//				if( S[i] + S[j] > nMax ){
//					nCount += ( j - i );
//					j--;
//				} else {
//					i++;
//				}
//			}
//		}
//		return nCount;
//    }
//};
//
//int main(){
//
//	int arr[] = {3,4,6,7};
//	vector<int> vecNums( begin(arr), end(arr) );
//
//	Solution s;
//	s.triangleCount( vecNums );
//
//	return 0;
//}