#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

struct Info {
	int nHostID;
	string strInfo;
};

struct Cmd{
	string strSearch;
	int nHostID;
	int nBefore;
	int nAfter;
};

int main (){
	
	int nCountOfLog;
	cin >> nCountOfLog;
	map<string, Info> mapInfos;

	while( nCountOfLog -- ){
		string strDate;
		Info info;
		//2018.09.01-13:00:00 101 helloworld
		cin >> strDate >> info.nHostID >> info.strInfo;
		mapInfos[strDate] = info;
	}

	int nCountOfSearch;
	cin >> nCountOfSearch;
	while( nCountOfSearch -- ){
		int nCountOfCmd;
		cin >> nCountOfCmd;
		//4
		//--search come
		//--hostid 101
		//--before 2
		//--after 5
		Cmd cmd = {"", 0, 0, 0 };
		string strCmd;
		while( nCountOfCmd-- ){
			cin >> strCmd;
			if( strCmd == "--search" )
				cin >> cmd.strSearch;
			else if ( strCmd == "--hostid" )
				cin >> cmd.nHostID;
			else if( strCmd == "--before" )
				cin >> cmd.nBefore;
			else 
				cin >> cmd.nAfter;
		}
		bool isFind = false;
		if( cmd.strSearch == "" ){
			cout << "ERROR" << endl;
			continue;
		}
		for( auto ite=mapInfos.begin(); ite!=mapInfos.end(); ite ++ ){
			if( cmd.nHostID!=0 && ite->second.nHostID != cmd.nHostID )
				continue;
			if( ite->second.strInfo.find( cmd.strSearch ) != string::npos ){
				isFind = true;
				if( cmd.nBefore != 0 ){
					auto ite2 = ite;
					while( ite2 != mapInfos.begin() && cmd.nBefore-- )
						ite2--;
					while( ite2 != ite ){
						cout << ite2->second.strInfo<<endl;
						ite2++;
					}
				}
				cout << ite->second.strInfo<<endl;
				if( cmd.nAfter != 0 ){
				auto ite2 = ite;
					while( ite2 != --mapInfos.end() && cmd.nAfter-- )
						ite2++;
					while( ite2 != ite ){
						cout << ite2->second.strInfo<<endl;
						ite2--;
					}
				}
				break;
			}
		}
		if( !isFind )
			cout << "ERROR" << endl;
	}

	return 0;

}