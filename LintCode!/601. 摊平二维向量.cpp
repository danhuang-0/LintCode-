//// 直接利用 iterator 记录每个数组的收尾，轮流去遍历即可
//// 需要注意有可能传入空值
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Vector2D {
//public:
//
//	typedef pair<vector<int>::iterator, vector<int>::iterator> _ite;
//	vector<_ite> m_vecItes;
//	vector<_ite>::iterator m_ite;
//    Vector2D(vector<vector<int>>& vec2d) {
//        // Initialize your data structure here
//		m_vecItes = vector<_ite>();
//		for( auto & vec : vec2d ) 
//			m_vecItes.push_back( _ite(vec.begin(), vec.end()));
//		m_ite = m_vecItes.begin();
//    }
//
//    int next() {
//        // Write your code here
//		int nRet = *(m_ite->first);
//		(m_ite->first)++;
//		while( m_ite->first == m_ite->second )
//			m_ite++;
//		return nRet;
//    }
//
//    bool hasNext() {
//        // Write your code here
//		while( m_ite != m_vecItes.end() && m_ite->first == m_ite->second )
//			m_ite++;
//		return m_ite != m_vecItes.end();
//    }
//};
//
///**
// * Your Vector2D object will be instantiated and called as such:
// * Vector2D i(vec2d);
// * while (i.hasNext()) cout << i.next();
// */
//
//int main(){
//
//	Vector2D vec = Vector2D(vector<vector<int>>());
//	while( vec.hasNext() )
//		cout << vec.next()<< endl;
//	return 0;
//}