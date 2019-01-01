//// 计算距离不需要开方，浮点计算浪费性能还容易出问题
//// 距离直接用 ll 表示就好
//// 直接利用 sort 提供的自定义 compare 功能就能完成排序
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//struct Point {
//    int x;
//    int y;
//    Point() : x(0), y(0) {}
//    Point(int a, int b) : x(a), y(b) {}
//};
//
//class Solution {
//public:
//    /**
//     * @param points: a list of points
//     * @param origin: a point
//     * @param k: An integer
//     * @return: the k closest points
//     */
//	struct Distance{
//		long long llDistance;
//		Point point;
//	};
//	static int compare( Distance &a, Distance &b ){
//		if( a.llDistance != b.llDistance )
//			return a.llDistance < b.llDistance;
//		if( a.point.x != b.point.x )
//			return a.point.x < b.point.x;
//		return a.point.y < b.point.y;
//	}
//    vector<Point> kClosest(vector<Point> &points, Point &origin, int k) {
//        // write your code here
//		vector<Distance> vecDis( points.size() );
//		for( int i=0; i<points.size(); i++ ){
//			vecDis[i].point = points[i];
//			int x = points[i].x - origin.x;
//			int y = points[i].y - origin.y;
//			vecDis[i].llDistance = x * x + y * y;
//		}
//		sort(vecDis.begin(), vecDis.end(), Solution::compare);
//		vector<Point> vecRet;
//		for( int i=0; i<k && i<vecDis.size(); i++ )
//			vecRet.push_back( vecDis[i].point );
//		return vecRet;
//    }
//};
//
//int main(){
//	vector<Point> vecPoints;
//	vecPoints.push_back( Point(-4,-4) );
//	vecPoints.push_back( Point(-8,-582) );
//	vecPoints.push_back( Point(-3,3) );
//	vecPoints.push_back( Point(-9,-651) );
//	vecPoints.push_back( Point(9,591) );
//	Solution s;
//	s.kClosest(vecPoints, Point(3,9), 4);
//}