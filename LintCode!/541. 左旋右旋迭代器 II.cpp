//// 还是储存 vector 自带的迭代器拿来使用就好了
//// 当一个迭代器没有下一个的时候，取出下一个迭代器，并移除上一个迭代器
//// 如果最后迭代器数组里面没有迭代器了，说明没有下一个了
//// 做的有点不优雅，后续考虑用模板编程
//
//#include <vector>
//
//using namespace std;
//
//class ZigzagIterator2 {
//public:
//    /*
//    * @param vecs: a list of 1d vectors
//    */
//	typedef pair<vector<int>::iterator, vector<int>::iterator> ite_t;
//	vector<ite_t> m_vecIte;
//	vector<ite_t>::iterator m_iteSelect;
//
//	ZigzagIterator2(vector<vector<int>>& vecs) {
//        // do intialization if necessary
//		for( auto ite = vecs.begin(); ite!=vecs.end(); ite++ ){
//			if( ite->size() ){
//				m_vecIte.push_back( ite_t( ite->begin(), ite->end() ) );				
//			}
//		}
//		m_iteSelect = m_vecIte.begin();
//    }
//
//    /*
//     * @return: An integer
//     */
//    int next() {
//        // write your code here
//		int nRet = *(m_iteSelect->first);
//		(m_iteSelect->first)++;
//		if( m_iteSelect->first == m_iteSelect->second )
//			m_iteSelect = m_vecIte.erase(m_iteSelect);
//		else
//			m_iteSelect++;
//		if( m_iteSelect == m_vecIte.end() )
//			m_iteSelect = m_vecIte.begin();
//		return nRet;
//    }
//
//    /*
//     * @return: True if has next
//     */
//    bool hasNext() {
//        // write your code here
//		return m_vecIte.size();
//    }
//};
//
//int main(){
//	int arr1[] = {1,2,3};
//	int arr2[] = {4,5,6,7};
//	int arr3[] = {8,9};
//	vector<vector<int>> vecNums;
//	vecNums.push_back( vector<int>(begin(arr1), end(arr1)));
//	vecNums.push_back( vector<int>(begin(arr2), end(arr2)));
//	vecNums.push_back( vector<int>(begin(arr3), end(arr3)));
//
//	vector<int> result;
//	ZigzagIterator2 solution(vecNums);
//	while (solution.hasNext()) result.push_back(solution.next());
//
//	result;
//	return 0;
//}
