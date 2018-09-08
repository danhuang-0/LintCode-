//#include <iostream>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//int main (){
//
//	int n, m, d;
//	cin >> n >> m >> d;
//
//	vector<int> vecSize(m);
//	for( int i=0; i<m; i++ )
//		cin >> vecSize[m];
//	vector<vector<int>> vec(n);
//	map<int, int> loadMap;
//	for( int i=0; i<n; i++ ){
//		int nSize;
//		cin >> nSize;
//		vec[i].resize(nSize);
//		int nLoad = 0;
//		for( int j=0; j<nSize; j++ ){
//			cin >> vec[i][j];
//			nLoad += vec[i][j];
//		}
//		loadMap[nLoad] = i;
//	}
//	while(1){
//		auto min = loadMap.begin();
//		loadMap.erase(min);
//		auto max = loadMap.end()--;
//		loadMap.erase(max);
//
//		
//		loadMap[min->first] = min->second;
//		loadMap[max->first] = max->second;
//	}
//	return 0;
//}