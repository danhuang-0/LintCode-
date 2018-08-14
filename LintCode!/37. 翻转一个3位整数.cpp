//class Solution {
//public:
//    /**
//     * @param number: A 3-digit number.
//     * @return: Reversed number.
//     */
//    int reverseInteger(int number) {
//        // write your code here
//        int ret=0;
//        int nTemp ;
//        while( number != 0 ){
//            nTemp = number % 10;
//            ret *= 10;
//            ret += nTemp;
//            number /= 10;
//        }
//        return ret;
//    }
//};