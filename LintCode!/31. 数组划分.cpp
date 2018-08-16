//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: The integer array you should partition
//     * @param k: An integer
//     * @return: The index after partition
//     */
//
//    void swap(int *a, int *b){
//        int nTemp = *a;
//        *a = *b;
//        *b = nTemp;
//    }
//
//    int partitionArray(vector<int> &nums, int k) {
//        // write your code here
//        bool isFind = false;
//        int findNum;
//        int minSub;
//        for( auto ite=nums.begin(); ite!=nums.end(); ite++ ){
//            if ( *ite>=k && ((!isFind)|| *ite-k < minSub) ){
//                isFind = true;
//                findNum = *ite;
//                minSub = *ite-k;
//            }
//        }
//        if( !isFind )
//            return nums.size();
//        int index = 0;
//        for( int i=0; i<nums.size(); i++ ) {
//            if( nums[i] < findNum )
//                swap(&nums[index++], &nums[i]);
//        }
//        return index;
//    }
//};
//
//
//int main(){
//
//    int arr[]={3,2,3,3,2,1};
//    vector<int> nums(begin(arr), end(arr));
//    Solution s;
//    cout<<s.partitionArray(nums, 2);
//    return 0;
//}