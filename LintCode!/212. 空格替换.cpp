//// ��һ��ɨ���һ���ж��ٸ��ո�ֱ�Ӽ�����ܳ���
//// Ȼ��Ӻ���ǰ����ԭ�ַ�����һ�ν�ԭ����ÿ���ַ��ŵ�����λ����
//// �����ո���ֱ���滻Ϊ %20
//// �����ж���Ҫע��
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param string: An array of Char
//     * @param length: The true length of the string
//     * @return: The true length of new string
//     */
//    int replaceBlank(char string[], int length) {
//        // write your code here
//		if( string == nullptr )
//			return 0;
//		if( length == 0 )
//			return 0;
//		int nCountOfSpace = 0;
//		for( int i=0; i<length; i++ ) {
//			if( string[i] == ' ' ) {
//				nCountOfSpace++;
//			}
//		}
//		int nLengthTemp = length;
//		length += 2 * nCountOfSpace;
//		string[length] = '\0';
//		int nNewLoc = length - 1;
//		for( int i=nLengthTemp-1; i>=0; i-- ){
//			if( string[i] == ' ' ) {
//				string[nNewLoc--] = '0';
//				string[nNewLoc--] = '2';
//				string[nNewLoc--] = '%';
//			} else {
//				string[nNewLoc--] = string[i];
//			}
//		}
//		return length;
//    }
//};
//
//int main(){
//
//	//char arr[20] = "Mr John Smith"; 
//	//char arr[20] = "";
//	char arr[20] = "abc";
//	Solution s;
//	s.replaceBlank( arr, 3 );
//
//	return 0;
//}