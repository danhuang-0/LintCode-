//// �� hashset ���в��Ҳ������ɱ�����
//// Ҫע����ҹ���ɾ������ΪҪ�󽻼����������߶��еĲ���
//
//#include <iostream>
//#include <unordered_set>
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
//		vector<int> vecRet;
//		unordered_multiset<int> setNums;
//		vector<int> *small, *big;
//		if( nums1.size() > nums2.size() ){
//			big = &nums1;
//			small = &nums2;
//		} else {
//			small = &nums1;
//			big = &nums2;
//		}
//		for( auto num : *small )
//			setNums.insert( num );
//		for( auto num : *big ){
//			auto findIte = setNums.find( num );
//			if(  findIte != setNums.end() ){
//				vecRet.push_back( num );
//				setNums.erase( findIte );
//			}
//		}
//		return vecRet;
//    }
//};