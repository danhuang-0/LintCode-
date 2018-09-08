//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main(){
//
//	int n;
//	cin>>n;
//	vector<int> arrA(n), arrB(n);
//	for( int i=0; i<n; i++)
//		cin>>arrA[i];
//	for( int i=0; i<n; i++){
//		cin>>arrB[i];
//	}
//	reverse( arrB.begin(), arrB.end() );
//	vector<vector<int>> vec;
//	vec.resize(n);
//	for( int i=0; i<n; i++)
//		vec[i] = vector<int>(n, 0);
//	for( int i=0; i<n; i++){
//		if( arrA[0] == arrB[i]  )
//			vec[0][i]++;
//	}
//
//	for( int i=1; i<n; i++ ){
//		if( arrA[i]==arrB[0] )
//			vec[i][0] = vec[i-1][0] + 1;
//		else
//			vec[i][0] = vec[i-1][0];
//		for( int j=1; j<n; j++ ){
//			if( arrA[i]==arrB[j] )
//				vec[i][j] =  max( vec[i-1][j], vec[i][j-1] ) + 1;
//			else
//				vec[i][j] =  max( vec[i-1][j], vec[i][j-1] );
//		}
//	}
//
//	cout<<vec[n-1][n-1]<<endl;
//	return 0;
//}