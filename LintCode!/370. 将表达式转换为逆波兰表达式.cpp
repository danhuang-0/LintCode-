//// ��׺ת��׺�ķ���
//// ������ĿҪ���ڼӼ�����
//// ���Ƚ���ǰ��ļӼ���������С��׺����ջ�Ĵ�С
//// ���������Ӽ��ŵ�ʱ�򣬰�һֱ������Ϊֹ�Ĳ�����ȫ������
//// ���¹�������
//// ����������ֱ��ѹ����ջ
//// ���������ţ��������в�����ֱ������������
//// �����Ӽ��ţ�����֮ǰ�����в�������Ȼ����ջ�Ӽ���׼����������
//// �����˳��ţ��Ȱ�ǰ��ĳ˳����꣬Ȼ����ջ�˳���
//
//#include <iostream>
//#include <stack>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param expression: A string array
//     * @return: The Reverse Polish notation of this expression
//     */
//    vector<string> convertToRPN(vector<string> &expression) {
//        // write your code here
//		vector<string> strRet;
//		stack<string> stkSymbol;
//		for( auto str : expression ){
//			if( str.compare("+") == 0 ||
//				str.compare("-") == 0 ){
//					while(	!stkSymbol.empty() && 
//						   stkSymbol.top() != "(" ){
//							//( stkSymbol.top().compare("*") == 0 ||
//							// stkSymbol.top().compare("/") == 0 ) ){
//					strRet.push_back( stkSymbol.top() );
//					stkSymbol.pop();
//					if( stkSymbol.empty() )
//						break;
//				}
//				stkSymbol.push( str );
//			} else if ( str.compare("*") == 0 ||
//					    str.compare("/") == 0 ){
//				while( !stkSymbol.empty() && 
//					  ( stkSymbol.top().compare("*") == 0 ||
//					    stkSymbol.top().compare("/") == 0 ) ){
//					strRet.push_back( stkSymbol.top() );
//					stkSymbol.pop();
//				}
//				stkSymbol.push( str );
//			} else if ( str.compare("(") == 0 ){
//				stkSymbol.push(str);
//			} else if ( str.compare(")") == 0 ){
//				while( stkSymbol.top().compare("(") != 0 ) {
//					strRet.push_back( stkSymbol.top() );
//					stkSymbol.pop();
//				}
//				stkSymbol.pop();
//			} else {
//				strRet.push_back( str );
//			}
//		}
//		while( !stkSymbol.empty() ){
//			strRet.push_back( stkSymbol.top() );
//			stkSymbol.pop();
//		}
//		return strRet;
//    }
//};
//
//int main(){
//	//string str = "a+b+c";
//	// string str = "a*b/c";
//	// string str = "a+b/(c+d)+e";
//	// string str = "a+b*c+(d*e+f)*g";
//	string str = "(a/b/c/d)+(e+f/g)";
//	vector<string> vecStr( str.size() );
//	for( int i=0; i<str.size(); i++ )
//		vecStr[i].push_back( str[i] );
//	Solution s;
//	s.convertToRPN( vecStr );
//}