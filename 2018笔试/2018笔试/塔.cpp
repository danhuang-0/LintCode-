//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct cure{
//	int num;
//	int high;
//};
//
//int compare( cure a, cure b ){
//	return a.high < b.high;
//}
//
//int main(){
//
//	int n, k;
//	cure arr[10000];
//	cin>>n>>k;
//	int nSum = 0;
//	for( int i=0; i<n; i++)
//	{
//		arr[i].num = i;
//		cin>>arr[i].high;
//		nSum += arr[i].high;
//	}
//	if ( nSum%n==0 ){
//		cout<<0<<" ";
//	}
//	int nAveage = nSum%n==0?nSum/n:nSum/n + 1;
//	nSum = 0;
//	sort(arr, arr+n, compare);
//	for( int i=0; i<n; i++){
//		if (arr[i].high>nAveage){
//			nSum += arr[i].high - nAveage;
//		}
//	}
//	cout<<nSum<<endl;
//	
//	int m = 0;
//	while ( m++ < k  ){
//		arr[n-1].high -= 1;
//		arr[0].high += 1; 
//		cout<<arr[n-1].num+1<<" "<<arr[0].num+1<<endl;
//		sort(arr, arr+n, compare);
//		if (arr[n-1].high - arr[0].high <= 1){
//			break;
//		}
//	}
//	return 0;
//}