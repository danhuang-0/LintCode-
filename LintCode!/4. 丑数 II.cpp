//// ����ֻ���ɳ�����������
//// ����ֻҪ��¼�Ų����ĳ����ͺ���
//// ÿ��ȡ����С��һ��
//// ���Ұ��������235����ȫ�ӽ�ȥ
//// ��Ҫע�������ʹ��long long����Ȼ�м�ֵ������Խ�����������
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