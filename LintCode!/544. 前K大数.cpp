// 剑指 offer 原题
// 可以选择用最大堆，或者使用可以动态排序的结构
// 这里使用了 STL 的 set 底层的红黑树
// 利用红黑树排序的特性完成

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * @param nums: an integer array
     * @param k: An integer
     * @return: the top k largest numbers in array
     */
    vector<int> topk(vector<int> &nums, int k) {
        // write your code here
		vector<int> vecRet;
		if( nums.size() == 0 || k <= 0 )
			return vecRet;
		set<int> setNums;
		for( int i=0; i<k; i++ )
			setNums.insert( nums[i] );
		for( int i=k; i<nums.size(); i++ ){
			if( nums[i] > * setNums.begin() ){
				setNums.erase( setNums.begin() );
				setNums.insert( nums[i] );
			}
		}
		for( auto rite = setNums.rbegin(); rite != setNums.rend(); rite++ )
			vecRet.push_back( * rite );
		return vecRet;
    }
};

int main(){
	int arr[] = {3,10,1000,-99,4,100};
	vector<int> vecNums( begin(arr), end(arr) );
	Solution s;
	s.topk( vecNums, 3 );

}