//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int main(){
//	int T;
//	cin >> T;
//	while( T-- ){
//		int n,X;
//		cin >> n >> X;
//		double dAverage = 0;
//		vector<int> vecScore(n);
//		for( int i=0; i<n; i++ ){
//			cin >> vecScore[i];
//			dAverage += vecScore[i] * 1.0 / n; 
//		}
//		if( dAverage - X > 1e-6 ){
//			cout << 0 << endl;
//		}
//		sort( vecScore.begin(), vecScore.end() );
//		int nCount = 0 ;
//		while( dAverage - X < 1e-6 ){
//			dAverage += (100-vecScore[nCount++]) *1.0 / n;
//		}
//		cout << nCount << endl;
//	}
//}