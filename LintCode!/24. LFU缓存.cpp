//// %60 的地方数据不对
//// 这里采用的局部队列来淘汰计数相同的选项
//// 怀疑是底层红黑树旋转的时候破坏了局部队列的顺序
//// 暂时先不修改了
//
//#include <iostream>
//#include <map>
//#include <unordered_map>
//
//using namespace std;
//
//class LFUCache {
//public:
//    /*
//    * @param capacity: An integer
//    */
//	int m_nMaxCapacity;
//	multimap<int, int> m_mapCount2Key;
//	unordered_map<int, int> m_mapKey2Count;
//	unordered_map<int, int> m_mapKey2Value;
//	LFUCache(int capacity) {
//        // do intialization if necessary
//		m_nMaxCapacity = capacity;
//		m_mapCount2Key = multimap<int, int>();
//		m_mapKey2Count = unordered_map<int, int>( capacity );
//		m_mapKey2Value = unordered_map<int, int>( capacity );
//    }
//
//    /*
//     * @param key: An integer
//     * @param value: An integer
//     * @return: nothing
//     */
//
//	void insert2Count2KeyMap( int count, int key ){
//		int nCountOfCount = m_mapCount2Key.count( count );
//		if( nCountOfCount == 0 ){
//			m_mapCount2Key.insert(
//				multimap<int, int>::value_type( count, key));
//		} else {
//			auto iteCount2Key = m_mapCount2Key.find( count);
//			for( int i=0; i<nCountOfCount-1; i++ )
//				iteCount2Key ++;
//			m_mapCount2Key.insert( iteCount2Key,
//				multimap<int, int>::value_type( count, key));
//		}
//	}
//
//    void set(int key, int value) {
//        // write your code here
//		auto iteKey2Count = m_mapKey2Count.find( key );
//		if( iteKey2Count != m_mapKey2Count.end() ){
//			auto iteCount2Key = m_mapCount2Key.find( iteKey2Count->second );
//			while( iteCount2Key->second != key )
//				iteCount2Key++;
//			m_mapCount2Key.erase( iteCount2Key );
//
//			m_mapKey2Value[key] = value ;
//			m_mapKey2Count[key]++;
//
//			insert2Count2KeyMap( m_mapKey2Count[key], key );
//			
//			return;
//		}
//		if( m_mapKey2Value.size() == m_nMaxCapacity ){
//			auto iteCount2Key = m_mapCount2Key.begin();
//			m_mapKey2Value.erase(
//				m_mapKey2Value.find( iteCount2Key->second ));
//			m_mapKey2Count.erase(
//				m_mapKey2Count.find( iteCount2Key->second ));
//			m_mapCount2Key.erase( iteCount2Key );
//		}
//		m_mapKey2Count[key] = 1;
//		m_mapKey2Value.insert( 
//			unordered_map<int, int>::value_type( key,value ));
//		insert2Count2KeyMap( 1, key );
//    }
//
//    /*
//     * @param key: An integer
//     * @return: An integer
//     */
//    int get(int key) {
//        // write your code here
//		auto ite = m_mapKey2Value.find(key);
//		if( ite == m_mapKey2Value.end() )
//			return -1;
//		
//		auto iteCount2Key = m_mapCount2Key.find( m_mapKey2Count[key] );
//		while( iteCount2Key->second != key )
//			iteCount2Key++;
//		m_mapCount2Key.erase( iteCount2Key );
//
//		m_mapKey2Count[key]++;
//		insert2Count2KeyMap( m_mapKey2Count[key], key );
//
//		return ite->second;
//    }
//};
//
//int main(){
//	
//	LFUCache cache( 105 );
//	cache.set(7, 28);
//	cache.set(7, 1);
//	cache.set(8, 15);
//	cache.get(6);
//	cache.set(10, 27);
//	cache.set(8, 10);
//	cache.get(8);
//	cache.set(6, 29);
//	cache.set(1, 9);
//	cache.get(6);
//	cache.set(10, 7);
//	cache.get(1);
//	cache.get(2);
//	cache.get(13);
//	cache.set(8, 30);
//	cache.set(1, 5);
//	cache.get(1);
//	cache.set(13, 2);
//	cache.get(12);
//
//	return 0;
//}