//// �ο�֮ǰ�䵥������˼·
//// �������� a �� b ֻ��һ��
//// ��ôһֱ�����ȥ����� a �� b
//// �����������ԣ�����д��Ҳ�����һ��1����a��b��һ���ĵط�
//// ������һλ�������Ϊ�����֣���������ÿ������ֻ��һ���䵥����
//// ʹ��֮ǰ���䵥�������㷨��������ˡ�
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
//     * @return: An integer array
//     */
//    vector<int> singleNumberIII(vector<int> &A) {
//        // write your code here
//
//		vector<int> vecRet;
//		int nTemp = 0;
//		for( auto num : A )
//			nTemp ^= num;
//		int nDigit = 1;
//		while( (nTemp & nDigit) == 0 ){
//			nDigit *= 2;
//		}
//		vector<int> vecNums[2];
//		for( auto num : A ){
//			if( (num & nDigit) == 0 )
//				vecNums[0].push_back( num );
//			else
//				vecNums[1].push_back( num );
//		}
//		
//		for( int i=0; i<2; i++) {
//			nTemp = 0;
//			for( auto num : vecNums[i] )
//				nTemp ^= num;
//			vecRet.push_back( nTemp );
//		}
//		return vecRet;
//    }
//};
//
//int main(){
//
//	int arr[] = {1,2,2,3,4,4,5,3};
//	vector<int> vecNums( begin(arr), end(arr) );
//	Solution s;
//	s.singleNumberIII( vecNums );
//	return 0;
//}