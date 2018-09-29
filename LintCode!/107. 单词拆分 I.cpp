//// 使用DP的思想
//// DP[i] 代表前i个字母可以被完美拆分
//// DP[0] = true;
//// DP[i] 的判断方法，只需要判断从j=0 到 i-1中
//// 某一个可以被完美拆分的段，之后的子串能不能在字典中匹配就好了
//// 但是用这种思路去实现会特别的耗时，使用set进行优化
//// 同时取出最大单词长度来对生成DP[i]的过程进行剪枝
//// 剪枝利用了set的特性，采用倒叙遍历的方法。
//
//#include <iostream>
//#include <string>
//#include <set>
//#include <unordered_set>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param s: A string
//     * @param dict: A dictionary of words dict
//     * @return: A boolean
//     */
//    bool wordBreak(string &s, unordered_set<string> &dict) {
//        // write your code here
//		int nMaxLength = 0;
//		for( auto ite = dict.begin(); ite!=dict.end(); ite ++ ){
//			if( ite->size() > nMaxLength )
//				nMaxLength = ite->size();
//		}
//		set<int> DP;
//		DP.insert(0);
//		for( int i=1; i<=s.size(); i++ ){
//			for( auto ite = DP.rbegin(); ite!=DP.rend(); ite ++ ){
//				if( i - *ite > nMaxLength )
//					break;
//				string searchStr = s.substr(*ite, i-*ite);
//				if( dict.find( searchStr ) != dict.end() ){
//					DP.insert(i);
//					break;
//				}
//			}
//		}
//		return  DP.find( s.size() ) != DP.end() ;
//	}
//};
//
//int main (){
//	string str("lintcode");
//	unordered_set<string> dict;
//	dict.insert( "lint" );
//	dict.insert( "code" );
//	Solution s;
//	s.wordBreak( str, dict);
//	return 0;
//}