//// ��������¼�����������������
//// ������Ŀ˵������ʹ�ö���ռ�
//// �� 148 ��ɫ���� ���ƣ�ʹ�� partition ˼��
//// ��ʵ������ͨ�Ŀ��ţ�����ж���ظ����ֽ����Ż�
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param colors: A list of integer
//     * @param k: An integer
//     * @return: nothing
//     */
//	void sortColor(vector<int> &nums, int nLeft, int nRight) {
//        // write your code here
//		if( nLeft > nRight )
//			return;
//
//		int nLeftIndex = nLeft-1;
//		int nRightIndex = nRight+1;
//
//		int nTarget = nums[nLeft];
//		for( int i = nLeft; i<nRightIndex; ){
//			if( nums[i] == nTarget ){
//				i++;
//			} else if ( nums[i] < nTarget ){
//				swap( nums[i], nums[++nLeftIndex] );
//			} else if ( nums[i] > nTarget ){
//				swap( nums[i], nums[--nRightIndex] );
//			}
//		}
//
//		sortColor( nums, nLeft, nLeftIndex );
//		sortColor( nums, nRightIndex, nRight );
//    }
//
//    void sortColors2(vector<int> &colors, int k) {
//        // write your code here
//		int nLeft = 0;
//		int nRight = colors.size() - 1;
//		sortColor( colors, nLeft, nRight);
//    }
//};
//
//int main(){
//
//	int arr[] = {3, 2, 2, 1, 4};
//
//	Solution s;
//	s.sortColors2( vector<int>( begin(arr), end(arr)) ,4 );
//
//	return 0;
//}