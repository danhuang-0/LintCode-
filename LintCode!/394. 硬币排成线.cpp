//// 如果不是三的倍数
//// 第一个人可以一把拿到 3 的倍数
//// 然后第二个人拿 1 他就拿 2 ，第二个人拿 2 他就拿 1
//// 可以保证先手必胜
//// 但是如果开始就是 3 的倍数，无论先手怎么拿，后手都可以压制回去
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: An integer
//     * @return: A boolean which equals to true if the first player will win
//     */
//    bool firstWillWin(int n) {
//        // write your code here
//        return n%3 != 0;
//    }
//};