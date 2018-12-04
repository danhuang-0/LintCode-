//// 无脑用栈就好
//// 左括号压栈，右括号匹配弹栈，不匹配报错
//// 最后栈空为标准结果
//
//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param s: A string
//     * @return: whether the string is a valid parentheses
//     */
//    bool isValidParentheses(string &s) {
//        // write your code here
//		stack<char> stk;
//		for( auto ch : s ){
//			if( ch == '(' || ch == '[' || ch == '{' ){
//				stk.push( ch );
//			} else {
//				if( ch == '}' ){
//					if( stk.size() == 0 || stk.top() != '{' )
//						return false;
//					stk.pop();
//				} else if ( ch == ']' ){
//					if( stk.size() == 0 || stk.top() != '[' )
//						return false;
//					stk.pop();
//				} else {
//					if( stk.size() == 0 || stk.top() != '(' )
//						return false;
//					stk.pop();
//				}
//			}
//		}
//		if( !stk.empty() )
//			return false;
//		return true;
//    }
//};