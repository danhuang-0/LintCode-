///* ����˼·Ϊ����ָ�룬һ����ǰ��һ���ں�
// * ��Ϊ��Ҫ��˳������ֱ�Ӳ���map��¼ÿ����ĸ������
// * ��ǰ���ָ�븺������������������ǰ��ĸ��target�е���ĸ�Ļ�
// * ��¼��ǰ����ĸ���ֵ�����
// * �����ǰ��ĸ�����Ѿ����Ļ����ѵ�ǰ��ĸ״̬��Ϊok
// * �������������ĸ��OK�Ļ���˵��û�д�
// * ���������ĸ�� OK �Ļ��������ָ�뿪ʼ��ǰ�����ڵ�ǰfront��
// * back�ڱ�����ĸ��������target��Ҫ��������һֱ��ǰ�ƶ������������ַ���
// * ��¼����ַ������ȵĳ��ȣ���back���ڹ��������ַ�������
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
//					// �����ַ���OK���Ļ�����ʼ������̳���
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