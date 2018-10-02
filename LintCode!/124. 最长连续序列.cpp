#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param num: A list of integers
     * @return: An integer
     */
	struct Node {
		int nBegin, nEnd;
	};
    int longestConsecutive(vector<int> &num) {
        // write your code here
		
		unordered_map<int, Node* > map;
		Node * pNode;
		unordered_set<int> nums;
		for( auto n : num )
			nums.insert(n);
		for( auto n : nums ){
			bool isLast = ( map.find( n-1 ) != map.end() );
			bool isFirst = ( map.find( n+1 ) != map.end() );
			if( isLast && isFirst ){
				Node * pLast = map[n-1];
				Node * pEnd = map[n+1];
				map.erase( map.find( pLast->nBegin ) );
				if( pLast->nEnd != pLast->nBegin )
					map.erase( map.find( pLast->nEnd ));
				map.erase( pEnd->nBegin );
				pEnd->nBegin = pLast->nBegin;
				map[pEnd->nBegin] = pEnd;
				delete pLast;
			} else if ( isFirst ){
				pNode = map[n+1];
				pNode->nBegin--;
				map.erase( map.find(n+1) );
				map[pNode->nBegin] = pNode;
				map[pNode->nEnd] = pNode;
			} else if ( isLast ){
				pNode = map[n-1];
				pNode->nEnd++;
				map.erase( map.find(n-1));
				map[pNode->nBegin] = pNode;
				map[pNode->nEnd] = pNode;
			} else {
				pNode = new Node;
				pNode->nBegin = n;
				pNode->nEnd = n;
				map[n] = pNode;
			}
		}

		int nMax = 0;
		int nTemp;
		while( !map.empty() ){
			auto ite = map.begin();
			pNode = ite->second;
			nTemp = pNode->nEnd - pNode->nBegin + 1;
			if( nTemp > nMax )
				nMax = nTemp;
			map.erase( map.find(pNode->nBegin) );
			if( pNode->nBegin != pNode->nEnd )
				map.erase( map.find(pNode->nEnd) );
			delete pNode;
		}
		return nMax;
    }
};

int main (){

	int arr[] = {1,2,0,1};
	vector< int > nums( begin(arr), end(arr) );
	Solution s;
	s.longestConsecutive( nums );
	return 0;
}