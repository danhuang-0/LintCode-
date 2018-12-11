//// 既然允许使用其他的数据结构
//// 就直接丢给 vector 好了
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Stack {
//public:
//    /*
//     * @param x: An integer
//     * @return: nothing
//     */
//	vector<int> m_vec;
//    void push(int x) {
//        // write your code here
//		m_vec.push_back( x );
//    }
//
//    /*
//     * @return: nothing
//     */
//    void pop() {
//        // write your code here
//		m_vec.pop_back();
//    }
//
//    /*
//     * @return: An integer
//     */
//    int top() {
//        // write your code here
//		return m_vec.back();
//    }
//
//    /*
//     * @return: True if the stack is empty
//     */
//    bool isEmpty() {
//        // write your code here
//		return m_vec.empty();
//    }
//};