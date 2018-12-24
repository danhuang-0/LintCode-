//// 直接利用 vector 自带的 iterator 来实现
//// 需要注意的是需要判断 v1 和 v2 是否为空
//// 只需要在初始化的时候判断 v1 是否为空即可
//// 如果 v1 为空，从 v2 开始，v2 为空 HasNext 直接会退出的
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class ZigzagIterator {
//public:
//    /*
//    * @param v1: A 1d vector
//    * @param v2: A 1d vector
//    */
//	vector<int>::iterator m_ite[2];
//	vector<int>::iterator m_end[2];
//	int m_nSelectIndex;
//	ZigzagIterator(vector<int>& v1, vector<int>& v2) {
//        // do intialization if necessary
//		m_ite[0] = v1.begin();
//		m_ite[1] = v2.begin();
//		m_end[0] = v1.end();
//		m_end[1] = v2.end();
//		m_nSelectIndex = 0;
//		if( m_ite[m_nSelectIndex] == m_end[m_nSelectIndex] )
//			m_nSelectIndex = 1-m_nSelectIndex;
//    }
//
//    /*
//     * @return: An integer
//     */
//    int next() {
//        // write your code here
//		int nRet = *m_ite[m_nSelectIndex];
//		m_ite[m_nSelectIndex]++;
//		if( m_ite[1-m_nSelectIndex] != m_end[1-m_nSelectIndex] )
//			m_nSelectIndex = 1 - m_nSelectIndex;
//		return nRet;
//    }
//
//    /*
//     * @return: True if has next
//     */
//    bool hasNext() {
//        // write your code here
//		return m_ite[m_nSelectIndex] != m_end[m_nSelectIndex];
//    }
//};
//
///**
// * Your ZigzagIterator object will be instantiated and called as such:
// * ZigzagIterator solution(v1, v2);
// * while (solution.hasNext()) result.push_back(solution.next());
// * Ouptut result
// */
//
//int main(){
//
//	int arr1[] = {1,2};
//	int arr2[] = {3,4,5,6};
//	vector<int> vec1 = vector<int>(begin(arr1), end(arr1));
//	vector<int> vec2 = vector<int>(begin(arr2), end(arr2));
//	vector<int> result;
//	ZigzagIterator solution(vec1, vec2);
//	while (solution.hasNext())
//		result.push_back(solution.next());
//
//	return 0;
//}