//// 按照start大小排序
//// 如果一个段结束比下一个段的开始要大，就把这两个段合并
//// 并且将后面的段翻转，来做删除操作
//// 如果一个段的开始结束是一样的，并且需要判断是不是被合并的
//// 只要判断这个段上一个有效段的结尾是不是比这个段的值大就好了
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Interval {
//public:
//    int start, end;
//	Interval(){}
//    Interval(int start, int end) {
//        this->start = start;
//        this->end = end;
//    }
//};
//
//bool compare( Interval &a, Interval &b ){
//	if( a.start != b.start )
//		return a.start < b.start;
//	return a.end < b.end;
//}
//
//class Solution {
//public:
//    /**
//     * @param intervals: interval list.
//     * @return: A new interval list.
//     */
//    vector<Interval> merge(vector<Interval> &intervals) {
//        // write your code here
//		if( intervals.size()==0 )
//			return vector<Interval>();
//		sort( intervals.begin(), intervals.end(), compare );
//
//		int nStart = 0;
//		int nEnd = 1;
//		while( nEnd < intervals.size() ){
//			if( intervals[nStart].end >= intervals[nEnd].start ){
//				intervals[nStart].end =  max(intervals[nEnd].end, intervals[nStart].end);
//				swap( intervals[nEnd].start, intervals[nEnd].end);
//				nEnd ++;
//			} else {
//				nStart = nEnd;
//				nEnd ++;
//			}
//		}
//		nStart = nEnd = 1 ;
//		while( nEnd < intervals.size() ){
//			if( intervals[nEnd].end < intervals[nEnd].start ){
//				nEnd ++;
//			} else if ( intervals[nEnd].end == intervals[nEnd].start &&
//				intervals[nStart-1].end >= intervals[nEnd].start ){
//				nEnd ++;
//			}else {
//				swap( intervals[nStart], intervals[nEnd] );
//				nStart++;
//				nEnd ++;
//			}
//		}
//		intervals.resize( nStart );
//		return intervals;
//	}
//};
//
//int main (){
//	vector<Interval> vec;
//	vec.push_back( Interval(1,3) );
//	vec.push_back( Interval(2,2) );
//	vec.push_back( Interval(3,3) );
//	vec.push_back( Interval(1,3) );
//	vec.push_back( Interval(5,7) );
//	vec.push_back( Interval(2,2) );
//	vec.push_back( Interval(4,6) );
//
//
//	Solution s;
//	s.merge( vec );
//	return 0;
//}
