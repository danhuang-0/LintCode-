//// 使用固定 256 个空间进行计数就好了
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param s: The first string
//     * @param t: The second string
//     * @return: true or false
//     */
//    bool anagram(string &s, string &t) {
//        // write your code here
//		vector<int> vecCountS ( 256, 0 );
//		vector<int> vecCountT ( 256, 0 );
//		
//		for( auto ch : s )
//			vecCountS[ ch ]++;
//		for( auto ch : t )
//			vecCountT[ ch ]++;
//
//		bool bRet = true;
//		for( int i=0; i<vecCountS.size(); i++ ){
//			if( vecCountS[i] != vecCountT[i] ){
//				bRet = false;
//				break;
//			}
//		}
//		return bRet;
//    }
//};
//
//int main(){
//
//	return 0;
//}