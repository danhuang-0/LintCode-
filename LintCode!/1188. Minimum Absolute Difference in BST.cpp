//// 先中序遍历，将二叉查找树变成一个有序数组
//// 之后求有序数组中每两个数之间的差值就好了
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class TreeNode {
//public:
//    int val;
//    TreeNode *left, *right;
//    TreeNode(int val) {
//        this->val = val;
//        this->left = this->right = NULL;
//    }
//};
//
//class Solution {
//public:
//    /**
//     * @param root: the root
//     * @return: the minimum absolute difference between values of any two nodes
//     */
//
//	void DFS( vector<int> &vecNums, TreeNode *root ){
//		if( !root )
//			return ;
//		DFS( vecNums, root->left);
//		vecNums.push_back( root->val );
//		DFS( vecNums, root->right);
//	}
//
//    int getMinimumDifference(TreeNode * root) {
//        // Write your code here
//		if( !root )
//			return 0;
//		int nMin = INT_MAX;
//		vector<int> vecNums;
//		
//		DFS( vecNums, root );
//		for( int i=1; i<vecNums.size(); i++ ){
//			if( vecNums[i] - vecNums[i-1] < nMin )
//				nMin = vecNums[i] - vecNums[i-1];
//		}
//		return nMin;
//	}
//};