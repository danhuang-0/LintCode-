#include <iostream>

using namespace std;

class Solution {
public:
    /**
     * @param k: An integer
     * @param n: An integer
     * @return: An integer denote the count of digit k in 1..n
     */
    int digitCounts(int k, int n) {
        // write your code here
		if( k==0 && n==0 )
			return 1;

		int nLeft = n /10 ;
		int nMid = n % 10;
		int nRight = 0;
		int nDigit = 1;
		int nCount = 0;
 		while( nMid != 0 ) {
			if( nMid < k ) {
				nCount += nLeft * nDigit;
			} else if ( nMid == k ) {
				nCount += ( nLeft * nDigit + nRight + 1 );
			} else {
				nCount += ( nLeft + 1 ) * nDigit;
			}
			nDigit *= 10;
			nRight = n % nDigit;
			nLeft = n / nDigit / 10 ;
			nMid = n / nDigit % 10;
		}
		return nCount;
	}
};

int main (){

	Solution s;
	s.digitCounts(1, 12);
	return 0;
}