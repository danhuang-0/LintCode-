//// ά������������һ����¼����ֵ��ÿ��ͨ��ȡ����ֵ���жԱ�
//// һ����¼�͵�ǰ�ĺ�
//// ����Ҫ��O1�ؼ�N^2ʱ�䣬������֮����֮ǰ����֮�͵ķ�ʽ
//// �������С��ֵ��һ���;�����
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
//     * @param numbers: Give an array numbers of n integer
//     * @param target: An integer
//     * @return: return the sum of the three integers, the sum closest target.
//     */
//    int threeSumClosest(vector<int> &numbers, int target) {
//        // write your code here
//		sort( numbers.begin(), numbers.end() );
//		
//		int nRet = 0 ;
//		int nSub = INT_MAX;
//		for( int i=0; i<numbers.size() - 2; i++ ){
//			int nLeft = i + 1;
//			int nRight = numbers.size() - 1;
//			int nTempTarget = target - numbers[i];
//			while( nLeft < nRight ){
//				int nTemp = numbers[nLeft] + numbers[nRight];
//				if( abs( nTemp - nTempTarget ) < abs(nSub) ){
//					nRet = numbers[i] + numbers[nLeft] + numbers[nRight];
//					nSub = nRet - target;
//				}
//				if( nTemp > nTempTarget )
//					nRight--;
//				else if ( nTemp < nTempTarget )
//					nLeft ++;
//				else{
//					nLeft ++;
//					nRight --;
//				}
//			}
//		}
//		return nRet;
//    }
//};
//
//int main(){
//
//	int arr[] = {-1, 2, 1, -4};
//	vector<int> vecNums ( begin(arr), end(arr) );
//	Solution s;
//	s.threeSumClosest( vecNums, 1 );
//
//	return 0;
//}