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
//     * @param root: The root of binary tree
//     * @return: An integer
//     */
//	int m_nNowDepth;
//	int m_nMinDepth;
//
//	void DFS( TreeNode * root ){
//		if( !root )
//			return ;
//		m_nNowDepth ++;
//
//		if( !root->left && !root->right ){
//			if( m_nNowDepth < m_nMinDepth )
//				m_nMinDepth = m_nNowDepth;
//		} else {
//			DFS( root->left );
//			DFS( root->right );
//		}
//		m_nNowDepth --;
//	}
//
//    int minDepth(TreeNode * root) {
//        // write your code here
//		if( !root )
//			return 0;
//		m_nNowDepth = 0;
//		m_nMinDepth = INT_MAX;
//		DFS( root );
//		return m_nMinDepth;
//    }
//};