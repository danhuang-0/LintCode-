//#include <iostream>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param A: a list of integers
//     * @return : return an integer
//     */
//    int removeDuplicates(vector<int> &nums) {
//        // write your code here
//
//		map<int, int> mapCount;
//		auto ite = nums.begin();
//		while( ite != nums.end() ){
//			mapCount[ *ite ] ++;
//			if( mapCount[*ite] > 2 ){
//				ite = nums.erase( ite );
//			} else {
//				ite ++;
//			}
//		}
//		return nums.size();
//    }
//};