//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main(){
//	int numOfPerson, personPerBus;
//	cin >> numOfPerson >> personPerBus;
//	vector<int> vecPerson( numOfPerson );
//	for(int i=0; i<numOfPerson; i++ ){
//		cin >> vecPerson[i];
//	}
//	bool divisible = numOfPerson % personPerBus == 0;
//	int nPrintLoc = divisible? numOfPerson/personPerBus-1 : numOfPerson/personPerBus ;
//	bool isOneGroup = nPrintLoc==0;
//	if( isOneGroup ){
//		for( int i=0; i<numOfPerson; i++ ){
//			cout << vecPerson[i];
//			if( i==numOfPerson-1 )
//				cout << endl;
//			else
//				cout << " ";
//		}
//		return 0;
//	}
//	for( int i=0; i<numOfPerson % personPerBus; i++)
//		cout << vecPerson[ nPrintLoc * personPerBus + i ] << " ";
//	for(int i=0; i<nPrintLoc; i++){
//		for( int j=0; j<personPerBus; j++){
//			cout << vecPerson[ i * personPerBus + j ];
//			if( i == nPrintLoc - 1 && j == personPerBus - 1 )
//				cout << endl;
//			else
//				cout << " ";
//		}
//	}	
//	system("pause");
//	return 0;
//}