//// 没什么逻辑，直接硬干就行
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param strs: A list of strings
//     * @return: The longest common prefix
//     */
//    string longestCommonPrefix(vector<string> &strs) {
//        // write your code here
//		if( strs.size()==0 )
//			return string("");
//		bool isOver = false;
//		int length = 0;
//		while( !isOver ){
//			if( length >= strs.begin()->size() ){
//					break;
//			}
//			auto ch = strs.begin()->at( length );
//			for( auto ite=strs.begin(); ite!=strs.end(); ite++){
//				if( length >= ite->size() ){
//					isOver = true;
//					break;
//				}
//				auto tempCh = (*ite).at( length );
//				if( tempCh != ch ){
//					isOver = true;
//					break;
//				}
//			}
//			if( !isOver )
//				length ++;
//		}
//		return strs.begin()->substr(0, length);
//    }
//};
//
//int main(){
//
//	vector<string> strs;
//	strs.push_back( string("ABCD") );
//	strs.push_back( string("ABEFG") );
//	strs.push_back( string("ACEFA") );
//	Solution s;
//	cout << s.longestCommonPrefix(strs) << endl;
//	system("pause");
//	return 0;
//}