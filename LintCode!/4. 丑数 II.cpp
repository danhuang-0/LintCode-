//// 丑数只会由丑数产生出来
//// 所以只要记录着产生的丑数就好了
//// 每次取出最小的一个
//// 并且把这个数的235倍数全加进去
//// 需要注意过程中使用long long，不然中间值会数组越界产生出负数
//
//#include <iostream>
//#include <set>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: An integer
//     * @return: the nth prime number as description.
//     */
//    int nthUglyNumber(int n) {
//        // write your code here
//		set<long long> setValues;
//		setValues.insert(1);
//		long long nBegin;
//		for( int i=0; i<n-1; i++ ){
//			nBegin = *( setValues.begin() );
//			setValues.erase( setValues.begin() );
//			setValues.insert( 2 * nBegin );
//			setValues.insert( 3 * nBegin );
//			setValues.insert( 5 * nBegin );
//		}
//		return *( setValues.begin() ); 
//    }
//};
//
//int main(){
//
//	Solution s;
//	s.nthUglyNumber(1665);
//
//	return 0;
//}