//// 维持这到现在为止的最小价格，和最大收入就好了
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param prices: Given an integer array
//     * @return: Maximum profit
//     */
//    int maxProfit(vector<int> &prices) {
//        // write your code here
//
//		if( prices.size()==0 )
//			return 0;
//
//		int lowPrice = prices[0];
//		int maxIncome = 0;
//		for( int i=1; i<prices.size(); i++ ){
//			if( prices[i] - lowPrice > maxIncome )
//				maxIncome = prices[i] - lowPrice;
//			if( prices[i] < lowPrice )
//				lowPrice = prices[i];
//		}
//		return maxIncome;
//    }
//};
//
//int main (){
//
//	int arr[] = {3,2,3,1,2};
//
//	vector<int> vecNums( begin(arr), end(arr));
//	
//	Solution s;
//	s.maxProfit( vecNums );
//
//	return 0;
//}