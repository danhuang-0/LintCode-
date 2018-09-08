//#include <iostream>
//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//struct Node {
//	int nValue;
//	int nCount;
//};
//
//map< int, Node > mapNodes;
//set< int > isOver;
//
//bool compare( int a, int b){
//	return mapNodes[a].nCount > mapNodes[b].nCount;
//}
//
//void DFS( int &nCount, int i, vector<list<int>> &vecList){
//	isOver.erase( i );
//	nCount++;
//
//	for( auto ite=vecList[i].begin(); ite!=vecList[i].end(); ite++ ){
//		if( isOver.find(*ite) != isOver.end() ){
//			DFS( nCount, *ite, vecList );
//		}
//	}
//	
//	if( isOver.size() > 0 )
//		nCount ++;
//}
//
//int main(){
//	
//	int n;
//	cin >> n;
//
//	vector<list<int>> vecList(n);
//	
//	for( int i=0; i<n; i++ ){
//		mapNodes[i].nValue = i;
//		mapNodes[i].nCount = 0;
//		isOver.insert(i);
//	}
//	
//	int nFrom, nTo;
//	for( int i=0; i<n-1; i++ ){
//		cin >> nFrom >> nTo;
//		nFrom--;nTo--;
//		vecList[nFrom].push_back(nTo);
//		vecList[nTo].push_back(nFrom);
//		mapNodes[nFrom].nCount ++;
//		mapNodes[nTo].nCount ++;
//	}
//
//	for( auto ite=vecList.begin(); ite!=vecList.end(); ite++ )
//		sort( ite->begin(), ite->end(), compare);
//
//	int nCount = 0;
//	
//	DFS( nCount, 0, vecList );
//
//	cout << nCount << endl;
//}