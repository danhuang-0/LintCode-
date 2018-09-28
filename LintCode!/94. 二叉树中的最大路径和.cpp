//// ����õ�ǰ�ڵ����ڵ��ҽڵ㣬�Ͳ������ϴ�����
//// �������ϴ��ݵ������ҵ����ֵ���ϵ�ǰֵ
//// ���ֵ�������������ֵ�������������ֵ�͵�ǰֵ����Ϻ�֮һ
//// �ݹ�Ĺ�����ʱ��ά�����ֵ����
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
//     * @param root: The root of binary tree.
//     * @return: An integer
//     */
//
//	int m_nMax;
//
//	int findMax( TreeNode * root ){
//		if( !root )
//			return 0;
//		bool isLeaf = !root->left && !root->right;
//		int nLeft = findMax( root->left );
//		int nRight = findMax( root->right );
//		int nMax = max( nLeft, nRight );
//		if( !isLeaf ){
//			int nAll = nLeft + nRight + root->val;
//			if( nAll > m_nMax )
//				m_nMax = nAll;
//		}
//		if( nMax + root->val > m_nMax )
//			m_nMax = nMax + root->val;  
//		if( root->val > m_nMax )
//			m_nMax = root->val;
//		return max(root->val, nMax + root->val);
//	}
//    int maxPathSum(TreeNode * root) {
//        // write your code here
//		m_nMax = INT_MIN;
//		findMax( root );
//		return m_nMax;
//	}
//};
//
//int main (){
//
//	TreeNode root( 1 );
//	root.left = new TreeNode( 2 );
//	root.right = new TreeNode( 3 );
//	Solution s;
//	s.maxPathSum( &root );
//
//
//	delete root.left;
//	delete root.right;
//	return 0;
//}