//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main(){
//	int n, nTemp;
//	vector<vector<int>> vecPerson( 2 );
//	cin >> n;
//	for( int i=0; i<n; i++ ){
//		cin>> nTemp;
//		vecPerson[0].push_back(nTemp);
//	}
//	if( vecPerson[0].size() == 0 ){
//		cout << 0 << endl;
//		return 0;
//	}
//	int curVec = 0;
//	int nextVec = 1;
//	bool isOver = false;
//	int nCount = 0;
//	while( !isOver ){
//		vecPerson[ nextVec ] = vector<int>();
//		vecPerson[nextVec].push_back( vecPerson[curVec][0] );
//
//		bool hasKill = false;
//		for( int i=1; i<vecPerson[curVec].size() ;i++ ){
//			if( vecPerson[curVec][i] > vecPerson[curVec][i-1] )
//				vecPerson[nextVec].push_back(vecPerson[curVec][i]);
//			else
//				hasKill = true;
//		}
//		isOver = !hasKill;
//		if( hasKill )
//			nCount ++ ;
//		curVec = 1 - curVec;
//		nextVec = 1 - nextVec;
//	}
//	cout << nCount << endl;
//	return 0;
//}