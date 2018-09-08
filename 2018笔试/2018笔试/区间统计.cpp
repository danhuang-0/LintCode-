//#include <iostream>	
//#include <vector>
//#include <map>
//#include <set>
//
//using namespace std;
//
//int main (){
//
//	int n, k, t;
//	cin >> n >> k >> t;
//	
//	if( t > k ) {
//		cout << 0 << endl;
//		return 0;
//	}
//	vector<int> vecNums ( n );
//	for( int i=0; i<n; i++ )
//		cin >> vecNums[i];
//	map<int, int> mapCount;
//	set<int> okSet;
//	int nCount = 0;
//	for( int i=0; i<k; i++ )
//		mapCount[ vecNums[i] ]++;
//	for( auto ite=mapCount.begin(); ite!=mapCount.end(); ite++ ){
//		if( ite->second >= t ){
//			okSet.insert( ite->first );
//		}
//	}
//	if( okSet.size() > 0 )
//		nCount ++ ;
//	
//	for( int i=k; i<n; i++ ){
//		mapCount[ vecNums[i] ]++;
//		if( mapCount[vecNums[i]] >= t )
//			okSet.insert( vecNums[i] );
//		mapCount[ vecNums[i-k] ]--;
//		if( mapCount[vecNums[i-k]] < t ){
//			auto ite = okSet.find( vecNums[i-k]);
//			if( ite!=okSet.end() )
//				okSet.erase( ite );
//		}
//		if( okSet.size() > 0 )
//			nCount ++;
//	}
//	cout << nCount << endl;
//	return 0;
//}