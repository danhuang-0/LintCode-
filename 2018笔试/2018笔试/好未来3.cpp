//#include <iostream>
//#include <vector>
//#include <string>
//#include <sstream>
//#include <algorithm>
//
//using namespace std;
//
//void DFS( vector<int> bools, vector<int> temp, int level, vector<vector<int>> &vecRet ){
//	if( level==bools.size()){
//		vecRet.push_back(temp);
//		return;
//	}
//	if( bools[level]==0 )
//		DFS( bools, temp, level+1, vecRet);
//	temp.push_back(level);
//	DFS( bools, temp, level+1, vecRet);
//}
//
//int main (){
//
//	vector<int> bools;
//	string strLine;
//	getline( cin, strLine);
//
//	istringstream iss(strLine);
//    string temp;
//
//    while (getline(iss, temp, ' ')) {
//        bools.push_back(stoi(temp));
//    }
//
//	vector<vector<int>> vecRet;
//
//	DFS(bools, vector<int>(), 0, vecRet);
//
//	sort( vecRet.begin(), vecRet.end());
//
//	for( auto ite=vecRet.begin(); ite!=vecRet.end(); ite++ ){
//		for( auto ite2=ite->begin(); ite2!=ite->end(); ite2++)
//			cout<<*ite2;
//		cout<<endl;
//	}
//
//	return 0;
//}