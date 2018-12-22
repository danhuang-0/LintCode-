// ��ָ offer ԭ��
// ����ѡ�������ѣ�����ʹ�ÿ��Զ�̬����Ľṹ
// ����ʹ���� STL �� set �ײ�ĺ����
// ���ú����������������

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