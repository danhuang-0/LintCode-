//// 跟上一道题思路一样，用计数找到主元素
//// 不过主元素可能有两个，记录下来这个两个元素
//// 再重新遍历一次看这两个谁更多一些
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param nums: a list of integers
//     * @return: The majority number that occurs more than 1/3
//     */
//    int majorityNumber(vector<int> &nums) {
//        // write your code here
//		vector<int> maxNum(2);
//		vector<int> maxCount(2);
//
//		for( auto ite=nums.begin(); ite!=nums.end(); ite++ ){
//			if ( *ite==maxNum[0] || maxCount[0]==0 ){
//				maxNum[0] = *ite;
//				maxCount[0]++;
//			} else if ( *ite==maxNum[1] || maxCount[1]==0 ){
//				maxNum[1] = *ite;
//				maxCount[1]++;
//			}  else {
//				maxCount[0]--;
//				maxCount[1]--;
//			}
//		}
//		maxCount[0] = 0;
//		maxCount[1] = 0;
//		for( auto ite=nums.begin(); ite!=nums.end(); ite++ ){
//			if( *ite==maxNum[0] )
//				maxCount[0]++;
//			else if ( *ite==maxNum[1] )
//				maxCount[1]++;		
//		}
//		return maxCount[0] > maxCount[1] ? maxNum[0] : maxNum[1];
//    }
//};
//
//int main (){
//	int arr[]={1,1,1,1,2,2,3,3,4,4,4};
//	vector<int> vec( begin(arr), end(arr));
//	Solution s;
//	cout << s.majorityNumber( vec)<<endl;
//	system("pause");
//	return 0;
//}