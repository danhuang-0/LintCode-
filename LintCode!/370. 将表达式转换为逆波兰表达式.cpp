//// 中缀转后缀的方法
//// 按照题目要求，在加减层面
//// 优先进行前面的加减操作，减小后缀解析栈的大小
//// 所以遇到加减号的时候，把一直到括号为止的操作符全部弹出
//// 大致规则如下
//// 遇到左括号直接压符号栈
//// 遇到右括号，弹出所有操作符直到遇到左括号
//// 遇到加减号，弹出之前的所有操作符，然后入栈加减号准备后续操作
//// 遇到乘除号，先把前面的乘除做完，然后入栈乘除号
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