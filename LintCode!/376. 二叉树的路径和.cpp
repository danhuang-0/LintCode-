//// 普通的 DFS 即可
//// 可能会出现负数，注意不要剪枝
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
//     * @param target: An integer
//     * @return: all valid paths
//     */
//
//	void DFS( vector<vector<int>> &vecRet, TreeNode * pRoot,
//			int nTarget, int nSum, vector<int> &vecSum ){
//		if( pRoot == nullptr )
//			return;
//		
//		nSum += pRoot->val;
//		vecSum.push_back( pRoot->val );
//		if( pRoot->left == nullptr && pRoot->right == nullptr ){
//			if( nSum == nTarget ){
//				vecRet.push_back( vecSum );
//				vecSum.pop_back();
//				return;
//			}
//		}
//		DFS( vecRet, pRoot->left, nTarget, nSum, vecSum );
//		DFS( vecRet, pRoot->right, nTarget, nSum, vecSum );
//		vecSum.pop_back();
//	}
//
//    vector<vector<int>> binaryTreePathSum(TreeNode * root, int target) {
//        // write your code here
//
//		vector<vector<int>> vecRet;
//		if( root == nullptr )
//			return vecRet;
//		vector<int> vecSum;
//		DFS( vecRet, root, target, 0, vecSum );
//		return vecRet;
//    }
//};
//
//int main (){
//
//	TreeNode * pRoot = new TreeNode( 1 );
//	pRoot->left = new TreeNode( 2 );
//	pRoot->right = new TreeNode( 4 );
//
//	pRoot->left->left = new TreeNode( 2 );
//	pRoot->left->right = new TreeNode( 3 );
//
//	Solution s;
//	s.binaryTreePathSum( pRoot, 5 );
//
//	return 0;
//}