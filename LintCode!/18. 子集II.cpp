//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: A set of numbers.
//     * @return: A list of lists. All valid subsets.
//     */
//
//	void subset( vector<int> &nums, vector<int> &temp, vector<vector<int>> &vecRet, int start ){
//		vecRet.push_back(temp);
//		int nSize = nums.size();
//		for( int i=start; i<nSize; i++ ){
//			if( i!=start && nums[i-1]==nums[i] )
//				continue;
//			temp.push_back(nums[i]);
//			subset(nums, temp, vecRet, i+1 );
//			temp.pop_back();
//		}
//	}
//
//    vector<vector<int>> subsetsWithDup(vector<int> &nums) {
//        // write your code here
//		vector<vector<int>> vecRet;
//		vector<int> temp;
//		sort(nums.begin(), nums.end());
//		subset( nums, temp, vecRet, 0);
//		return vecRet;
//    }
//};
//
//
//int main (){
//
//	int arr[] = {1,2,2};
//
//	vector<int> nums(begin(arr), end(arr));
//
//	Solution S;
//	S.subsetsWithDup(nums);
//
//	return 0;
//}