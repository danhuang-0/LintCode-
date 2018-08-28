///*
// * 按照异或的特性，相同为0，不同为1
// * 从头到尾异或一边，所有相同的数字全部都异或掉了
// * 只剩下一个落单的数了 
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