//#include <iostream>
//
//using namespace std;
//
//int findApple( int arr[], int nLength, int nTarget )
//{
//	int nLeft = 1;
//	int nRight = nLength;
//	int nMid = (nLeft+nRight)/2;
//
//	while( !(arr[nMid]>=nTarget && arr[nMid-1]<nTarget) )
//	{
//		if( arr[nMid] < nTarget) {
//			nLeft = nMid+1;
//			nMid = (nLeft+nRight)/2;
//		} else if( arr[nMid-1] > nTarget )
//		{	
//			nRight = nMid-1;
//			nMid = (nLeft+nRight)/2;
//		}
//	}
//	return nMid;
//}
//
//int main(){
//
//	int arr[10001]={0};
//	int n, m;
//	cin>>n;
//	int nTemp;
//	for ( int i=1; i<=n; i++){
//		cin>>nTemp;
//		arr[i] = arr[i-1] + nTemp;
//	}
//	cin>>m;
//	for( int i=0; i<m; i++ ){
//		cin>>nTemp;
//		cout<<findApple(arr, n, nTemp)<<endl;
//	}
//	return 0;
//}