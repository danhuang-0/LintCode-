//// 用数列求和公式，求出总和
//// 然后挨个减掉，剩下的就是
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: An array of integers
//     * @return: An integer
//     */
//    int findMissing(vector<int> &nums) {
//        // write your code here
//
//		int nSum = ( 0 + nums.size() ) * ( nums.size()+1 ) / 2;
//		for( auto num : nums )
//			nSum -= num;
//		return nSum;
//    }
//};
//
//int main(){
//
//	int arr[] = { 0,1,3 };
//	Solution s;
//	s.findMissing( vector<int>( begin(arr), end(arr)));
//
//	return 0;
//}