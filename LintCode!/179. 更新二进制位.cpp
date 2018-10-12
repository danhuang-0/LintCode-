#include <iostream>

using namespace std;

class Solution {
public:
    /**
     * @param n: An integer
     * @param m: An integer
     * @param i: A bit position
     * @param j: A bit position
     * @return: An integer
     */
    int updateBits(int n, int m, int i, int j) {
        // write your code here
		int nRightDigit;
		if( i>0 ){
			nRightDigit = 1;
			for( auto count = 0; count < i-1; count++ )
				nRightDigit = ( nRightDigit << 1 ) + 1;
		} else {
			nRightDigit = 0;
		}
		int nRightTemp = n & nRightDigit;
		if( j>0 ){
			nRightDigit = 1;
			for( auto count = 0; count < j-1; count++ )
				nRightDigit = ( nRightDigit << 1 ) + 1;
		} else {
			nRightDigit = 0;
		}
		n = n & ( ~nRightDigit );
		m = m << i;
		n = n | m;
		n = n | nRightTemp;
		return n;
    }
};

int main(){

	Solution s;
	s.updateBits(1001,30,2,7);
	return 0;
}