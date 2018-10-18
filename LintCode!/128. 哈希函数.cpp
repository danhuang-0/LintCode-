//// 无脑按照要求写就行了
//// 记得使用 long long 防止数据溢出
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param key: A string you should hash
//     * @param HASH_SIZE: An integer
//     * @return: An integer
//     */
//    int hashCode(string &key, int HASH_SIZE) {
//        // write your code here
//		long long nDigit = 1;
//		long long nRet = 0;
//		for( int i=key.size()-1; i>=0; i-- ){
//			nRet += ( key[i] * nDigit % HASH_SIZE);
//			nDigit = nDigit * 33 % HASH_SIZE;
//		}
//		return nRet % HASH_SIZE;
//    }
//};
//
//int main(){
//	string str("abcd");
//	Solution s;
//	s.hashCode( str, 100 );
//}