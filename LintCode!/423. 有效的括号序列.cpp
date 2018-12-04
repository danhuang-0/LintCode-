//// ������ջ�ͺ�
//// ������ѹջ��������ƥ�䵯ջ����ƥ�䱨��
//// ���ջ��Ϊ��׼���
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