//// 动态维护最大长度，长度等于最大长度的字符串添加到数组中
//// 出现长度大于最长长度的字符串，清空数组并持续维护
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param dictionary: an array of strings
//     * @return: an arraylist of strings
//     */
//    vector<string> longestWords(vector<string> &dictionary) {
//        // write your code here
//		int nMaxLength = 0;
//		vector<string> vecRet;
//		for( auto str : dictionary ){
//			if( str.size() == nMaxLength ){
//				vecRet.push_back( str );
//			} else if ( str.size() > nMaxLength ){
//				nMaxLength = str.size();
//				vecRet = vector<string>(1, str);
//			}
//		}
//		return vecRet;
//    }
//};
//
//int main(){
//
//	//string arrStrs[] = {
//	//	"dog",
//	//	"google",
//	//	"facebook",
//	//	"internationalization",
//	//	"blabla"};
//	string arrStrs[] = {
//		"like",
//		"love",
//		"hate",
//		"yes" };
//
//	vector<string> vecStrs( begin(arrStrs), end(arrStrs) );
//
//	Solution s;
//	s.longestWords( vecStrs );
//
//	return 0;
//}