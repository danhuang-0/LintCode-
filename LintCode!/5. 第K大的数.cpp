////要求时间复杂度O(n) 空间复杂度O(1)
////使用快排的partition
//
//#include <iostream>
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
//	int Partition( vector<int> &nums, int nLeft, int nRight );
//    int kthLargestElement(int n, vector<int> &nums) {
//        // write your code here
//		int nLeft = 0;
//		int nRight = nums.size()-1;
//		int nLoc = Partition( nums, nLeft, nRight );
//		while( nLoc != n )
//		{
//			//要找的在当前的左边
//			if( n < nLoc )
//			{
//				nLoc = Partition( nums, 0, nLoc - 1 );
//			}
//			//在右边
//			else
//			{
//				nLoc = Partition( nums, nLoc + 1, )
//			}
//		}
//		return nums[n];
//    }
//};
//
//int main()
//{
//	system("pause");
//	return 0;
//}