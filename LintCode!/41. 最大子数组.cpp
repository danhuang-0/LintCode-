////��ѧ���Ը������ǣ�һ�����Ӹ���һ��С���Լ�����
////���Ե����ۼӵ�������ʱ�򣬺�������ۼ�һ�����粻��ǰ��ĸ�����
////���Ե���Ϊ������ʱ��ѡ�����¼���
////����ĿҪ��������һ�����������ȫ���Ǹ����Ļ�������һ�����������ֵ������
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