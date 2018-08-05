#include <iostream>

using namespace std;


class Solution {
public:
    /*
     * @param : An integer
     * @param : An integer
     * @return: An integer denote the count of digit k in 1..n
     */
    int digitCounts(int k, int n) {
        // write your code here
		if( n==0 )
			if ( k==0 )
				return 1;
			else
				return 0;
		
		int digit[10];
		int len = 0;

		int nTemp = n;
		while ( nTemp!=0 ){
			digit[len++] = nTemp%10;
			nTemp /= 10;
		}

		if ( 1==len ){
			if( k<n )
				return 1;
			else
				return 0;
		}		
		int sum = 0;
		int helpArr[10] = {9,10,10,10,10,10,10,10,10,10};
		//ÀýÈç12345 ÏÈËã0-10000
		for ( int i=0; i<len-1; i++ ){
			if ( i==0 ){
				sum += 1;
				continue;
			}
			for ( int j=0; j<=i; j++ ){
				int nTemp = 1;
				for( int k=0; k<=i; k++ ){
					if (k==j)
						continue;
					nTemp *= helpArr[k];
				}
				sum += nTemp;
			}
		}
		
		//ÔÙËã10000-12345
		for( int i=len-1; i>=0; i-- ){
			if( i==len-1 ){
				if ( digit[i]<k )
					continue;
				int nTemp = 1;
				for( int j=0; j<len-1; j++)
					nTemp *= 10;
				sum += nTemp*(digit[len-1]);
			} else {
				int nTemp = 0;
				int nMin = 1;
				for ( int j=len-1; j>i; j-- ){
					nTemp *= 10;
					nMin *= 10;
					nTemp += digit[j];
				}
				nMin /= 10;
				nTemp = nTemp - nMin;

				if ( digit[i]>=k )
					nTemp++;
				for ( int j=i-1; j>=0; j-- )
						nTemp *= 10;
				sum += nTemp;
			}
		}
		return sum;
    }
};


int main(){

	Solution s;

	printf("%d\n", s.digitCounts(1,12));
	printf("%d\n", s.digitCounts(1,1000));

	system("pause");
	return 0;
}