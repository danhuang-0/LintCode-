//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main(){
//
//	string str;
//	cin>>str;
//	vector<int> nums;
//	char szTemp[10];
//	for(auto ite=str.begin(); ite!=str.end(); ite++){
//		sprintf(szTemp,"%c", *ite);
//		nums.push_back(stoi(szTemp));
//	}
//
//	int nSum = 0;
//	for( auto ite=nums.begin(); ite!=nums.end();){
//		if( *ite %3 == 0 ){
//			nSum++;
//			ite = nums.erase(ite);
//		} else
//			 ite++;
//	}
//	int nSumTemp = 0;
//	for( auto ite=nums.begin(); ite!=nums.end(); ite++ ){
//		nSumTemp += *ite;
//		if( nSumTemp % 3 == 0 ){
//			nSumTemp = 0;
//			nSum++;
//		}
//	}
//	cout<<nSum<<endl;
//	return 0;
//}