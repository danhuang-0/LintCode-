//#include <iostream>
//#include <string>
//#include <sstream>
//#include <vector>
//
//using namespace std;
//
//int main(){
//
//	vector<int> nums;
//	string strLine;
//	getline( cin, strLine);
//
//	istringstream iss(strLine);
//    string temp;
//
//    while (getline(iss, temp, ' ')) {
//        nums.push_back(stoi(temp));
//    }
//
//	int nSize = nums.size();
//	vector<int> digitVec(nSize);
//	vector<int> sumVec(nums);
//	digitVec[0]=1;
//	for(int i = 1; i<nSize; i++){
//		digitVec[i] = 1;
//		for(int j=0; j<i; j++){
//			if( nums[j]<nums[i] && digitVec[j]>digitVec[i]-1 ){
//				digitVec[i] = digitVec[j] + 1;
//				sumVec[i] = sumVec[j] + nums[i];
//			}
//		}
//	}
//    
//	cout<<sumVec[nSize-1]<<endl;
//	return 0;
//}