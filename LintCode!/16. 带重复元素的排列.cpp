//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param nums: A list of integers.
//     * @return: A list of permutations.
//     */
//
//	void Array( int level, vector<int>&nums, vector<vector<int>> &vecRet ) {
//		if( level == nums.size() ){
//			vecRet.push_back( nums );
//			return;
//		}
//		int nSize = nums.size();
//		for( int i=level; i<nSize; i++){
//			if( i>level && nums[i]==nums[i-1] )
//				continue;
//			swap( nums[level], nums[i] );
//			Array( level+1, nums, vecRet);
//			swap( nums[level], nums[i] );
//		}
//	}
//
//    vector<vector<int>> permuteUnique(vector<int> &nums) {
//        // write your code here
//		sort( nums.begin(), nums.end() );
//		vector<vector<int>> vecRet;
//		Array( 0, nums, vecRet);
//		return vecRet;
//    }
//};
//
//int main(){
//
//	int arr[] = {1,2,2};
//	vector<int> nums( begin(arr), end(arr));
//	Solution s;
//	vector<vector<int>> vecRet = s.permuteUnique(nums);
//	for( auto ite = vecRet.begin(); ite!=vecRet.end(); ite++ ){
//		for( auto ite2=ite->begin(); ite2!=ite->end(); ite2++ ){
//			cout<<*ite2<<" ";
//		}
//		cout<<endl;
//	}
//
//	return 0;
//}