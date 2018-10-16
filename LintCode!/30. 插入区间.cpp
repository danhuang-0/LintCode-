//// 无脑插入，之后调用156合并区间的做法
//// 只打败了0.2%的提交。。。仍需改进
//// 更好的解法是弄一个新的数组操作
//// 参考 http://www.cnblogs.com/springfor/p/3872333.html
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
//     * @param intervals: Sorted interval list.
//     * @param newInterval: new interval.
//     * @return: A new interval list.
//     */
//    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
//        // write your code here
//		intervals.push_back( newInterval );
//		sort( intervals.begin(), intervals.end(), compare );
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
//    }
//};