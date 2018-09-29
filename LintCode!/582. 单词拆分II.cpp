//#include <iostream>
//#include <vector>
//#include <string>
//#include <unordered_set>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param s: A string
//     * @param wordDict: A set of words.
//     * @return: All possible sentences.
//     */
//    vector<string> wordBreak(string &s, unordered_set<string> &wordDict) {
//        // write your code here
//		unordered_map<char, vector<string>> mapDict;
//		for( auto word : wordDict ){
//			if( word.empty() )
//				continue;
//			mapDict[word[0]].push_back(word);
//		}
//
//    }
//};