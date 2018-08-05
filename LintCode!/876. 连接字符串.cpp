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
//	//��left��right��ת�ַ���
//	void MyReserve( string &str, int nLeft, int nRight );
//	//�ҵ����Ԫ����Χ�����Ԫ��, �������Ϊ��������
//	char FindSecond( vector<string> &strs, int nMax_i, int nMax_j, bool isFirst, bool isLast, int *pI, int* pJ );
//	//������һ��Ԫ�غ͵�ǰԪ���ҵ���һ��Ԫ�� �������ú� last���now now�����now
//	char FindNext( vector<string> &strs, int *pLast_i, int *pLast_j, int *pNow_i, int *pNow_j );
//	//last����now now�������
//	inline void LeftMove( int *pLast_i, int *pLast_j, int *pNow_i, int *pNow_j, int i_1, int j_1 );
//	//�ж�����ָ��������ַ��ĸ��� ��������Ž�����������
//	inline char FindMax( vector<string> strs, int i_1, int j_1, int i_2, int j_2, int*ppI, int *ppJ);
//	int max( int a, int b ){ return a>b?a:b; }
//    string splitLoopedString(vector<string> &strs) {
//        // write your code here
//		//�ҵ��и��
//		char cMax = 0, cNext = 0;
//		int nMaxPos_i, nMaxPos_j;
//		int nSecondPos_i, nSecondPos_j;
//		//�������ַ�������
//		int nCount = 0;
//		char cTemp = strs[0][0];
//		//���жϸ����ַ������Ƿ�ֻ��һ��Ԫ�� �����������������ѭ��
//		bool bOnlyOneLetter = true;
//		//�жϵ�ͬʱ���������С
//		//��������ֻ��һ���ַ����Ļ� nCount���ַ�����
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
//		//���ֻ��һ����ĸ ֱ�ӹ���string������
//		if( bOnlyOneLetter )
//		{
//			string strRet( nCount, strs[0][0] );
//			return strRet;
//		}
//		//�����ǰ�˳��Ļ� nCount�ǲ����õ� ��Ҫ���¼���
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
//					//������Ԫ����Χ�����Ԫ��
//					cNext = FindSecond(strs, i, j, j==0, j==nInSize-1, &nSecondPos_i, &nSecondPos_j );
//				}
//				//����ȵ����ֵʱ
//				//�����Χ���Ԫ�ظ���Ļ� �������ֵ
//				else if( strs[i][j] == cMax )
//				{
//					int nSecondPos_i_temp, nSecondPos_j_temp;
//					char cTemp = FindSecond(strs, i, j, j==0, j==nInSize-1, &nSecondPos_i_temp, &nSecondPos_j_temp );
//					//��ΧԪ�ظ��� �����и��
//					if ( bOnlyOneLetter || cTemp > cNext )
//					{
//						cMax = strs[i][j];
//						nMaxPos_i = i;
//						nMaxPos_j = j;
//						//�������Ԫ����Χ�����Ԫ��
//						cNext = cTemp;
//						//������Χ���Ԫ������ֵ
//						nSecondPos_i = nSecondPos_i_temp;
//						nSecondPos_j = nSecondPos_j_temp;
//					}
//					//��ΧԪ����� �������Ƚ�
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
//						//�µ���ھɵ� �����и��
//						if( cNext_2 > cNext_1 )
//						{
//							cMax = strs[i][j];
//							nMaxPos_i = i;
//							nMaxPos_j = j;
//							//�������Ԫ����Χ�����Ԫ��
//							cNext = cTemp;
//							//������Χ���Ԫ������ֵ
//							nSecondPos_i = nSecondPos_i_temp;
//							nSecondPos_j = nSecondPos_j_temp;
//						}
//					}
//				}
//			}
//			nCount += nInSize;
//		}
//		//�����ַ�����������Buf
//		char* szBuf = (char*)malloc(sizeof(char)*(nCount+1)) ;
//		//�����и��������ַ���������ĸ��ѡ���Ƿ�ת
//		for( int i=0, nOutSize =strs.size(); i<nOutSize; ++i )
//		{
//			if( i == nMaxPos_i )
//				continue;
//			//���������ж��Ƿ���Ҫ��ת
//			int nLeft = 0;
//			int nRight = strs[i].size() - 1;
//			while( nLeft <= nRight
//					&& strs[i][nLeft] == strs[i][nRight] )
//			{
//				nLeft++;
//				nRight--;
//			}
//			//���ǻ��Ĵ� ��ʱnLeft��nRight���ǵ�һ�����ȵĵط�
//			//���������ߵ���ĸ���ұߵ�С ����Ҫ��ת
//			if( nLeft < nRight && strs[i][nLeft] < strs[i][nRight] )
//			{
//				//�����ȵ�λ�÷�ת
//				MyReserve( strs[i], nLeft, nRight );
//			}
//		}
//		//�����и����и�����Ĵ������и�����ڴ�Ҫ��Ҫ��ת
//		{
//			//����и�����ַ������� ��ֻ�ڴ����ж�Ҫ��Ҫ��ת
//			int i_1, j_1, i_2, j_2;
//			if( nMaxPos_j!=0 && nMaxPos_j!=strs[nMaxPos_i].size()-1 )
//			{
//				//ֱ����ǰ���Ҿͺ�
//				i_1 = nMaxPos_i;
//				j_1 = nMaxPos_j - 1;
//				i_2 = nMaxPos_i;
//				j_2 = nMaxPos_j + 1;
//			}
//			//����и�����ַ���ͷ������β�� ��ȡ����Եĵڶ�������һ���ַ�����ͷ���бȽ�
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
//			//����и��ǰ����ַ��Ⱥ�����ַ��� ����Ҫ��ת
//			if( cLeft > cRight )
//			{
//				MyReserve( strs[nMaxPos_i], 0, strs[nMaxPos_i].size() - 1);
//				//�����������ֵ
//				nMaxPos_j = strs[nMaxPos_i].size() - 1 - nMaxPos_j;
//			}
//			//�������������� ��������ѭ��Ѱ�Ҳ��ȵ�λ����ת
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
//				//����������Ҳ��
//				if( cLeft > cRight )
//				{
//					MyReserve( strs[nMaxPos_i], 0, strs[nMaxPos_i].size() - 1);
//					//�����������ֵ
//					nMaxPos_j = strs[nMaxPos_i].size() - 1 - nMaxPos_j;
//				}
//			}
//		}
//		
//		//���ַ���������buffer���buffer����string����
//		//���и�㿪ʼ������buf��
//		strcpy( szBuf, strs[nMaxPos_i].c_str() + nMaxPos_j );
//		//����������
//		for( int nSize = strs.size(), i=(nMaxPos_i+1)%nSize;
//			i!=nMaxPos_i;
//			i=(i + 1 + nSize)%nSize)
//		{
//			strcat( szBuf, strs[i].c_str() );
//		}
//		//�����и��ǰ�沿��
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
//	////�и�����м�
//	//string aStr[] = { "abc","gih","def"};
//	////�и����ͷ�� ��Ҫ��ת
//	//string aStr[] = { "abc","zbc","ghi"};
//	////�и����ͷ�� ����Ҫ��ת
//	//string aStr[] = { "abc","def","igh"};
//	////�и����β�� ��Ҫ��ת
//	//string aStr[] = { "abc","def","ghi"};
//	////�и����β������Ҫ��ת
//	//string aStr[] = {"ady", "lc", "bcd"};
//	////�����и���������ʱ�Ƿ�ת
//	//string aStr[] = { "edfd", "ae" , "bb" };
//	////ֻ��һ����ĸ���ַ���
//	//string aStr[] = {"aaa", "aaaaa", "aaaaaa"};
//	////��������1
//	//string aStr[] = {"abc", "xyz"};
//	////��������2
//	//string aStr[] = {"awef","eawf","zdaeff","awefzewaf","awefzewaf"};
//	//��������3
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
//	//���㲻������
//	
//	if( !isFirst && !isLast )
//	{
//		//�ӵ�ǰ���ֵ������ѡ�����ֵ
//		i_1 = nMax_i;
//		j_1 = nMax_j+1;
//		i_2 = nMax_i;
//		j_2 = nMax_j-1;
//	}
//	//���ֵ��ͷ������β��
//	else
//	{
//		int nSize = strs.size();
//		i_1 = nMax_i;
//		//���ֵ��ͷ�� �Ƚϵڶ���Ԫ�غ���һ�����ͷ����β��
//		//���ֵ��β�� �Ƚϵ����ڶ���Ԫ�غ���һ�����ͷ����β��
//		j_1 = isFirst? (nMax_j + 1) : (nMax_j - 1) ;
//		//�ҵ���һ�����ͷβ ��һ�����ͷβ�����ֵ
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
//	//�����ǰԪ�ز���ͷ�Ҳ���β �ҵ�ǰһ��������һ������ȥ
//	if( *pNow_j !=0 && *pNow_j != strs[*pNow_i].size()-1 )
//	{
//		int nOffset = *pNow_j - *pLast_j;
//		cRet = strs[*pNow_i][*pNow_j + nOffset];
//		LeftMove( pLast_i, pLast_j, pNow_i, pNow_j, *pNow_i, *pNow_j + nOffset);
//	}
//	//��ǰԪ����ͷ����β ����ʽ����
//	else
//	{
//		//����Ǵӱ������������ ֱ��ȡ��һ������ȥ
//		if( *pLast_i != *pNow_i )
//		{
//			//�����ǰԪ����ͷ ȡ����һ�� ����ȡ��ǰһ��
//			int nOffset =  *pNow_j==0? 1:-1;
//			cRet = strs[*pNow_i][*pNow_j + nOffset];
//			LeftMove( pLast_i, pLast_j, pNow_i, pNow_j, *pNow_i, *pNow_j + nOffset);
//		}
//		//������ǵ����ߵ�ͷ�Ļ��������ߵ�β�� 
//		//�ҵ���һ������ͷ����β�бȽϴ��һ������
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