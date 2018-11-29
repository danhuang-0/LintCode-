//// 直接按位计算就好
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param digits: a number represented as an array of digits
//     * @return: the result
//     */
//    vector<int> plusOne(vector<int> &digits) {
//        // write your code here
//		int index;
//		for( index=digits.size() - 1; index>=0; index-- ){
//			digits[index]++;
//			if( digits[index] == 10 ){
//				digits[index] = 0;
//			} else {
//				break;
//			}
//		}
//		// 只有最后有进位，index 才会减到 -1
//		if( index < 0 ){
//			vector<int> vecTemp( digits.size() + 1 );
//			vecTemp[0] = 1;
//			for( int i = 0; i<digits.size(); i++ )
//				vecTemp[i+1] = digits[i];
//			digits = vecTemp;
//		}
//
//		return digits;
//    }
//};
//
//int main(){
//
//	//int arr[] = {1,2,3};
//	int arr[] = {9,9,9};
//	Solution s;
//
//	s.plusOne( vector<int>(begin(arr), end(arr) ));
//
//	return 0;
//}