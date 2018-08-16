//#include <stack>
//
//using namespace std;
//
//class MyQueue {
//public:
//        MyQueue() {
//            // do intialization if necessary
//        }
//
//        /*
//         * @param element: An integer
//         * @return: nothing
//         */
//
//        stack<int> inputStack;
//        stack<int> outputStack;
//
//
//        void push(int element) {
//            // write your code here
//            inputStack.push(element);
//        }
//
//        /*
//         * @return: An integer
//         */
//        int pop() {
//            // write your code here
//            if( outputStack.size()==0 ){
//                int nTemp;
//                while(inputStack.size()!=0){
//                    nTemp = inputStack.top();
//                    inputStack.pop()
//                    outputStack.push(nTemp)
//                }
//            }
//            int nRet = outputStack.top();
//            outputStack.pop();
//            return nRet;
//        }
//        /*
//         * @return: An integer
//         */
//        int top() {
//            // write your code here
//            if( outputStack.size()==0 ){
//                int nTemp;
//                while(inputStack.size()!=0){
//                    nTemp = inputStack.top();
//                    inputStack.pop();
//                    outputStack.push(nTemp);
//                }
//            }
//            return outputStack.top();
//        }
//};