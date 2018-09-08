//#include <iostream>
//#include <map>
//
//using namespace std;
//
//int main (){
//
//	int n, k;
//	cin>>n>>k;
//	map<int, int> mapSelect;
//	map<int, int> mapOutput;
//	int nTemp ;
//
//	for(int i=0; i<n; i++){
//		cin>>nTemp;
//		if( mapSelect.size() == k ){
//			if(  nTemp < mapSelect.rbegin()->first  ){
//				mapSelect.erase ( mapSelect.rbegin()->first );
//				mapSelect.insert( pair<int, int>(nTemp, i));
//			}
//		} else {
//			mapSelect.insert(pair<int, int>(nTemp, i));
//		}
//	}
//
//	for( auto ite=mapSelect.begin(); ite!=mapSelect.end(); ite++ ){
//		mapOutput.insert(pair<int, int>( ite->second, ite->first));
//	}
//	for( auto ite=mapOutput.begin(); ite!=mapOutput.end(); ite++ ){
//		cout<<ite->second<<endl;
//	}
//
//	return 0;
//}