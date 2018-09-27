#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Solution {
public:
    /*
     * @param n: The number of queens
     * @return: All distinct solutions
     */
	void DFS(vector<vector<string>> &vecRet, vector<int> &vecNums, int nLevel ){
		if( nLevel == vecNums.size()-1 ){
			bool isOk = true;
			for( int i=0; i<vecNums.size(); i++ ){
				for( int j=i+1; j<vecNums.size(); j++ ){
					if( i-j == vecNums[i]-vecNums[j]
					|| j-i == vecNums[i]-vecNums[j] ){
						isOk = false;
						break;
					}
				}
				if( !isOk )
					break;
			}
			if( isOk ){
				vector<string> vecTemp(vecNums.size(), string(vecNums.size(), '.'));
				for( int i=0; i<vecNums.size(); i++ ){
					vecTemp[i][vecNums[i]] = 'Q';
				}
				vecRet.push_back( vecTemp );
			}
			return;
		}
		for( int i=nLevel; i<vecNums.size(); i++ ){
			swap( vecNums[nLevel], vecNums[i] );
			DFS( vecRet, vecNums, nLevel+1 );
			swap( vecNums[nLevel], vecNums[i] );
		}
	}

    vector<vector<string>> solveNQueens(int n) {
        // write your code here
		vector<vector<string>> vecRet;
		vector<int> vecNums;
		for( int i=0; i<n; i++ ){
			vecNums.push_back(i);	
		}
		DFS( vecRet, vecNums, 0);
		return vecRet;
    }
};

int main (){

	Solution s;
	s.solveNQueens( 10 );
	return 0;
}