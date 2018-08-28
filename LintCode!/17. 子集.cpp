///*
// * 利用递归构建一个二叉树
// * 深度为 size 层
// * 左边标示不要这个数，右边表示要这个数
// * 走到叶节点的时候将结果加入到结果集就好了
// */
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: A set of numbers
//     * @return: A list of lists
//     */
//
//	void subset(vector<int> &nums, vector<int> temp, int level,  vector<vector<int>> &vecRet ){
//		if( level == nums.size() ){
//			vecRet.push_back(temp);
//			return;
//		}
//		subset( nums, temp, level+1, vecRet);
//		temp.push_back(nums[level]);
//		subset( nums, temp, level+1, vecRet);
//	}
//
//    vector<vector<int>> subsets(vector<int> &nums) {
//        // write your code here
//		vector<vector<int>> vecRet;
//		sort( nums.begin(), nums.end());
//		subset( nums, vector<int>(), 0, vecRet );
//		return vecRet;
//    }
//};
//
//int main(){
//
//	return 0;
//}