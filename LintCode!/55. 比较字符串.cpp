//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: A string
//     * @param B: A string
//     * @return: if string A contains all of the characters in B return true else return false
//     */
//    bool compareStrings(string &A, string &B) {
//        // write your code here
//		
//		if( B.size() == 0 )
//			return true;
//		if( A.size() == 0 )
//			return false;
//		vector<int> vec(26, 0);
//		for( auto ite=A.begin(); ite!=A.end(); ite++ ){
//			vec[*ite-'A']++;
//		}
//		bool bRet = true;
//		for( auto ite=B.begin(); ite!=B.end(); ite++ ){
//			if( vec[*ite-'A'] == 0 ){
//				bRet = false;
//				break;
//			}
//			vec[*ite-'A']--;
//		}
//		return bRet;
//    }
//};