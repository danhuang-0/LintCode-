//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int compare( int a, int b ){
//	if( a == b )
//		return 0;
//		
//	string strA = to_string(a);
//	string strB = to_string(b);
//
//	int index = 0;
//	while( index < strA.size() && index < strB.size() ){
//		if( strA[index] > strB[index] )
//			return 1;
//		else if( strA[index] < strB[index] )
//			return 0;
//		index ++;
//	}
//		
//	if( index == strA.size() )
//		return strA[0] > strB[index];
//	return strA[index] > strB[0];
//}
//
//class Solution {
//public:
//    /**
//     * @param nums: A list of non negative integers
//     * @return: A string
//     */
//	
//    string largestNumber(vector<int> &nums) {
//        // write your code here
//
//		if( nums.size() == 0 )
//			return 0;
//
//		sort( nums.begin(), nums.end(), compare );
//		
//		if( nums[0] == 0 )
//			return "0";
//
//		string strRet;
//		
//		for( auto num : nums )
//			strRet += to_string( num );
//		return strRet;
//	}
//};
//
//int main (){
//
//	int arr[] = {25,5,12,97,3,8,79,73,38,88,98,29,84,74,16,2,67,65,41,44,88,75,51,87,95,90,45,40,7,53,5,30,77,5,56,58,41,51,62,88,33,69,81,78,18,63,82,90,21,6,12,92,67,6,81,83,14,6,76,85,79,96,41,44,20,89,59,58,83,58,73,1,41,41,24,55,61,49,10,42,5,1,98,30,91,9,34,5,84,43,73,4,22,11,21,14,1,62,77,41};
//	
//	vector< int > nums( begin(arr), end(arr));
//	Solution s;
//	s.largestNumber( nums);
//
//	return 0;
//}