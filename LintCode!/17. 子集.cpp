///*
// * ���õݹ鹹��һ��������
// * ���Ϊ size ��
// * ��߱�ʾ��Ҫ��������ұ߱�ʾҪ�����
// * �ߵ�Ҷ�ڵ��ʱ�򽫽�����뵽������ͺ���
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