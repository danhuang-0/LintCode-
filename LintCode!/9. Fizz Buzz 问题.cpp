//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: An integer
//     * @return: A list of strings.
//     */
//    vector<string> fizzBuzz(int n) {
//        // write your code here
//		vector<string> vctRet(n);
//		char szTemp[20];
//		for( int i=1; i<=n; ++i )
//		{
//			if( i%15==0 )
//			{
//				sprintf(szTemp, "fizz buzz");
//			}
//			else if( i%5==0 )
//			{
//				sprintf(szTemp, "buzz");
//			}
//			else if( i%3==0 )
//			{
//				sprintf(szTemp, "fizz");
//			}
//			else
//			{
//				sprintf(szTemp, "%d", i);
//			}
//			vctRet[i-1].assign(szTemp);
//		}
//		return vctRet;
//    }
//};
//
//int main()
//{
//	int n;
//	cin>>n;
//	Solution s;
//	vector<string> vctStr = s.fizzBuzz(n);
//	for( int i=0; i<n; i++ )
//		cout<<vctStr[i]<<endl;
//	system("pause");
//	return 0;
//}