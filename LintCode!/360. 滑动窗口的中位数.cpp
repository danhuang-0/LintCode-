#include <iostream>
#include <vector>
#include <set>

using namespace std;


class Solution {
public:
    /**
     * @param nums: A list of integers
     * @param k: An integer
     * @return: The median of the element inside the window at each moving
     */
    vector<int> medianSlidingWindow(vector<int> &nums, int k) {
        // write your code here
		vector<int> vecRet;
		if( nums.size() == 0 )
			return vecRet;
		multiset<int> setNums;
		int nIndex = 0;
		int nWindowSize = min( int(nums.size()), k );
		int index = 0;
		for( index; index < nWindowSize; index++ )
			setNums.insert( nums[index] );
		
		auto iteMid = next( setNums.begin(), nWindowSize /2 );
		vecRet.push_back( *iteMid );
		for( index; index < nums.size(); index++ ){
			
			setNums.insert( nums[index] );
			if( nums[index] < *iteMid )
				iteMid --;
			if( nums[index - nWindowSize] <= *iteMid )
				iteMid ++;

			setNums.erase( setNums.find(nums[index - nWindowSize]));
			vecRet.push_back( *iteMid );
		}
		return vecRet;
    }
};

int main(){

	int arr[] = {1,2,7,8,5};
	Solution s;
	s.medianSlidingWindow( vector<int>(begin(arr), end(arr)), 3);
	return 0;
}