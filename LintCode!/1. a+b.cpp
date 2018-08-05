//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param a: An integer
//     * @param b: An integer
//     * @return: The sum of a and b 
//     */
//    int aplusb(int a, int b) {
//        // write your code here
//		int sum = 0 ;
//		int digit = 0 ;
//		do{
//			sum = a ^ b ;
//			digit = a & b;
//			a = sum;
//			b = digit << 1 ;
//		}while( 0 != digit );
//		return sum;
//	}
//};
//
//int main()
//{
//	Solution s;
//	int a, b;
//	cin>>a>>b;
//	
//	cout<<s.aplusb( a,b )<<endl;
//	
//	system("pause");
//	return 0;
//}