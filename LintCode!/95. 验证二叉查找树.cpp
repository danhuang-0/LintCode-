//// 利用二叉查找树中序遍历的特性
//// 二叉查找树中序遍历就是一个有序数组
//// 只要判断遍历结果是不是有序数组就可以了
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
//
//class Solution {
//public:
//    /**
//     * @param root: The root of binary tree.
//     * @return: True if the binary tree is BST, or false
//     */
//
//	void DFS ( TreeNode *root, vector<int> &vecVal ){
//		if( !root )
//			return;
//		DFS( root->left, vecVal );
//		vecVal.push_back( root->val );
//		DFS( root->right, vecVal );
//	}
//
//    bool isValidBST(TreeNode * root) {
//        // write your code here
//	
//		if( !root )
//			return true;
//
//		vector<int> vecVal;
//		DFS( root, vecVal );
//		
//		bool isValid = true;
//		for( int i=1; i<vecVal.size(); i++ ){
//			isValid = isValid &&( vecVal[i] > vecVal[i-1] );
//		}
//		return isValid;
//    }
//};