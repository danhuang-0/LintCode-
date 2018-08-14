//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param nums: a list of integers
//     * @return: A integer indicate the sum of minimum subarray
//     */
//    int minSubArray(vector<int> &nums) {
//        // write your code here
//        auto ite = nums.begin();
//        int nTemp = 0;
//        int nMin = 0;
//        int nLength = 0;
//        int nLengthTemp = 0;
//        while( ite!=nums.end() ) {
//            nTemp += *ite;
//            ite++;
//            nLengthTemp++;
//            if ( nTemp > 0 ) {
//                nTemp = 0;
//                nLengthTemp = 0;
//            }
//            if( nTemp < nMin ){
//                nMin = nTemp;
//                nLength = nLengthTemp;
//            }
//        }
//        if (nLength==0) {
//            ite = nums.begin();
//            nMin = *ite;
//            while( ite!=nums.end()){
//                if( *ite < nMin )
//                    nMin = *ite;
//                ite++;
//            }
//        }
//        return nMin;
//    }
//};