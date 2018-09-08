//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int getNum( char c ){
//	if( c>='0' && c<='9' )
//		return c-'0';
//	return c - 'A' + 10;
//}
//
//int main(){
//
//	int T;
//	cin >> T;
//	int X, Y;
//	string Z;
//	while( T-- ){
//		cin >> X >> Y >> Z;
//		bool findStart = false;
//		int nLeft = 0;
//		int nRight = Z.size();
//		int nMid =  (nLeft + nRight )/2;
//		string strX, strY;
//		int x, y;
//		int xDigit, yDigit;
//		while( !findStart ){
//			x = 0;
//			y = 0;
//			strX  = Z.substr(0, nMid );
//			strY = Z.substr( nMid );
//			xDigit = 1;
//			yDigit = 1;
//			for( int i = strX.size()-1; i!=-1; i-- ){
//				x += getNum( strX[i] ) * xDigit;
//				xDigit *= X;
//			}
//
//			for( int i = strY.size()-1; i!=-1; i-- ){
//				y += getNum( strY[i] ) * yDigit;
//				yDigit *= Y;
//			}
//			if( x>0 && y>0 )
//				findStart = true;
//			else if ( x < 0 ){
//				nLeft = nMid + 1;
//				nMid = (nLeft + nRight)/2;
//			} else {
//				nRight = nMid - 1;
//				nMid = (nLeft + nRight)/2;
//			}
//		}
//		while( x != y ){
//			if( x > y ){
//				
//				y += getNum( Z[ nMid-1 ] ) * yDigit;
//				yDigit *= Y;
//				x -= getNum( Z[ nMid-1 ] );
//				x /= X;
//				nMid --;
//			} else {
//				yDigit /= Y;
//				y -= getNum( Z[nMid] ) * yDigit;
//				x *= X;
//				x += getNum( Z[nMid] );
//				nMid ++;
//			}
//		}
//		cout << x << endl;
//	}
//
//}