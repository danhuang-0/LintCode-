///* 使用哈希表记录下来每一个数字和下标
// * 对数组遍历，查找 target-nums[i] 是否在哈希表中即可
// */
//
//#include <iostream>
//#include <vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param numbers: An array of Integer
//     * @param target: target = numbers[index1] + numbers[index2]
//     * @return: [index1, index2] (index1 < index2)
//     */
//    vector<int> twoSum(vector<int> &numbers, int target) {
//        // write your code here
//		vector<int> vecRet(2,0);
//		unordered_map<int, int> mapNums;
//		int nSize = numbers.size();
//		for( int i=0; i<nSize; i++)
//			mapNums[numbers[i]] = i;
//
//		for( int i=0; i<nSize; i++){
//			int nTemp = target - numbers[i];
//			if( mapNums.find(nTemp)==mapNums.end() )
//				continue;
//			vecRet[0] = i;
//			vecRet[1] = mapNums[nTemp];
//			break;
//		}
//		return vecRet;
//    }
//};
//
//int main(){
//
//	int arr[] = { 2,7,11,15 };
//	vector<int> nums(begin(arr), end(arr));
//
//	Solution s;
//	vector<int> vec = s.twoSum(nums, 9);
//	cout<<vec[0]<<" "<<vec[1]<<endl;
//	system("pause");
//	return 0;
//}