//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param nums: An ineger array
//     * @return: An integer
//     */
//    int removeDuplicates(vector<int> &nums) {
//        // write your code here
//		if( nums.size()==0 )
//			return 0;
//		int nLast = nums[0];
//		auto ite = nums.begin();
//		ite ++;
//		while( ite != nums.end() ){
//			if( *ite == nLast ){
//				ite = nums.erase( ite );
//			} else {
//				nLast = *ite;
//				ite ++;
//			}
//		}
//		return nums.size();
//    }
//};