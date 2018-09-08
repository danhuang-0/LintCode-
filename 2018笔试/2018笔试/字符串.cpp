//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main (){
//
//	int T;
//	cin >> T;
//	while( T-- ){
//		string strInput;
//		cin >> strInput;
//		int nCount = 1;
//		for( int i=1; i<strInput.size(); i++ ){
//			if( strInput[i] == strInput[i-1] + 1 )
//				nCount ++;
//			else {
//				if( nCount >= 4 ){
//					string last = strInput.substr( i-1 ); 
//					strInput[ i-nCount+1 ] = '-';
//					strInput.replace(i-nCount+2, last.size(), last);
//					strInput.resize( strInput.size() - (nCount-3) );
//					i -= nCount - 3;
//				} 
//				nCount = 1; 
//			}
//		}
//
//		if( nCount >= 4 ){
//			string last = strInput.substr( strInput.size()-1 );
//			strInput[ strInput.size() - nCount + 1 ] = '-';
//			strInput.replace(strInput.size()-nCount+2, last.size(), last);
//			strInput.resize( strInput.size() - (nCount-3) );
//		}
//	
//		cout<<strInput<<endl;
//	}
//	return 0;
//}