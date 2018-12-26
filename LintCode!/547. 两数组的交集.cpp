//// 直接把一个数组丢到 set 里面
//// 然后再用另一个数组做查询操作
//// 用 hash_set 去重，用 set 排序
//
//#include <iostream>
//#include <vector>
//#include <unordered_set>
//#include <set>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums1: an integer array
//     * @param nums2: an integer array
//     * @return: an integer array
//     */
//    vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
//        // write your code here
//		unordered_set<int> setNums;
//		set<int> setRet;
//		vector<int> vecRet;
//		for( auto num : nums1 )
//			setNums.insert(num);
//		for( auto num : nums2 )
//			if( setNums.find(num) != setNums.end() ){
//				setRet.insert( num );
//			}
//		for( auto num : setRet )
//			vecRet.push_back( num );
//		return vecRet;
//    }
//};