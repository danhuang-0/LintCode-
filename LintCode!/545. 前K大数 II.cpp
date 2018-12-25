//// 和上一道题一样，利用 set 底层的红黑树自动排序的特性
//
//#include <iostream>
//#include <set>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//    * @param k: An integer
//    */
//	multiset<int> m_maxSet;
//	int m_nK;
//	Solution(int k) {
//        // do intialization if necessary
//		m_maxSet = multiset<int>();
//		m_nK = k;
//    }
//
//    /*
//     * @param num: Number to be added
//     * @return: nothing
//     */
//    void add(int num) {
//        // write your code here
//		if( m_maxSet.size() < m_nK )
//			m_maxSet.insert( num );
//		else {
//			if( num > *m_maxSet.begin() ){
//				m_maxSet.erase( m_maxSet.begin() );
//				m_maxSet.insert( num );
//			}
//		}
//    }
//
//    /*
//     * @return: Top k element
//     */
//    vector<int> topk() {
//        // write your code here
//		vector<int> vecRet( m_maxSet.size() );
//		int nIndex = 0;
//		auto rite = m_maxSet.rbegin();
//		while( rite != m_maxSet.rend() )
//			vecRet[nIndex++] = *rite++;
//		return vecRet;
//    }
//};