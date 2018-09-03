//// DFS 一边遍历一边构造
//// 其实直接传root 回去也行，肯定更快23333
//
//#include <iostream>
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
//     * @return: root of new tree
//     */
//
//	void DFS( TreeNode *root1, TreeNode *root2 ){
//		if( root1 -> left ){
//			root2->left = new TreeNode( root1->left->val );
//			DFS( root1->left, root2->left );
//		}
//		if( root1->right ){
//			root2->right = new TreeNode( root1->right->val );
//			DFS( root1->right, root2->right );
//		}		
//	}
//    TreeNode * cloneTree(TreeNode * root) {
//        // write your code here
//		if( root==NULL )
//			return NULL;
//		TreeNode *root2 = new TreeNode( root->val );
//		DFS( root, root2 );
//        return root2;
//    }
//};
//
//int main () {
//
//	return 0;
//}