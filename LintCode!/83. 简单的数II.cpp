///* 
// * ����һ��һ��������λ������˼��
// * ����˼����λ������1����
// * �Լ�ʵ���������Ĳ�������һ��λ��������1��ʱ������
// * ���ʣ�µľ���ֻ��һ��������
// */
//
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: An integer array
//     * @return: An integer
//     */
//    int singleNumberII(vector<int> &A) {
//        // write your code here
//		int digit[32]={0};
//		for( auto ite=A.begin(); ite!=A.end(); ite++){
//			for( int i=0; i<32; i++ ){
//				digit[i] = ( digit[i] + ((*ite >> i) & 1) ) % 3;
//			}
//		}
//		int nRet = 0;
//		for( int i=0; i<32; i++ ){
//			nRet += digit[i]<<i;
//		}
//		return nRet;
//    }
//};
//
//int main (){
//
//	int arr[] = { 1,2,3,1,1,3,3};
//	vector<int> vec( begin(arr), end(arr));
//	Solution s;
//	cout<<s.singleNumberII(vec)<<endl;
//	system("pause");
//	return 0;
//}