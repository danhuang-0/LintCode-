//// 无脑轮训，删除的时候优先解决轮训指针的问题
//// 删除操作可以用 HASH 做优化的，无脑撞过去了
//// 每次增删节点的之后让轮训指针从头开始
//// 防止 vector 变化引起迭代器失效
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class LoadBalancer {
//public:
//
//	vector<int> m_vecHosts;
//	vector<int>::iterator m_ite;
//    LoadBalancer() {
//        // do intialization if necessary
//		m_vecHosts = vector<int>();
//    }
//
//    /*
//     * @param server_id: add a new server to the cluster
//     * @return: nothing
//     */
//    void add(int server_id) {
//        // write your code here
//		m_vecHosts.push_back( server_id );
//		m_ite = m_vecHosts.begin();
//    }
//
//    /*
//     * @param server_id: server_id remove a bad server from the cluster
//     * @return: nothing
//     */
//    void remove(int server_id) {
//        // write your code here
//		auto ite = m_vecHosts.begin();
//		while( ite != m_vecHosts.end() && *ite != server_id )
//			ite ++;
//		if( ite != m_vecHosts.end() ){
//			m_vecHosts.erase(ite);
//			m_ite = m_vecHosts.begin();
//		}
//    }
//
//    /*
//     * @return: pick a server in the cluster randomly with equal probability
//     */
//    int pick() {
//        // write your code here
//		int nRet = *m_ite;
//		m_ite++;
//		if( m_ite == m_vecHosts.end() )
//			m_ite = m_vecHosts.begin();
//		return nRet;
//    }
//};
//
//
//int main(){
//
//	vector<int> vecCheck;
//	LoadBalancer lb;
//	lb.add(1);
//	lb.add(2);
//	lb.add(3);
//	lb.add(4);
//	lb.add(5);
//	lb.add(6);
//	vecCheck.push_back(lb.pick());
//	vecCheck.push_back(lb.pick());
//	vecCheck.push_back(lb.pick());
//	vecCheck.push_back(lb.pick());
//	lb.remove(1);
//	lb.remove(6);
//	vecCheck.push_back(lb.pick());
//	vecCheck.push_back(lb.pick());
//	vecCheck.push_back(lb.pick());
//	
//	lb.add(11);
//	lb.add(22);
//	lb.add(33);
//	lb.add(44);
//	lb.add(55);
//	lb.add(66);
//
//	lb.remove(11);
//	lb.remove(22);
//
//	vecCheck.push_back(lb.pick());
//	vecCheck.push_back(lb.pick());
//	vecCheck.push_back(lb.pick());
//	vecCheck.push_back(lb.pick());
//	vecCheck.push_back(lb.pick());
//	vecCheck.push_back(lb.pick());
//	vecCheck.push_back(lb.pick());
//	vecCheck.push_back(lb.pick());
//	vecCheck.push_back(lb.pick());
//	vecCheck.push_back(lb.pick());
//	vecCheck.push_back(lb.pick());
//	vecCheck.push_back(lb.pick());
//
//	return 0;
//}