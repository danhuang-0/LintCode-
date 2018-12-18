//// 直接套 DFS 模板
//// 每一次递归扒掉一个字母就好了
//
//#include <iostream>
//#include <vector>
//#include <string>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param digits: A digital string
//     * @return: all posible letter combinations
//     */
//	unordered_map<char, string> m_map;
//	Solution(){
//		m_map.insert( unordered_map<int, string>::value_type('2', string("abc")));
//		m_map.insert( unordered_map<int, string>::value_type('3', string("def")));
//		m_map.insert( unordered_map<int, string>::value_type('4', string("ghi")));
//		m_map.insert( unordered_map<int, string>::value_type('5', string("jkl")));
//		m_map.insert( unordered_map<int, string>::value_type('6', string("mno")));
//		m_map.insert( unordered_map<int, string>::value_type('7', string("pqrs")));
//		m_map.insert( unordered_map<int, string>::value_type('8', string("tuv")));
//		m_map.insert( unordered_map<int, string>::value_type('9', string("wxyz")));
//	}
//
//	void DFS( vector<string> &vecRet, string &strTemp, string str ){
//		if( str.size() == 0 ){
//			vecRet.push_back( strTemp );
//			return;
//		}
//		auto s = m_map[str[0]];
//		for( auto ch : s ){
//			strTemp.push_back( ch );
//			DFS( vecRet, strTemp, str.substr(1, str.size() ));
//			strTemp.pop_back();
//		}
//	}
//    vector<string> letterCombinations(string &digits) {
//        // write your code here
//		vector<string> vecRet;
//		if( digits.size() == 0 )
//			return vecRet;
//		string strTemp;
//		DFS( vecRet, strTemp, digits);
//		return vecRet;
//    }
//};
//
//int main(){
//
//	string str("23");
//	Solution s;
//	s.letterCombinations( str );
//
//	return 0;
//}