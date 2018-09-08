////智能分词
////
////分词是指将一个字符串分割成词语序列，其中所有词语都来自事先指定的词汇表。例如：
////有字符串"github"，以及词汇表["git", "hub"]，那么分词方式为:"git hub"。
////
////分词可能有多重方式，例如字符串"asdfjkl"，以及词汇表["as", "asd", "df", "fjkl", "jkl"]，可能有两种分词方法:"as df jkl"、"asd fjkl"。先定义每种分词方法的合理性得分为：分词方案中每个单词长度的平方和。例如上述两种分词方案的得分分别为 2^2 + 2^2 + 3^2 = 17，以及 3^2 + 4^2 = 25。
////
////现给出词汇表（均为小写字母，单词最长50字符，最多10个万单词），以及一句话（均为小写字母，最长10万字符），找出最合理的分词方案。若有多种得分相同的最合理方案，输出长词尽量靠前的方案。例如"ab cdef"与"abcd ef"这两种最优方案得分相同，输出"abcd ef"。
////
////输入:
////第一行为待分语句；第二行为词汇表中的单词数量N；接下来N行，每行一个单词。
////输出:
////一行，分隔后的语句，以空格分隔各个单词。
////输入范例:
////asdfjkl
////5
////as
////asd
////df
////fjkl
////jkl
////输出范例:
////asd fjkl
//
//
//// 按照匹配字符串首字母分类，即as asd 都在a下
//// 在同一首字母内按照字符串长度排序，尽量匹配最长的来满足要求
//// 如果当前的字符串开头没有匹配上，则进行回溯
//// 40 %
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//int compare( string a, string b ){
//	return a.size() > b.size();
//}
//
//vector<string> maxVecRet;
//int maxScore = 0;
//
//void findSubStr( string str, map<char, vector<string> > &strMap,vector<string> &vecRet ){
//	if( str.size() == 0 ){
//		int nScore = 0;
//		for( auto strRet : vecRet )
//			nScore += strRet.size() * strRet.size();
//		if( nScore > maxScore ){
//			maxScore = nScore;
//			maxVecRet = vecRet;
//		}
//	}
//	for( auto prefixStr : strMap[str[0]] ){
//		if( str.substr(0, prefixStr.size()) == prefixStr ){
//			vecRet.push_back( prefixStr );
//			findSubStr( str.substr(prefixStr.size(),str.size()), strMap, vecRet );
//			vecRet.pop_back();
//		}
//	}
//}
//
//
//int main(){
//
//	string strInput;
//	cin >> strInput;
//	int n;
//	cin >> n;
//	vector<string> nums(n);
//	for( int i=0; i<n; i++ )
//		cin >> nums[i];
//	
//	map<char, vector<string>> strMap;
//	for( auto str : nums ){
//		strMap[str[0]].push_back(str);
//	}
//	for( auto vec : strMap )
//		sort( vec.second.begin(), vec.second.end(), compare );
//
//	vector<string> vecRet;
//
//	findSubStr( strInput, strMap, vecRet );
//
//	for( int i=0; i<maxVecRet.size(); i++ ){
//		cout << maxVecRet[i];
//		if( i!=maxVecRet.size() -1 ){
//			cout << " ";
//		} else {
//			cout << endl;
//		}
//	}
//	return 0;
//}