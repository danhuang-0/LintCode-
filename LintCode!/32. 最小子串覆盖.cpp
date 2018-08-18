///* 整体思路为两个指针，一个在前，一个在后
// * 因为不要求顺序，所以直接采用map记录每个字母的数量
// * 在前面的指针负责持续向后遍历，如果当前字母是target中的字母的话
// * 记录当前此字母出现的数量
// * 如果当前字母数量已经达标的话，把当前字母状态设为ok
// * 如果不是所有字母都OK的话，说明没有答案
// * 如果所有字母都 OK 的话，后面的指针开始向前尝试在当前front下
// * back在保持字母个数满足target的要求的情况下一直向前移动，尝试缩短字符串
// * 记录最短字符串长度的长度，和back用于构建返回字符串即可
// */
//
//#include <string>
//#include <iostream>
//#include <map>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param source : A string
//     * @param target: A string
//     * @return: A string denote the minimum window, return "" if there is no such a string
//     */
//    string minWindow(string &source , string &target) {
//        // write your code here
//		map<char, int> mapCountOfChar;
//		map<char, bool> mapIsCharOk;
//		map<char, int> mapNowCountOfChar;
//		for(auto ite=target.begin(); ite!=target.end(); ite++){
//			mapCountOfChar[*ite]++;	 
//		}
//		int nFront = 0, nBack = 0;
//		int nSize = source.size();
//		int nMinFront = 0;
//		int nMinBack = 0;
//		int nMinSize = INT_MAX;
//		bool isFind = false;
//		for( nFront; nFront<nSize; nFront++){
//			if( mapCountOfChar.find(source[nFront])!=mapCountOfChar.end() ){
//				mapNowCountOfChar[ source[nFront] ]++;
//				if( mapNowCountOfChar[source[nFront]]>=mapCountOfChar[source[nFront]] ){
//					mapIsCharOk[source[nFront]] = true;
//					// 所有字符都OK过的话，开始计算最短长度
//					if( mapIsCharOk.size()==mapCountOfChar.size() ){
//						for( nBack; ;nBack++ ){
//							if( nFront-nBack+1 < nMinSize ){
//								nMinSize = nFront - nBack + 1;
//								nMinFront = nFront;
//								nMinBack = nBack;
//								isFind = true;
//							}
//							if( mapCountOfChar.find(source[nBack])==mapCountOfChar.end() ){
//								continue;
//							}
//							if( mapNowCountOfChar[source[nBack]] > mapCountOfChar[source[nBack]] ){
//								mapNowCountOfChar[source[nBack]]--;
//							} else {
//								break;
//							}
//						}
//					}
//				}
//			}
//		}
//		if( !isFind || mapIsCharOk.size() != mapCountOfChar.size() )
//			return "";
//		string strRet(source.substr(nMinBack, nMinSize));
//		return strRet;
//	}
//};
//
//int main(){
//	string source = "ADOBECODEBANC";
//	string target = "ABC";
//	//string source = "abc";
//	//string target = "a";
//	//string source = "";
//	//string target = "";
//	Solution s;
//	cout << s.minWindow(source, target);
//	system("pause");
//	return 0;
//}