//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: An integer array
//     * @return: nothing
//     */
//	void swap(int *a, int* b){
//		int nTemp = *a;
//		*a = *b;
//		*b = nTemp;
//	}
//    void recoverRotatedSortedArray(vector<int> &nums) {
//        // write your code here
//		int nFirst = 0;
//		int nSize = nums.size();
//		for( int i=1; i<nSize; i++ ){
//			if( nums[i] < nums[i-1] ){
//				nFirst = i;
//				break;
//			}
//		}
//
//		for( int i=0; i<(nFirst)/2; i++ ){
//			swap(&nums[i], &nums[nFirst-1-i]);
//		}
//		for( int i=nFirst; i<(nSize-nFirst)/2+nFirst; i++){
//			swap(&nums[i], &nums[nSize-i-1+nFirst]);
//		}
//		for( int i=0; i<nSize/2; i++){
//			swap(&nums[i], &nums[nSize-i-1]);
//		}
//    }
//};
//
//int main(){
//
//	//int arr[] = {4};
//	//int arr[] = {4,5,6,1,2,3};
//	int arr[] = {4,5,6,7,1,2,3};
//	vector<int> nums(begin(arr), end(arr));
//
//	Solution s;
//	s.recoverRotatedSortedArray(nums);
//
//	for( auto ite=nums.begin(); ite!=nums.end(); ite++){
//		cout<<*ite<<endl;
//	}
//
//	system("pause");
//	return 0;
//}