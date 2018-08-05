//#include <iostream>
//#include <stack>
//#include <mutex>
//
//using namespace std;
//
//
//class MinStack {
//private:
//	// 读写锁保护并发时两栈数据同步
//	mutex readWriteMutex;
//	stack<int> normalStack;
//	//最小堆栈实时存储当前最小值
//	stack<int> minStack;
//public:
//    MinStack() {
//        // do intialization if necessary
//    }
//
//    /*
//     * @param number: An integer
//     * @return: nothing
//     */
//    void push(int number) {
//        // write your code here
//
//		readWriteMutex.lock();
//
//		normalStack.push(number);
//		if ( minStack.size()==0 || number < minStack.top() )
//			minStack.push(number);
//		else
//			minStack.push(minStack.top());
//
//		readWriteMutex.unlock();
//    }
//
//    /*
//     * @return: An integer
//     */
//    int pop() {
//        // write your code here
//		
//		if( normalStack.size()==0 )
//			return -1; 
//
//		readWriteMutex.lock();
//
//		int num = normalStack.top();
//		normalStack.pop();
//		minStack.pop();
//		readWriteMutex.unlock();
//
//		return num;
//    }
//
//    /*
//     * @return: An integer
//     */
//    int min() {
//        // write your code here
//		
//		if ( normalStack.size()==0 )
//			return -1;
//
//		readWriteMutex.lock();
//
//		int min = minStack.top();
//
//		readWriteMutex.unlock();
//		return min;
//    }
//};
//
//int main(){
//
//	MinStack s;
//	s.push(1);
//	cout<<s.pop()<<endl;
//	s.push(2);
//	s.push(3);
//	cout<<s.min()<<endl;
//	s.push(1);
//	cout<<s.min()<<endl;
//
//	system("pause");
//	return 0;
//}