//// ������������ʾ��
//// ������ǿ������ͻ�һֱѭ��
//// һֱѭ���ͻ�����ظ�����
//// ����ֻҪ��¼��·�������֣������ظ����ֵľͿ����˳�ѭ����
//
//#include <iostream>
//#include <unordered_set>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: An integer
//     * @return: true if this is a happy number or false
//     */
//    bool isHappy(int n) {
//        // write your code here
//		unordered_set<int> setNums;
//		bool bRet = false;
//		int nTemp;
//		int nDigit;
//		while( 1 ){
//			nTemp = 0;
//			while( n ){
//				nDigit = n % 10;
//				n /= 10;
//				nTemp += nDigit * nDigit;
//			}
//			if( nTemp == 1 ){
//				bRet = true;
//				break;
//			} else if ( setNums.find(nTemp) != setNums.end() ){
//				break;
//			} else {
//				setNums.insert( nTemp );
//				n = nTemp;
//			}
//		}
//		return bRet;
//    }
//};
//
//int main(){
//
//	Solution s;
//	s.isHappy( 18 );
//	s.isHappy( 19 );
//	return 0;
//}