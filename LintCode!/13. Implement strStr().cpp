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
//		//Sunday算法
//
//		int nLength_Target = strlen(target);
//		if( nLength_Target==0 )
//			return 0;
//		int nLength_Source = strlen(source);
//		if( nLength_Source==0 )
//			return -1;
//
//		int aNext[256];
//		//制作next数组
//		for( int i=0; i<256; ++i )
//			aNext[i] = -1;
//		for( int i=0; i<nLength_Target; ++i )
//			aNext[target[i]] = i;
//		int i=0, j=0;
//		int nEnd = nLength_Target-1;
//		int nRet = -1;
//		while( nEnd<=nLength_Source )
//		{
//			//找完了
//			if( j==nLength_Target )
//			{
//				//计算出头位置
//				nRet = nEnd - nLength_Target + 1;
//				break;
//			}
//			//当前字符匹配
//			if( source[i] == target[j] )
//			{
//				i++;j++;
//				continue;
//			}
//			//当前字符不匹配
//			else
//			{
//				//如果目标串中存在尾部指向字符，偏移next数组中存放的个数
//				if( aNext[source[nEnd]] != -1 )
//				{
//					//偏移尾部分
//					nEnd += nLength_Target - aNext[source[nEnd]] -1 ;
//					//调整i，归零j
//					i = nEnd - nLength_Target + 1;
//					j = 0;
//				}
//				//目标串中不存在尾部指向字符串，直接后移一个目标串长度
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
//	////只存在一个
//	//char szTarget[] = "abcd";
//	////存在多个 在头部
//	//char szTarget[] = "abc";
//	//存在一个 在尾部
//	char szTarget[] = "abcf";
//	////不存在
//	//char szTarget[] = "aaaaa";
//	Solution s;
//	cout<<s.strStr( szSource, szTarget );
//	system("pause");
//	return 0;
//}