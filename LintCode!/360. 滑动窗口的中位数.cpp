//// 有两种比较流行的解决办法
//// 这里采用了使用 set 底层红黑树的特性
//// 插入 set 后会自动排序，迭代器为指针类型插入不失效
//// 考虑到数组中会有重复数字，这里采用了 Multiset
//// 首先先根据窗口大小在 multiset 中插入对应个数字
//// 然后寻找到 set 中间的节点，也就是当前 window 的中位数的迭代器
//// 在之后每次插入的时候，如果插入的数字比中位数小
//// 说明中位数应该被拉小了，应该把迭代器向前移动一位
//// 如果要被删除的数字比当前的中位数小，说明中位数被拉大了，迭代器后移一位
//// 值得注意的是如果删除的数字和中位数相等也要后移一位
//// 有可能要删除的就是当前的中位数
//// 要注意 k 可能会大于 Nums.size() 要做好适配
//
//#include <iostream>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: A list of integers
//     * @param k: An integer
//     * @return: The median of the element inside the window at each moving
//     */
//    vector<int> medianSlidingWindow(vector<int> &nums, int k) {
//        // write your code here
//		vector<int> vecRet;
//		if( nums.size() == 0 )
//			return vecRet;
//		multiset<int> setNums;
//		int nIndex = 0;
//		int nWindowSize = min( int(nums.size()), k );
//		int index = 0;
//		for( index; index < nWindowSize; index++ )
//			setNums.insert( nums[index] );
//		
//		auto iteMid = next( setNums.begin(), (nWindowSize-1) /2 );
//		vecRet.push_back( *iteMid );
//		for( index; index < nums.size(); index++ ){
//			
//			setNums.insert( nums[index] );
//			if( nums[index] < *iteMid )
//				iteMid --;
//			if( nums[index - nWindowSize] <= *iteMid )
//				iteMid ++;
//
//			setNums.erase( setNums.find(nums[index - nWindowSize]));
//			vecRet.push_back( *iteMid );
//		}
//		return vecRet;
//    }
//};
//
//int main(){
//	int arr[] = {1,2,7,7,2,10,3,4,5};
//	//int arr[] = {1,2,7,8,5};
//	Solution s;
//	s.medianSlidingWindow( vector<int>(begin(arr), end(arr)), 2);
//	return 0;
//}