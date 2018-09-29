//// ʹ��DP��˼��
//// DP[i] ����ǰi����ĸ���Ա��������
//// DP[0] = true;
//// DP[i] ���жϷ�����ֻ��Ҫ�жϴ�j=0 �� i-1��
//// ĳһ�����Ա�������ֵĶΣ�֮����Ӵ��ܲ������ֵ���ƥ��ͺ���
//// ����������˼·ȥʵ�ֻ��ر�ĺ�ʱ��ʹ��set�����Ż�
//// ͬʱȡ����󵥴ʳ�����������DP[i]�Ĺ��̽��м�֦
//// ��֦������set�����ԣ����õ�������ķ�����
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