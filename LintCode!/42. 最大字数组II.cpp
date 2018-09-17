// 找到最小的一个数，如果是正数，返回整个数组和
// 如果是负数，在这个数两侧分别求最大值
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /*
     * @param nums: A list of integers
     * @return: An integer denotes the sum of max two non-overlapping subarrays
     */
	int maxSubArrays( vector<int> &nums, int nLeft, int nRight ){
		int nSum = 0;
		int nMax = INT_MIN;
		bool isFind = false;
		for( int i=nLeft; i<nRight; i++ ){
			if( nums[i] > nMax )
				nMax = nums[i];		
		}
		if( !isFind )
			return nMax;
		nMax = 0;
		for( int i=nLeft; i<=nRight; i++ ){
			nSum += nums[i];
			if( nSum > nMax )
				nMax = nSum;
			if( nSum < 0 )
				nSum = 0;
		}
		return nMax;
	}
    int maxTwoSubArrays(vector<int> &nums) {
        // write your code here
		int nMin = 0;
		for( int i=1; i<nums.size(); i++ ){
			if( nums[i] < nums[nMin] )
				nMin = i;
		}
		if( nums[nMin] > 0 ){
			int nSum = 0;
			for( auto num : nums )
				nSum += num;
			return nSum;
		}
		return maxSubArrays( nums, 0, nMin-1) + maxSubArrays(nums, nMin+1, nums.size()-1);
    }
};

int main(){

	int arr[] = {1, 3, -1, 2, -1, 2};
	vector<int> vecNums( begin(arr), end(arr));

	Solution s;
	s.maxTwoSubArrays( vecNums);

	return 0;
}