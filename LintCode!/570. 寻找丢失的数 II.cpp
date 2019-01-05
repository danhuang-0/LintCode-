//// ��Ϊȷ������С�� 30 �����������λ��
//// ���� DFS �ķ�ʽ��һ��ȡһ������ȡ�������������ٻ���
//// ֱ���ҵ�Ϊֹ
//// Ҫע�� atoi ��� 09 ת��Ϊ 9
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: An integer
//     * @param str: a string with number from 1-n in random order and miss one number
//     * @return: An integer
//     */
//
//	int _dfs(string &str, int nOffset, int nBoost, vector<bool> & isFind ){
//		if( str[nOffset] == '0' )
//			return 0;
//		string strTemp = str.substr(nOffset, nBoost);
//		int nNum = atoi(strTemp.c_str());
//		if( nNum > isFind.size() - 1 )
//			return 0;
//		if( !isFind[nNum] ){
//			isFind[nNum] = true;
//			if( int nRet = DFS(str, nOffset + nBoost, isFind) )
//				return nRet;
//			isFind[nNum] = false;
//		}
//		return 0;
//	}
//
//	int DFS( string &str, int nOffset, vector<bool> &isFind ){
//		if( nOffset == str.size() ){
//			for( int i=1; i<isFind.size(); i++ )
//				if( !isFind[i] )
//					return i;
//		}
//		int nRet = _dfs( str, nOffset, 1, isFind);
//		if( nRet )
//			return nRet;
//
//		if( nOffset + 1 < str.size() ){
//			nRet = _dfs( str, nOffset, 2, isFind );
//			if( nRet )
//				return nRet;
//		}
//		return 0;
//	}
//
//    int findMissing2(int n, string &str) {
//        // write your code here
//		vector<bool> isFind( n+1, false );
//		int nRet = DFS(str, 0, isFind );
//		return nRet;
//    }
//};
//
//int main(){
//	
//	string str("111098765432");
//	Solution s;
//	s.findMissing2(11, str);
//	return 0;
//}