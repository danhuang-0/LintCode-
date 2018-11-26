#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /*
     * @param A: An integer array
     * @return: A list of integers includes the index of the first number and the index of the last number
     */
    vector<int> continuousSubarraySum(vector<int> &A) {
        // write your code here
		vector<int> vecRet ( 2, 0 );
		int nMax = 0;
		for( int i=0; i<A.size(); i++ ){
			if( A[i] > nMax ){
				nMax = A[i];
				vecRet[0] = vecRet[1] = i;
			}
		}
		if( nMax < 0 )
			return vecRet;

		nMax = 0;
		vecRet[0] = 0;
		vecRet[1] = 0;
		int nSum = 0;
		for( int i=0; i<A.size(); i++ ){
			nSum += A[i];
			if( nSum < 0 ){
			}
		}
		return vecRet;
    }
};

int main (){

	return 0;
}