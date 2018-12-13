//// 简单的动态规划题
//// 题目要求最多不能超过两个柱子连续颜色相同
//// 也就是最多可以有两个柱子连续颜色相同
//// 设 count[i] 为一共有 i 个柱子的解决方案
//// i 个柱子的方案，分为两个情况
//// 第一种情况，第 i 个柱子和第 i-1 个柱子颜色相同
//// 则第 i 个和第 i-1 个柱子只需要与第 i-2 个柱子颜色不同即可
//// 共有 k-1 个颜色，所以当前情况数为 (k-1) * count[i-2]
//// 第二种情况，第 i 个柱子的颜色与第 i-1 个柱子的情况不同
//// 所以第 i 个柱子只需要与第 i-1 个柱子的颜色不同即可
//// 共有 k-1 个颜色，所以这个情况数为 (k-1) * count[i-1]
//// 综上 count[i] = (k-1)( count[i-1] + count[i-2] )
//// 明显为斐波那契数列
//// 其中 count[1] = k, count[2] = k * k
//
//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param n: non-negative integer, n posts
//     * @param k: non-negative integer, k colors
//     * @return: an integer, the total number of ways
//     */
//    int numWays(int n, int k) {
//        // write your code here
//		if( n == 1 )
//			return k;
//		if( n == 2)
//			return k * k;
//		int count[2] = { k, k * k };
//		n -= 2;
//		int nTemp;
//		while( n-- ){
//			nTemp =( k - 1 ) * ( count[0] + count[1] );
//			count[0] = count[1];
//			count[1] = nTemp;
//		} 
//		return count[1];
//    }
//};
