#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    /*
     * @param s: A string
     * @return: A string
     */
    string reverseWords(string &s) {
        // write your code here
		int nSize = s.size();
		if( nSize==0 )
            return "";
		for( int i=0; i<nSize/2; i++ ){
			swap(s[i], s[nSize-1-i]);
		}
		int nFirst=0, nLast=0;
		while( nFirst < nSize ){
			for( nLast; s[nLast]!=' '&& nLast<nSize ; nLast++ );
			for( int i=nFirst; i<(nFirst+nLast)/2; i++)
				swap(s[i], s[nFirst+nLast-i-1]);
			nFirst = nLast+1;
			nLast = nFirst;
		}

		nFirst = 0;
		nLast = 0;
		bool lastIsSpace = false;
		for( nLast; nLast<nSize; nLast++ ){
			if( s[nLast]==' ')
				if (!lastIsSpace){
					s[nFirst++] = s[nLast];
					lastIsSpace = true;
				}
				else{
					continue;
				}
			else{
				s[nFirst++] = s[nLast];
				lastIsSpace = false;
			}
		}
		if( s[nFirst-1]==' ' )
			nFirst--;
		s.resize(nFirst);
		return s;
	}
};

int main (){
	Solution s;

	string str("   the sky is blue");
	cout<<s.reverseWords(str)<<endl;
	system("pause");
	return 0;
}