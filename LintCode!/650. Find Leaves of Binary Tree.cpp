//// 题目描述中给出的描述是 nlgn 的算法肯定是要爆炸的
//// 考虑有没有 n 的算法
//// 其实用题目的数据就可以看出来
//// 只要从叶节点开始，找到倒数第一层，倒数第二层，倒数第三层即可
//// 同时左右节点的层高度不一样的时候取大的一个
//// 因为一个节点有右节点的情况下他是不会被移除的
//
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
//    /*
//     * @param root: the root of binary tree
//     * @return: collect and remove all leaves
//     */
//
//	int DFS( TreeNode * root, vector<vector<int>> &vecRet ){
//		if( !root )
//			return 0;
//
//		int nLeft = DFS( root->left, vecRet );
//		int nRight = DFS( root->right, vecRet );
//
//		int nMax = max( nLeft, nRight );
//		if( vecRet.size() <= nMax )
//			vecRet.push_back( vector<int> () );
//		vecRet[nMax].push_back( root->val );
//		return nMax + 1;
//	}
//
//    vector<vector<int>> findLeaves(TreeNode * root) {
//        // write your code here
//
//		vector<vector<int>> vecRet;
//		DFS( root, vecRet );
//		return vecRet;
//    }
//};