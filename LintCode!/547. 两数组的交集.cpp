//// ֱ�Ӱ�һ�����鶪�� set ����
//// Ȼ��������һ����������ѯ����
//// �� hash_set ȥ�أ��� set ����
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