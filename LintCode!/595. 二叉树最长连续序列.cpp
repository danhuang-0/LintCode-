//// 可以递归计算，如果是左子树或者右子树满足条件
//// 则当前值为左子树或右子树满足条件长度的最大值+1
//// 如果不满足，连续数返回 1
//// 全局维护着最大值即可
//
//#include <iostream>
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
//     * @param root: the root of binary tree
//     * @return: the length of the longest consecutive sequence path
//     */
//		int findMax( TreeNode * root, int & nMax ){
//			if( root == nullptr )
//				return 0;
//			int nRet = 1;
//			if( root->right ){
//				int nRight = findMax( root->right, nMax);
//				if( root->right->val == root->val + 1 ){
//					nRet = max( nRet, nRight + 1 );
//				}
//			}
//			if( root->left ){
//				int nLeft = findMax( root->left, nMax );
//				if( root->left->val == root->val + 1 ){
//					nRet = max( nRet, nLeft + 1 );
//				}
//			}
//			if( nRet > nMax )
//				nMax = nRet;
//			return nRet;
//		}
//		int longestConsecutive(TreeNode * root) {
//			// write your code here
//			int nMax = 0;
//			findMax( root, nMax );
//			return nMax;
//		}
//};