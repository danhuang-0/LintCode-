//// 题干推荐使用线段树
//// 这里使用了前缀和的做法
//// 使用O(n) 的时间构造前缀和数组
//// 每次查询速度都是 O(1) 的
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Interval {
//public:
//    int start, end;
//    Interval(int start, int end) {
//        this->start = start;
//        this->end = end;
//    }
//};
//
//class Solution {
//public:
//    /**
//     * @param A: An integer list
//     * @param queries: An query list
//     * @return: The result list
//     */
//    vector<long long> intervalSum(vector<int> &A, vector<Interval> &queries) {
//        // write your code here
//		vector<long long> vecRet;
//		if( A.size() == 0 )
//			return vecRet;
//		vector<long long> preSum( A.size() + 1 );
//		preSum[0] = 0;
//		for( int i=0; i<A.size(); i++ ){
//			preSum[i+1] = preSum[i] + A[i];
//		}
//		for( auto q : queries ){
//			long long nSum = preSum[ q.end + 1 ] - preSum[ q.start ];
//			vecRet.push_back( nSum );
//		}
//		return vecRet;
//    }
//};
//
//int main(){
//
//	int arr[] = {1,2,7,8,5};
//	vector<int> vecNums( begin(arr), end(arr) );
//	vector<Interval> vecInt;
//	vecInt.push_back( Interval(0,4) );
//	vecInt.push_back( Interval(2,4) );
//
//	Solution s;
//	s.intervalSum( vecNums, vecInt );
//	return 0;
//}