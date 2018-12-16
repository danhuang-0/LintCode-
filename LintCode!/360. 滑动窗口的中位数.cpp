//// �����ֱȽ����еĽ���취
//// ���������ʹ�� set �ײ�����������
//// ���� set ����Զ����򣬵�����Ϊָ�����Ͳ��벻ʧЧ
//// ���ǵ������л����ظ����֣���������� Multiset
//// �����ȸ��ݴ��ڴ�С�� multiset �в����Ӧ������
//// Ȼ��Ѱ�ҵ� set �м�Ľڵ㣬Ҳ���ǵ�ǰ window ����λ���ĵ�����
//// ��֮��ÿ�β����ʱ�������������ֱ���λ��С
//// ˵����λ��Ӧ�ñ���С�ˣ�Ӧ�ðѵ�������ǰ�ƶ�һλ
//// ���Ҫ��ɾ�������ֱȵ�ǰ����λ��С��˵����λ���������ˣ�����������һλ
//// ֵ��ע��������ɾ�������ֺ���λ�����ҲҪ����һλ
//// �п���Ҫɾ���ľ��ǵ�ǰ����λ��
//// Ҫע�� k ���ܻ���� Nums.size() Ҫ��������
//
//#include <iostream>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param nums: A list of integers
//     * @param k: An integer
//     * @return: The median of the element inside the window at each moving
//     */
//    vector<int> medianSlidingWindow(vector<int> &nums, int k) {
//        // write your code here
//		vector<int> vecRet;
//		if( nums.size() == 0 )
//			return vecRet;
//		multiset<int> setNums;
//		int nIndex = 0;
//		int nWindowSize = min( int(nums.size()), k );
//		int index = 0;
//		for( index; index < nWindowSize; index++ )
//			setNums.insert( nums[index] );
//		
//		auto iteMid = next( setNums.begin(), (nWindowSize-1) /2 );
//		vecRet.push_back( *iteMid );
//		for( index; index < nums.size(); index++ ){
//			
//			setNums.insert( nums[index] );
//			if( nums[index] < *iteMid )
//				iteMid --;
//			if( nums[index - nWindowSize] <= *iteMid )
//				iteMid ++;
//
//			setNums.erase( setNums.find(nums[index - nWindowSize]));
//			vecRet.push_back( *iteMid );
//		}
//		return vecRet;
//    }
//};
//
//int main(){
//	int arr[] = {1,2,7,7,2,10,3,4,5};
//	//int arr[] = {1,2,7,8,5};
//	Solution s;
//	s.medianSlidingWindow( vector<int>(begin(arr), end(arr)), 2);
//	return 0;
//}