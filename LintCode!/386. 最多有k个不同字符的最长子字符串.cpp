//// ��׺һ��ָ�� start ����̬�����Ե�ǰ�ַ���β����ַ���
//// ��һ�����飬��¼ÿ���ַ������ֵ�λ�ã���Ҫ��ʼ��Ϊ-1
//// ����жϵ�ǰ�ַ������ֵ�λ���� start ǰ��
//// ��ǰ�ַ����� start �� i-1 ֮����ַ����ڣ���Ҫ���ַ�������һ
//// ����ַ��������� k �ˣ��ƶ���׺�� start ָ��
//// ֱ���ҵ�һ������ start �� i-1֮�����ĸ���������������¼���
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
//     * @param s: A string
//     * @param k: An integer
//     * @return: An integer
//     */
//    int lengthOfLongestSubstringKDistinct(string &s, int k) {
//        // write your code here
//		if( s.size() == 0 || k == 0 )
//			return 0;
//		vector<int> vecLoc( 256, -1 );
//		int nMax = 0;
//		int nCount = 0;
//		int nStart = 0;
//		for( int i=0; i<s.size(); i++ ){
//			// �� start �� i ��û�� s[i] �����ĸ
//			if( vecLoc[ s[i] ] < nStart ){
//				nCount++;
//			}
//			vecLoc[ s[i] ] = i;
//			if( nCount > k ){
//				while( vecLoc[ s[nStart] ] > nStart )
//					nStart++;
//				nStart++;
//				nCount --;
//			}
//			if( i - nStart + 1 > nMax ){
//				nMax = i - nStart + 1;
//			}
//		}
//		return nMax;
//    }
//};
//
//int main(){
//
//	string str( "eceba");
//	Solution s;
//	s.lengthOfLongestSubstringKDistinct(str, 3 );
//	return 0;
//}