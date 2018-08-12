////要求时间复杂度O(n) 空间复杂度O(1)
////使用快排的partition
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param n: An integer
//     * @param nums: An array
//     * @return: the Kth largest element
//     */
//	int Partition( vector<int> &nums, int nLeft, int nRight )
//	{
//		int nSelect = nums[nLeft];
//		
//		int index = nLeft;
//		swap(nums[index], nums[nRight]);
//
//		for( int i=nLeft; i<nRight; i++ )
//		{
//			if ( nums[i] < nSelect )
//				swap(nums[i], nums[index++]);
//		}
//		swap(nums[index], nums[nRight]);
//		return index;
//	}
//    int kthLargestElement(int n, vector<int> &nums) {
//        // write your code here
//		n = nums.size() - n;
//		int nLeft = 0;
//		int nRight = nums.size()-1;
//		int nLoc = Partition( nums, nLeft, nRight );
//		while( nLoc != n )
//		{
//			//要找的在当前的左边
//			if( n < nLoc )
//			{
//				nRight = nLoc - 1;
//				nLoc = Partition( nums, nLeft, nRight );
//			}
//			//在右边
//			else
//			{
//				nLeft = nLoc + 1;
//				nLoc = Partition( nums, nLeft, nRight);
//			}
//		}
//		return nums[n];
//    }
//};
//
//int main()
//{
//	Solution s;
//	int arr[6] = {6,7,4,1,3,8};
//	vector<int> nums(6);
//	for(int i=0; i<6; i++)
//		nums[i] = arr[i];
//	cout<<s.kthLargestElement(2, nums);
//	system("pause");
//	return 0;
//}