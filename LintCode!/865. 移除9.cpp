//// ֻҪ�����������ת���� 9 ����
//// ��ǰ��������ǵ� n �������� 9 ������
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: an integer
//     * @return: return an long integer
//     */
//    long long newInteger(int n) {
//        // write your code here
//
//		long long llRet = 0;
//		int nDigit = 1;
//		while( n != 0 ){
//			llRet += n%9 * nDigit;
//			n /= 9;
//			nDigit *= 10;
//			
//		}
//		return llRet;
//    }
//};
//
//int main(){
//
//	int n;
//	cin >> n;
//	Solution s;
//
//	cout << s.newInteger( n );
//	return 0;
//}