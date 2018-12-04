//// ���������㲨��ʽ��ԭ��
//// ʹ��ջ���в���
//// ���������ŵ�ʱ��ջ���м��㲢ѹջ
//// �������־�ֱ��ѹջ�ȴ�����
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param tokens: The Reverse Polish Notation
//     * @return: the value
//     */
//    int evalRPN(vector<string> &tokens) {
//        // write your code here
//		stack<int> stk;
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
//};
//
//int main(){
//
//	//string arr[] = {"2", "1", "+", "3", "*"};
//	string arr[] = {"4", "13", "5", "/", "+"};
//	vector<string> vec( begin(arr), end(arr) );
//	Solution s;
//	s.evalRPN( vec );
//	return 0;
//}