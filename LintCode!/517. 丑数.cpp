//// ��Ȼֻ������ 2,3,5
//// �Ǿ�һֱ�����׾ͺ���
//// Ҫ����ע�� 0 ���ܵ�����ѭ������Ҫ��ǰ�޳�
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param num: An integer
//     * @return: true if num is an ugly number or false
//     */
//    bool isUgly(int num) {
//        // write your code here
//		if( num == 0 )
//			return false;
//		while( num != 1 ){
//			if( num % 2 == 0 )
//				num /= 2;
//			else if ( num % 3 == 0 )
//				num /= 3;
//			else if ( num % 5 == 0 )
//				num /= 5;
//			else
//				break;
//		}
//		return num == 1;
//    }
//};