//// ���ö����Ƶ�����
//// һ������ λ�� �������-1 ��ȥ�����������һ�� 1
//// ͳ�Ƽ���Ĵ�������
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param num: An integer
//     * @return: An integer
//     */
//    int countOnes(int num) {
//        // write your code here
//		int nRet = 0;
//		while( num != 0 ){
//			nRet++;
//			num = ( num &(num-1) );
//		}
//		return nRet;
//    }
//};
//
//int main(){
//	Solution s;
//	s.countOnes(100);
//	s.countOnes(-1);
//}