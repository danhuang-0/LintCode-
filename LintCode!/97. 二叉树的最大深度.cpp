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
//     * @param root: The root of binary tree.
//     * @return: An integer
//     */
//
//	int m_nDepth;
//	int m_nMaxDetph;
//
//	void DFS( TreeNode * root ){
//		if( !root )
//			return;
//		m_nDepth ++;
//		if( m_nDepth > m_nMaxDetph )
//			m_nMaxDetph = m_nDepth;
//	
//		DFS( root->left );
//		DFS( root->right );
//		m_nDepth--;
//	}
//
//    int maxDepth(TreeNode * root) {
//        // write your code here
//		m_nDepth = 0;
//		m_nMaxDetph = 0;
//		DFS( root );
//		return m_nMaxDetph;
//    }
//};