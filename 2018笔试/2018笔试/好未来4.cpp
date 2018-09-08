//#include <iostream>
//
//using namespace std;
//
//int main(){
//	int n, m;
//	cin>>n>>m;
//	int nSum = 0;
//	int nTemp = 0;
//	for( int i=0; i<n; i++ ){
//		cin>>nTemp;
//		nSum += nTemp;
//	}
//	double numExpect = nSum*1.0 / n;
//	double probability = m * 1.0 / n;
//
//	double dRet = numExpect * ( 1 / (1-probability) );
//	printf("%.2f\n", dRet);
//}