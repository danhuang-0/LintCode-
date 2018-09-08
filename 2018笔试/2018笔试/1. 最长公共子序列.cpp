//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main(){
//	
//	string str1, str2;
//	cin >> str1 >> str2;
//	vector< vector<int> > vecDP( str1.size(), vector<int>(str2.size()) );
//	
//	int nLeft = 0;
//	int nUp = 0;
//	int nMax = 0;
//	for( int i=0; i<str1.size(); i++ ){
//		for( int j=0; j<str2.size(); j++ ){
//			if( i-1 >= 0 && j-1 >= 0)
//				vecDP[i][j] = vecDP[i-1][j-1] + 1;
//			else
//				vecDP[i][j] = 1;
//			
//			if( str1[i] != str2[j] ){
//				vecDP[i][j] = 0;
//			}
//			if( vecDP[i][j] > nMax )
//				nMax = vecDP[i][j];
//		}
//	}
//	cout << nMax << endl;
//	return 0;
//}