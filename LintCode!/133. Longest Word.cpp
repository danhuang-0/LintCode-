//// ��̬ά����󳤶ȣ����ȵ�����󳤶ȵ��ַ�����ӵ�������
//// ���ֳ��ȴ�������ȵ��ַ�����������鲢����ά��
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