//#include <iostream>
//
//using namespace std;
//
//int main(){
//	
//	int n, x, y;
//	
//	cin>>n;
//	cin>>x>>y;
//	int nLeft = x, nRight = x;
//	int nTop = y, nBottom = y;
//	for(int i=1; i<n; i++){
//		cin>>x>>y;
//		if( x<nLeft )
//			nLeft = x;
//		if( x>nRight )
//			nRight = x;
//		if( y > nTop )
//			nTop = y;
//		if( y<nBottom )
//			nBottom = y;
//	}
//	int nMax = nRight-nLeft;
//	if( nTop-nBottom > nMax )
//		nMax = nTop-nBottom;
//	long long s = nMax*nMax;
//	cout<<s<<endl;
//	return 0;
//}