//// 每次都对字符串进行排序
//// 之后哈希计数
//// 将数量大于一的输出就好了
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param strs: A list of strings
//     * @return: A list of strings
//     */
//    vector<string> anagrams(vector<string> &strs) {
//         write your code here
//		vector<string> vecRet;
//		unordered_map<string, int > mapCount;
//		for( auto str : strs ){
//			sort( str.begin(), str.end() );
//			mapCount[str]++;
//		}
//		for( auto str : strs ){
//			string strTemp = str;
//			sort( strTemp.begin(), strTemp.end() );
//			if( mapCount[strTemp] > 1 )
//				vecRet.push_back( str );
//		}
//		return vecRet;
//    }
//};
//
//int main (){
//
//	string arr[] = {"lint","intl","inlt","code"};
//	vector<string> vecStrs( begin(arr), end(arr) );
//	Solution s;
//	s.anagrams( vecStrs );
//	return 0;
//}