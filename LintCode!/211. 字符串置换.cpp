//// 只要对每个字母进行计数就好了
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: a string
//     * @param B: a string
//     * @return: a boolean
//     */
//    bool Permutation(string &A, string &B) {
//        // write your code here
//		if( A.size() != B.size() )
//			return false;
//		vector<int> vecCountA( 256,0 );
//		vector<int> vecCountB( 256,0 );
//		for( auto ch : A )
//			vecCountA[ ch ]++;
//		for( auto ch : B )
//			vecCountB[ ch ]++;
//		bool bRet = true;
//		for( int i=0; i<256; i++ ){
//			if( vecCountA[i] != vecCountB[i] ){
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
//}