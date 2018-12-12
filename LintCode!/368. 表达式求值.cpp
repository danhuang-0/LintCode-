//// 直接搬运 
//// 379. 将表达式转化为逆波兰表达式
//// 424. 逆波兰表达式求值
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
//
//	int evalRPN(vector<string> &tokens) {
//        // write your code here
//		stack<int> stk;
//		// 塞进去个 0 打底，防止只有左括号右括号啥的
//		stk.push(0);
//		for( auto str : tokens ){
//			if( str == "+" ){
//				int nTop = stk.top();
//				stk.pop();
//				nTop = stk.top() + nTop;
//				stk.pop();
//				stk.push( nTop );
//			} else if ( str == "-" ){
//				int nTop = stk.top();
//				stk.pop();
//				nTop = stk.top() - nTop;
//				stk.pop();
//				stk.push( nTop );
//			} else if ( str == "*" ){
//				int nTop = stk.top();
//				stk.pop();
//				nTop = stk.top() * nTop;
//				stk.pop();
//				stk.push( nTop );
//			} else if ( str == "/" ){
//				int nTop = stk.top();
//				stk.pop();
//				nTop = stk.top() / nTop;
//				stk.pop();
//				stk.push( nTop );
//			} else {
//				int num = atoi( str.c_str() );
//				stk.push( num );
//			}
//		}
//		return stk.top();
//    }
//
//	int evaluateExpression(vector<string> &expression) {
//		if( expression.size() == 0 )
//			return 0;
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
//		return evalRPN( strRet );
//    }
//};
//
//int main(){
//	// string arr[] = {"(","(","(","(","(",")",")",")",")",")"};
//	string arr[] = {"2", "*", "6", "-", "(",
//					"23", "+", "7", ")", "/",
//					"(", "1", "+", "2", ")"};
//	vector<string> vecStr( begin(arr), end(arr));
//	Solution s;
//	auto a = s.evaluateExpression( vecStr );
//
//	return 0;
//}