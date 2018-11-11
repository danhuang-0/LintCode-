//// 利用桶排序的思想
//// 直接一遍遍历把数字放到该放的位置
//// 例如把 1 放到 A[0]
//// 最后只要遍历一遍，找到第一个位置不对的数字就好了
//// 题本身很简单，值得注意的地方比较多
//// 比如数字可能会有重复的造成死循环，可能有超过数字范围的大数字
//// 都直接跳过去就好了
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
