//// 很简单的DP，当前硬币数量是减掉任何一个硬币后的最少数量加一
//// 值得一提的是，他居然有0元的硬币卡数据，绝了
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param coins: a list of integer
//     * @param amount: a total amount of money amount
//     * @return: the fewest number of coins that you need to make up
//     */
//    int coinChange(vector<int> &coins, int amount) {
//        // write your code here
//		vector<int> vecDP( amount +1, -1 );
//		for( auto coin : coins )
//			if( coin <= amount )
//				vecDP[coin] = 1;
//		vecDP[0] = 0;
//		for( int i=1; i<amount+1; i++ ){
//			for( auto coin : coins ){
//				if( i-coin > 0 && vecDP[i-coin]!=-1 )
//					if( vecDP[i-coin] + 1 < vecDP[i] || vecDP[i]==-1 )
//						vecDP[i] = vecDP[i-coin] + 1;
//			}
//		}
//		return vecDP[amount];
//	}
//};
//
//int main(){
//
//	//int arr[] = {1,2,5};
//	int arr[] = {2};
//	vector<int> vecCoins( begin(arr), end(arr) );
//	Solution s;
//	s.coinChange( vecCoins, 11 );
//	return 0;
//
//}