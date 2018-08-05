//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: The integer array.
//     * @param target: Target to find.
//     * @return: The first position of target. Position starts from 0.
//     */
//    int binarySearch(vector<int> &nums, int target) {
//        // write your code here
//		int nLeft = 0;
//		int nRight = nums.size()-1;
//		int nMid = (nLeft + nRight)/2;
//		int nRet = -1;
//		while( nLeft<=nRight )
//		{
//			//当前字符为寻找字符
//			if( target==nums[nMid] )
//			{
//				//二分查找
//				//找到重复数字中最左侧的那个
//				nRight = nMid;
//				nMid = (nLeft + nRight)/2;
//				while( nLeft!=nRight )
//				{
//					//当前的mid还是目标 缩小right
//					if( target==nums[nMid] )
//						nRight = nMid;
//					//当前的Mid不是目标 但是下一个是
//					if( target!=nums[nMid] && target==nums[nMid+1] )
//					{
//						//改变当前mid为需要返回的位置 跳出循环
//						nMid++;
//						break;
//					}
//					//当前Mid不是目标 下一个也不是 缩小left
//					else
//						nLeft = nMid;
//					nMid = (nLeft + nRight)/2;
//				}
//				nRet = nMid;
//				break;
//			}
//			else if( target > nums[nMid] )
//				nLeft = nMid + 1;
//			else
//				nRight = nMid - 1;
//			nMid = (nLeft + nRight)/2;
//		}
//		return nRet;
//    }
//};
//
//int main()
//{
//	int arr[] = {1, 2, 3, 3, 4, 5, 10};
//	vector<int> vct(arr, arr + 7);
//	Solution s;
//	cout<<s.binarySearch(vct, 1)<<endl;
//	system("pause");
//	return 0;
//}