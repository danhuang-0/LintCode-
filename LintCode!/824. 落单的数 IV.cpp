//// ���ö��ֲ��ҵķ�ʽ
//// ���û���������������ŵĻ�
//// ���䵥����ǰ��Ķ��� a[2n] == a[2n+1]
//// ���䵥�������涼�������������
//// ֻҪ�ҵ���һ�� a[2n] != a[2n+1] �ĵط��Ϳ�����
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: The number array
//     * @return: Return the single number
//     */
//    int getSingleNumber(vector<int> &nums) {
//        // Write your code here
//		int nLeft = 0;
//		int nRight = nums.size()-1;
//		int nMid = ( nLeft + nRight ) / 2;
//		while( 1 ){
//			if( nMid % 2 != 0 )
//				nMid--;
//			
//			if( nums[nMid] == nums[nMid+1] ) {
//				nLeft = nMid + 2;
//			} else {
//				if ( nMid == 0 || nums[nMid-2] == nums[nMid-1] ){
//					break;
//				} else {
//					nRight = nMid - 2;
//				}
//			}
//			nMid = ( nLeft + nRight ) / 2;
//		}
//		return nums[nMid] ;
//    }
//};
//
//int main (){
//
//	int arr[] = { 4,3,3,2,2,5,5 };
//	vector<int> vecNums( begin( arr ), end( arr ));
//	Solution s;
//	s.getSingleNumber( vecNums );
//
//
//	return 0;
//}