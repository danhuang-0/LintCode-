///*
// * �����������ԣ���ͬΪ0����ͬΪ1
// * ��ͷ��β���һ�ߣ�������ͬ������ȫ����������
// * ֻʣ��һ���䵥������ 
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
//    int singleNumber(vector<int> &A) {
//        // write your code here
//
//		int nRet = 0;
//		for( auto ite = A.begin(); ite!=A.end(); ite++ ){
//			nRet ^= *ite;
//		}
//		return nRet;
//    }
//};
//
//int main(){
//
//	int arr[] = {1,2,2,1,3,4,3};
//	vector<int> vec( begin(arr), end(arr));
//	
//	Solution s;
//	cout<<s.singleNumber(vec)<<endl;
//
//	system("pause");
//	return 0;
//}