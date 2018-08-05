//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param n: A long integer
//     * @return: An integer, denote the number of trailing zeros in n!
//     */
//    long long trailingZeros(long long n) {
//        // write your code here, try to do it without arithmetic operators.
//		long long llRet = 0;
//		long long llTemp;
//		while( ( llTemp = n/5 ) != 0 )
//		{
//			llRet += llTemp ;
//			n = llTemp;
//		}
//		return llRet;
//    }
//};
//
//int main()
//{
//	Solution s;
//	int a, b;
//	cin>>a;
//	cout<<s.trailingZeros(a)<<endl;
//	system("pause");
//	return 0;
//}