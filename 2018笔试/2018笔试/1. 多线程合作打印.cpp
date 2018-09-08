//#include <iostream>
//#include <string>
//#include <sstream>
//
//using namespace std;
//
//int main (){
//	
//	string strNum, str;
//	cin>>strNum>>str;
//	int num;
//	try{
//		num = stoi(strNum);
//	} catch ( exception e ){
//		cout<<"error"<<endl;
//		return 0;
//	}
//	if( num<0 ){
//		cout<<"error"<<endl;
//		return 0;
//	}
//
//	stringbuf buf;
//	for( int i=0; i<num; i++)
//		buf.sputn(str.c_str(), str.size());
//	cout<<buf.str()<<endl;
//	return 0;
//}