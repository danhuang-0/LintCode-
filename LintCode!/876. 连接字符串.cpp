//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param strs: a list of string
//     * @return: return a string
//     */
//	//从left到right翻转字符串
//	void MyReserve( string &str, int nLeft, int nRight );
//	//找到最大元素周围的最大元素, 最后两个为传出参数
//	char FindSecond( vector<string> &strs, int nMax_i, int nMax_j, bool isFirst, bool isLast, int *pI, int* pJ );
//	//根据上一个元素和当前元素找到下一个元素 函数调用后 last变成now now变成新now
//	char FindNext( vector<string> &strs, int *pLast_i, int *pLast_j, int *pNow_i, int *pNow_j );
//	//last等于now now等于最后
//	inline void LeftMove( int *pLast_i, int *pLast_j, int *pNow_i, int *pNow_j, int i_1, int j_1 );
//	//判断坐标指向的两个字符哪个大 并把坐标放进传出参数中
//	inline char FindMax( vector<string> strs, int i_1, int j_1, int i_2, int j_2, int*ppI, int *ppJ);
//	int max( int a, int b ){ return a>b?a:b; }
//    string splitLoopedString(vector<string> &strs) {
//        // write your code here
//		//找到切割点
//		char cMax = 0, cNext = 0;
//		int nMaxPos_i, nMaxPos_j;
//		int nSecondPos_i, nSecondPos_j;
//		//计算总字符串长度
//		int nCount = 0;
//		char cTemp = strs[0][0];
//		//先判断给出字符串中是否只有一个元素 避免后续操作陷入死循环
//		bool bOnlyOneLetter = true;
//		//判断的同时计算数组大小
//		//如果结果是只有一个字符串的话 nCount即字符总数
//		for( int i=0, nOutSize =strs.size(); i<nOutSize; ++i )
//		{
//			int nInSize = strs[i].size();
//			for( int j=0 ; j<nInSize; ++j )
//			{
//				if( strs[i][j] != cTemp )
//				{
//					bOnlyOneLetter = false;
//					break;
//				}
//			}
//			if( !bOnlyOneLetter )
//				break;
//			nCount += nInSize;
//		}
//		//如果只有一个字母 直接构造string并返回
//		if( bOnlyOneLetter )
//		{
//			string strRet( nCount, strs[0][0] );
//			return strRet;
//		}
//		//如果提前退出的话 nCount是不好用的 需要重新计算
//		nCount = 0;
//		for( int i=0, nOutSize =strs.size(); i<nOutSize; ++i )
//		{
//			int nInSize = strs[i].size();
//			for( int j=0 ; j<nInSize; ++j )
//			{
//				if( strs[i][j] > cMax )
//				{
//					cMax = strs[i][j];
//					nMaxPos_i = i;
//					nMaxPos_j = j;
//					//求出最大元素周围的最大元素
//					cNext = FindSecond(strs, i, j, j==0, j==nInSize-1, &nSecondPos_i, &nSecondPos_j );
//				}
//				//有相等的最大值时
//				//如果周围最大元素更大的话 更换最大值
//				else if( strs[i][j] == cMax )
//				{
//					int nSecondPos_i_temp, nSecondPos_j_temp;
//					char cTemp = FindSecond(strs, i, j, j==0, j==nInSize-1, &nSecondPos_i_temp, &nSecondPos_j_temp );
//					//周围元素更大 更换切割点
//					if ( bOnlyOneLetter || cTemp > cNext )
//					{
//						cMax = strs[i][j];
//						nMaxPos_i = i;
//						nMaxPos_j = j;
//						//更新最大元素周围的最大元素
//						cNext = cTemp;
//						//更新周围最大元素坐标值
//						nSecondPos_i = nSecondPos_i_temp;
//						nSecondPos_j = nSecondPos_j_temp;
//					}
//					//周围元素相等 继续向后比较
//					else if( cTemp == cNext )
//					{
//						int i_1 = nSecondPos_i,
//							j_1 = nSecondPos_j,
//							i_2 = nSecondPos_i_temp,
//							j_2 = nSecondPos_j_temp,
//							i_1_last = nMaxPos_i,
//							j_1_last = nMaxPos_j,
//							i_2_last = i,
//							j_2_last = j;
//						char cNext_1, cNext_2;
//						do
//						{
//							cNext_1 = FindNext(strs, &i_1_last, &j_1_last, &i_1, &j_1 );
//							cNext_2 = FindNext(strs, &i_2_last, &j_2_last, &i_2, &j_2 );
//						}while( cNext_1==cNext_2 );
//						//新点大于旧点 更换切割点
//						if( cNext_2 > cNext_1 )
//						{
//							cMax = strs[i][j];
//							nMaxPos_i = i;
//							nMaxPos_j = j;
//							//更新最大元素周围的最大元素
//							cNext = cTemp;
//							//更新周围最大元素坐标值
//							nSecondPos_i = nSecondPos_i_temp;
//							nSecondPos_j = nSecondPos_j_temp;
//						}
//					}
//				}
//			}
//			nCount += nInSize;
//		}
//		//根据字符串长度制作Buf
//		char* szBuf = (char*)malloc(sizeof(char)*(nCount+1)) ;
//		//除了切割点以外的字符串根据字母序选择是否翻转
//		for( int i=0, nOutSize =strs.size(); i<nOutSize; ++i )
//		{
//			if( i == nMaxPos_i )
//				continue;
//			//从外至内判断是否需要翻转
//			int nLeft = 0;
//			int nRight = strs[i].size() - 1;
//			while( nLeft <= nRight
//					&& strs[i][nLeft] == strs[i][nRight] )
//			{
//				nLeft++;
//				nRight--;
//			}
//			//不是回文串 此时nLeft和nRight就是第一个不等的地方
//			//并且如果左边的字母比右边的小 则需要翻转
//			if( nLeft < nRight && strs[i][nLeft] < strs[i][nRight] )
//			{
//				//将不等的位置翻转
//				MyReserve( strs[i], nLeft, nRight );
//			}
//		}
//		//根据切割点和切割点后面的串决定切割点所在串要不要翻转
//		{
//			//如果切割点在字符串中央 则只在串内判断要不要翻转
//			int i_1, j_1, i_2, j_2;
//			if( nMaxPos_j!=0 && nMaxPos_j!=strs[nMaxPos_i].size()-1 )
//			{
//				//直接向前后找就好
//				i_1 = nMaxPos_i;
//				j_1 = nMaxPos_j - 1;
//				i_2 = nMaxPos_i;
//				j_2 = nMaxPos_j + 1;
//			}
//			//如果切割点在字符串头部或者尾部 则取出相对的第二个和下一个字符串的头进行比较
//			else
//			{
//				int nOffset = nMaxPos_j==0 ? 1 : -1 ;
//				i_1 = nMaxPos_i;
//				j_1 = nMaxPos_j + nOffset;
//				i_2 = ( nMaxPos_i + 1 ) % strs.size() ;
//				j_2 = 0;
//			}
//			char cLeft = strs[i_1][j_1];
//			char cRight = strs[i_2][j_2];
//			//如果切割点前面的字符比后面的字符大 则需要翻转
//			if( cLeft > cRight )
//			{
//				MyReserve( strs[nMaxPos_i], 0, strs[nMaxPos_i].size() - 1);
//				//更新最大坐标值
//				nMaxPos_j = strs[nMaxPos_i].size() - 1 - nMaxPos_j;
//			}
//			//如果左右两侧相等 则向两侧循环寻找不等的位置跳转
//			else if ( cLeft == cRight )
//			{
//			int i_1_last = nMaxPos_i,
//				j_1_last = nMaxPos_j,
//				i_2_last = i_1_last,
//				j_2_last = j_1_last;
//				do{
//					cLeft = FindNext( strs, &i_1_last, &j_1_last, &i_1, &j_1);
//					cRight = FindNext( strs, &i_2_last, &j_2_last, &i_2, &j_2);
//				}while( cLeft == cRight );
//				//最后发现左侧比右侧大
//				if( cLeft > cRight )
//				{
//					MyReserve( strs[nMaxPos_i], 0, strs[nMaxPos_i].size() - 1);
//					//更新最大坐标值
//					nMaxPos_j = strs[nMaxPos_i].size() - 1 - nMaxPos_j;
//				}
//			}
//		}
//		
//		//将字符串拷贝到buffer里，用buffer构建string返回
//		//从切割点开始拷贝到buf中
//		strcpy( szBuf, strs[nMaxPos_i].c_str() + nMaxPos_j );
//		//拷贝其他点
//		for( int nSize = strs.size(), i=(nMaxPos_i+1)%nSize;
//			i!=nMaxPos_i;
//			i=(i + 1 + nSize)%nSize)
//		{
//			strcat( szBuf, strs[i].c_str() );
//		}
//		//拷贝切割点前面部分
//		{
//			int nLength = strlen( szBuf );
//			int i = 0;
//			for( i ; i<nMaxPos_j; ++i )
//				szBuf[nLength + i] = strs[nMaxPos_i][i];
//			szBuf[nLength + i] = '\0';
//		}
//		string strRet( szBuf );
//		free( szBuf );
//		return strRet;
//    }
//};
//
//int main()
//{
//	////切割点在中间
//	//string aStr[] = { "abc","gih","def"};
//	////切割点在头部 需要翻转
//	//string aStr[] = { "abc","zbc","ghi"};
//	////切割点在头部 不需要翻转
//	//string aStr[] = { "abc","def","igh"};
//	////切割点在尾部 需要翻转
//	//string aStr[] = { "abc","def","ghi"};
//	////切割点在尾部不需要翻转
//	//string aStr[] = {"ady", "lc", "bcd"};
//	////测试切割点两侧相等时是否翻转
//	//string aStr[] = { "edfd", "ae" , "bb" };
//	////只有一个字母的字符串
//	//string aStr[] = {"aaa", "aaaaa", "aaaaaa"};
//	////测试数据1
//	//string aStr[] = {"abc", "xyz"};
//	////测试数据2
//	//string aStr[] = {"awef","eawf","zdaeff","awefzewaf","awefzewaf"};
//	//测试数据3
//	string aStr[] = {"kc", "whrzsj", "hqqz", "zdzt",
//		"lfwjkq", "grs", "kqe", "bejospyot", "cglwsmac", "btf",
//		"zd", "c", "td", "psuwaqiseb", "qscanm", "m", "piilgujqcl", "c",
//		"kjk", "waghgvb", "uvswl", "u", "yy", "gne", "wrcfhmkt", "vokz",
//		"akbjczy", "gskf"};
//	
//	vector<string> strs ;
//	for( int i=0; i<sizeof(aStr)/sizeof(aStr[0]); ++i )
//	{
//		strs.push_back( aStr[i] );
//	}
//	Solution s;
//	cout << s.splitLoopedString(strs);
//	system("pause");
//	return 0;
//}
//
//void Solution::MyReserve( string &str, int nLeft, int nRight )
//{
//	for( int nPos = nLeft; nPos<( nLeft+nRight+1 )/2; ++nPos )
//	{
//		char cTemp = str[nPos];
//		str[nPos] = str[nLeft + nRight - nPos];
//		str[nLeft + nRight - nPos] = cTemp;
//	}
//}
//
//char Solution::FindMax( vector<string> strs, int i_1, int j_1, int i_2, int j_2, int*ppI, int *ppJ)
//{
//	char cRet;
//	char cNext = strs[i_1][j_1];
//	char cLast = strs[i_2][j_2];
//	if( cNext > cLast )
//	{
//		cRet = cNext;
//		*ppI = i_1;
//		*ppJ = j_1;
//	}
//	else
//	{
//		cRet = cLast;
//		*ppI = i_2;
//		*ppJ = j_2;
//	}
//	return cRet;
//}
//
//
//char Solution::FindSecond( vector<string> &strs, int nMax_i, int nMax_j, bool isFirst, bool isLast, int *pI, int* pJ )
//{
//	int i_1, j_1;
//	int i_2, j_2;
//	int nRet = 0;
//	//最大点不在两边
//	
//	if( !isFirst && !isLast )
//	{
//		//从当前最大值的左右选出最大值
//		i_1 = nMax_i;
//		j_1 = nMax_j+1;
//		i_2 = nMax_i;
//		j_2 = nMax_j-1;
//	}
//	//最大值在头部或者尾部
//	else
//	{
//		int nSize = strs.size();
//		i_1 = nMax_i;
//		//最大值在头部 比较第二个元素和下一个组的头部或尾部
//		//最大值在尾部 比较倒数第二个元素和下一个组的头部或尾部
//		j_1 = isFirst? (nMax_j + 1) : (nMax_j - 1) ;
//		//找到上一个组的头尾 下一个组的头尾的最大值
//		i_2 = ( nMax_i+1+nSize ) % nSize;
//		j_2 = strs[i_2][0] > strs[i_2][ strs[i_2].size()-1 ] ?
//			0 : strs[i_2].size()-1;		
//	}
//	return FindMax(strs, i_1, j_1, i_2, j_2, pI, pJ);
//}
//
//void Solution::LeftMove( int *pLast_i, int *pLast_j, int *pNow_i, int *pNow_j, int i_1, int j_1 )
//{
//	*pLast_i = *pNow_i;
//	*pLast_j = *pNow_j;
//	*pNow_i = i_1;
//	*pNow_j = j_1;
//}
//
//char Solution::FindNext( vector<string> &strs, int *pLast_i, int *pLast_j, int *pNow_i, int *pNow_j )
//{
//	if( !pLast_i || !pLast_j || !pNow_i || !pNow_i )
//		return -1;
//	char cRet = 0;
//	//如果当前元素不是头且不是尾 找到前一个或者下一个交出去
//	if( *pNow_j !=0 && *pNow_j != strs[*pNow_i].size()-1 )
//	{
//		int nOffset = *pNow_j - *pLast_j;
//		cRet = strs[*pNow_i][*pNow_j + nOffset];
//		LeftMove( pLast_i, pLast_j, pNow_i, pNow_j, *pNow_i, *pNow_j + nOffset);
//	}
//	//当前元素是头或者尾 处理方式类似
//	else
//	{
//		//如果是从别的组跳过来的 直接取下一个交出去
//		if( *pLast_i != *pNow_i )
//		{
//			//如果当前元素是头 取出下一个 否则取出前一个
//			int nOffset =  *pNow_j==0? 1:-1;
//			cRet = strs[*pNow_i][*pNow_j + nOffset];
//			LeftMove( pLast_i, pLast_j, pNow_i, pNow_j, *pNow_i, *pNow_j + nOffset);
//		}
//		//否则就是倒着走到头的或者睁着走到尾的 
//		//找到下一个组中头或者尾中比较大的一个返回
//		else
//		{
//			int iTemp = (*pNow_i + 1 )% strs.size();
//			int nSize = strs[iTemp].size();
//			int nMax = strs[iTemp][0] > strs[iTemp][nSize-1]?
//						0 : nSize - 1;
//			cRet = strs[iTemp][nMax];
//			LeftMove( pLast_i, pLast_j, pNow_i, pNow_j, iTemp, nMax );
//		}
//	}
//	return cRet;
//}