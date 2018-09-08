//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int main (){
//	int m, n;
//	cin>>m>>n;
//	vector<int> vecPrime;
//	int nStart = m%2==0? m+1 :m;
//	if( nStart < 3 )
//		nStart = 3;
//	 找出所有的素数
//	for( int i=nStart; i<=n; i+=2 ){
//		int half = sqrt( i );
//		bool isPrime = true ;
//		for( int j=3; j<=half; j++ ){
//			if( i%j == 0 ){
//				isPrime = false;
//				break;
//			}
//		}
//		if( isPrime ){
//			vecPrime.push_back( i );
//		}
//	}
//	两个素数最少差2 直接找下一个输出就行了
//	bool isFind = false;
//	for( auto ite=vecPrime.begin(); ite!=vecPrime.end(); ite++ ){
//		if( ite+1 != vecPrime.end() ){
//			if( *ite == *(ite+1)-2 ){
//				if( isFind )
//					cout<<" ";
//				cout<<*ite<<" "<<*(ite+1);
//				isFind = true;
//			}
//		}
//	}
//	if( !isFind ){
//		cout<<"no"<<endl;
//	}
//	return 0;
//}