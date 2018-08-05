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
//			//��ǰ�ַ�ΪѰ���ַ�
//			if( target==nums[nMid] )
//			{
//				//���ֲ���
//				//�ҵ��ظ��������������Ǹ�
//				nRight = nMid;
//				nMid = (nLeft + nRight)/2;
//				while( nLeft!=nRight )
//				{
//					//��ǰ��mid����Ŀ�� ��Сright
//					if( target==nums[nMid] )
//						nRight = nMid;
//					//��ǰ��Mid����Ŀ�� ������һ����
//					if( target!=nums[nMid] && target==nums[nMid+1] )
//					{
//						//�ı䵱ǰmidΪ��Ҫ���ص�λ�� ����ѭ��
//						nMid++;
//						break;
//					}
//					//��ǰMid����Ŀ�� ��һ��Ҳ���� ��Сleft
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