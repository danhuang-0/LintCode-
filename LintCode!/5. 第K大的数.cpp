////Ҫ��ʱ�临�Ӷ�O(n) �ռ临�Ӷ�O(1)
////ʹ�ÿ��ŵ�partition
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
//			//Ҫ�ҵ��ڵ�ǰ�����
//			if( n < nLoc )
//			{
//				nLoc = Partition( nums, 0, nLoc - 1 );
//			}
//			//���ұ�
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