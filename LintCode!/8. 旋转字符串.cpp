//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param str: An array of char
//     * @param offset: An integer
//     * @return: nothing
//     */
//    void rotateString(string &str, int offset) {
//        // write your code here
//		int nSize = str.size();
//		if( offset<0|| ""==str )
//			return;
//		//ת�˼�Ȧ
//		if( offset > nSize )
//			offset = offset % nSize;
//		//��ת�����ַ���
//		for( int i=0; i<nSize/2; ++i )
//		{
//			int nTemp = str[i];
//			str[i] = str[nSize-i-1];
//			str[nSize-i-1] = nTemp;
//		}
//		//��תǰ���ַ���
//		for( int i=0; i<offset/2; ++i )
//		{
//			char cTemp = str[i];
//			str[i] = str[offset-i-1];
//			str[offset-i-1] = cTemp;
//		}
//		//��ת����ַ���
//		for( int i=offset; i<(nSize+offset)/2; ++i )
//		{
//			char cTemp = str[i];
//			str[i] = str[offset+nSize-i-1];
//			str[offset+nSize-i-1] = cTemp;
//		}
//    }
//};
//
//int main()
//{
//	string  str = "abcdefg";
//	int nOffset;
//	Solution s;
//	cin>>nOffset;
//	s.rotateString( str, nOffset );
//	cout<<str<<endl;
//	system("pause");
//	return 0;
//}