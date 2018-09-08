//#include <iostream>
//#include <map>
//#include <set>
//#include <string>
//#include <sstream>
//using namespace std;
//
//int main (){
//
//	string strStartVer, strTargetVer;
//	cin >> strStartVer >> strTargetVer;
//
//	map<string, set<pair<string, int>>> targetMap;
//	
//	string strLine;
//	string strStart, strTarget;
//	int nSize;
//	while( getline( cin, strLine) ){
//		istringstream iss( strLine );
//		iss>> strStart >> strTarget >> nSize;
//		auto ite = targetMap.find( strTarget );
//		if( ite==targetMap.end() ){
//			targetMap[strTarget] = set<pair<string, int>>();
//		targetMap[strTarget].insert( pair<string, int>(strStart, nSize));
//	}
//
//	auto ite = targetMap.find( strStartVer );
//	while( ite!=targetMap.end() ){
//	
//		
//
//		if( ite->first == strTargetVer ){
//			break; 
//		}
//	}
//
//	return 0;
//}