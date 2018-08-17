////数学尝试告诉我们，一个数加负数一定小与自己本身
////所以当和累加到负数的时候，后面的数累加一定不如不加前面的负数串
////所以当和为负数的时候选择重新计算
////但题目要求最少有一个，所以如果全都是负数的话，就找一个负数的最大值出来。
//
//class Solution {
//public:
//    /**
//     * @param nums: A list of integers
//     * @return: A integer indicate the sum of max subarray
//     */
//    int maxSubArray(vector<int> &nums) {
//        // write your code here
//        int nMax = 0;
//        int nTemp = 0;
//        bool isFind = false;
//        for(auto ite=nums.begin(); ite!=nums.end(); ite++){
//            nTemp += *ite;
//            if (nTemp < 0)
//                nTemp = 0;
//            if (nTemp > nMax) {
//                nMax = nTemp;
//                isFind = true;
//            }
//        }
//        if (!isFind){
//            nMax = *nums.begin();
//            for(auto ite=nums.begin(); ite!=nums.end(); ite++){
//                if( *ite > nMax )
//                    nMax = *ite;
//            }
//        }
//        return nMax;
//    }
//};