//// 可以在排序后，使用双指针的方式
//// 因为一旦 S[I]+S[J] > S[K]
//// 那么I和J之间的数字 + S[J] 都大于K
//// 可以利用这个性质降低时间复杂度
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