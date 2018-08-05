//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param source: source string to be scanned.
//     * @param target: target string containing the sequence of characters to match
//     * @return: a index to the first occurrence of target in source, or -1  if target is not part of source.
//     */
//    int strStr(const char *source, const char *target) {
//        // write your code here
//		if( !source||!target )
//			return -1;
//		//Sunday�㷨
//
//		int nLength_Target = strlen(target);
//		if( nLength_Target==0 )
//			return 0;
//		int nLength_Source = strlen(source);
//		if( nLength_Source==0 )
//			return -1;
//
//		int aNext[256];
//		//����next����
//		for( int i=0; i<256; ++i )
//			aNext[i] = -1;
//		for( int i=0; i<nLength_Target; ++i )
//			aNext[target[i]] = i;
//		int i=0, j=0;
//		int nEnd = nLength_Target-1;
//		int nRet = -1;
//		while( nEnd<=nLength_Source )
//		{
//			//������
//			if( j==nLength_Target )
//			{
//				//�����ͷλ��
//				nRet = nEnd - nLength_Target + 1;
//				break;
//			}
//			//��ǰ�ַ�ƥ��
//			if( source[i] == target[j] )
//			{
//				i++;j++;
//				continue;
//			}
//			//��ǰ�ַ���ƥ��
//			else
//			{
//				//���Ŀ�괮�д���β��ָ���ַ���ƫ��next�����д�ŵĸ���
//				if( aNext[source[nEnd]] != -1 )
//				{
//					//ƫ��β����
//					nEnd += nLength_Target - aNext[source[nEnd]] -1 ;
//					//����i������j
//					i = nEnd - nLength_Target + 1;
//					j = 0;
//				}
//				//Ŀ�괮�в�����β��ָ���ַ�����ֱ�Ӻ���һ��Ŀ�괮����
//				else
//				{
//					i = nEnd + 1;
//					j = 0;
//					nEnd += nLength_Target;
//				}
//			}
//		}
//		return nRet;
//    }
//};
//
//int main()
//{
//	char szSource[] = "abcefgabcdeababcf";
//	////ֻ����һ��
//	//char szTarget[] = "abcd";
//	////���ڶ�� ��ͷ��
//	//char szTarget[] = "abc";
//	//����һ�� ��β��
//	char szTarget[] = "abcf";
//	////������
//	//char szTarget[] = "aaaaa";
//	Solution s;
//	cout<<s.strStr( szSource, szTarget );
//	system("pause");
//	return 0;
//}