////���ִܷ�
////
////�ִ���ָ��һ���ַ����ָ�ɴ������У��������д��ﶼ��������ָ���Ĵʻ�����磺
////���ַ���"github"���Լ��ʻ��["git", "hub"]����ô�ִʷ�ʽΪ:"git hub"��
////
////�ִʿ����ж��ط�ʽ�������ַ���"asdfjkl"���Լ��ʻ��["as", "asd", "df", "fjkl", "jkl"]�����������ִַʷ���:"as df jkl"��"asd fjkl"���ȶ���ÿ�ִַʷ����ĺ����Ե÷�Ϊ���ִʷ�����ÿ�����ʳ��ȵ�ƽ���͡������������ִַʷ����ĵ÷ֱַ�Ϊ 2^2 + 2^2 + 3^2 = 17���Լ� 3^2 + 4^2 = 25��
////
////�ָ����ʻ����ΪСд��ĸ�������50�ַ������10���򵥴ʣ����Լ�һ�仰����ΪСд��ĸ���10���ַ������ҳ������ķִʷ��������ж��ֵ÷���ͬ�����������������ʾ�����ǰ�ķ���������"ab cdef"��"abcd ef"���������ŷ����÷���ͬ�����"abcd ef"��
////
////����:
////��һ��Ϊ������䣻�ڶ���Ϊ�ʻ���еĵ�������N��������N�У�ÿ��һ�����ʡ�
////���:
////һ�У��ָ������䣬�Կո�ָ��������ʡ�
////���뷶��:
////asdfjkl
////5
////as
////asd
////df
////fjkl
////jkl
////�������:
////asd fjkl
//
//
//// ����ƥ���ַ�������ĸ���࣬��as asd ����a��
//// ��ͬһ����ĸ�ڰ����ַ����������򣬾���ƥ�����������Ҫ��
//// �����ǰ���ַ�����ͷû��ƥ���ϣ�����л���
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