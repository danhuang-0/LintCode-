//// 只需要判断一个矩形的四个点是否在另一个矩形里即可
//// 这种判断不合理 有何能出现十字星。。。。
//
//#include <iostream>
//#include <vector>
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
//
//class Solution {
//public:
//    /**
//     * @param l1: top-left coordinate of first rectangle
//     * @param r1: bottom-right coordinate of first rectangle
//     * @param l2: top-left coordinate of second rectangle
//     * @param r2: bottom-right coordinate of second rectangle
//     * @return: true if they are overlap or false
//     */
//    bool doOverlap(Point &l1, Point &r1, Point &l2, Point &r2) {
//        // write your code here
//		vector<Point> vecCheck1(4);
//		vecCheck1[0] = Point(l1.x, l1.y);
//		vecCheck1[1] = Point(l1.x, r1.y);
//		vecCheck1[2] = Point(r1.x, l1.y);
//		vecCheck1[3] = Point(r1.x, r1.y);
//		for( auto check : vecCheck1 ){
//			if( check.x >= l2.x &&
//				check.x <= r2.x &&
//				check.y >= r2.y &&
//				check.y <= l2.y )
//				return true;
//		}
//
//		vector<Point> vecCheck2(4);
//		vecCheck2[0] = Point(l2.x, l2.y);
//		vecCheck2[1] = Point(l2.x, r2.y);
//		vecCheck2[2] = Point(r2.x, l2.y);
//		vecCheck2[3] = Point(r2.x, r2.y);
//		for( auto check : vecCheck2 )
//			if( check.x >= l1.x &&
//				check.x <= r1.x &&
//				check.y >= r1.y &&
//				check.y <= l1.y)
//				return true;
//		return false;
//    }
//};