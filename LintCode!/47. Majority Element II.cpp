//// ����һ����˼·һ�����ü����ҵ���Ԫ��
//// ������Ԫ�ؿ�������������¼�����������Ԫ��
//// �����±���һ�ο�������˭����һЩ
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param nums: a list of integers
//     * @return: The majority number that occurs more than 1/3
//     */
//    int majorityNumber(vector<int> &nums) {
//        // write your code here
//		vector<int> maxNum(2);
//		vector<int> maxCount(2);
//
//		for( auto ite=nums.begin(); ite!=nums.end(); ite++ ){
//			if ( *ite==maxNum[0] || maxCount[0]==0 ){
//				maxNum[0] = *ite;
//				maxCount[0]++;
//			} else if ( *ite==maxNum[1] || maxCount[1]==0 ){
//				maxNum[1] = *ite;
//				maxCount[1]++;
//			}  else {
//				maxCount[0]--;
//				maxCount[1]--;
//			}
//		}
//		maxCount[0] = 0;
//		maxCount[1] = 0;
//		for( auto ite=nums.begin(); ite!=nums.end(); ite++ ){
//			if( *ite==maxNum[0] )
//				maxCount[0]++;
//			else if ( *ite==maxNum[1] )
//				maxCount[1]++;		
//		}
//		return maxCount[0] > maxCount[1] ? maxNum[0] : maxNum[1];
//    }
//};
//
//int main (){
//	int arr[]={1,1,1,1,2,2,3,3,4,4,4};
//	vector<int> vec( begin(arr), end(arr));
//	Solution s;
//	cout << s.majorityNumber( vec)<<endl;
//	system("pause");
//	return 0;
//}