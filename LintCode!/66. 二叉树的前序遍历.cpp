//// 用栈模拟递归进行前序遍历
//
//#include <iostream>
//#include <stack>
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
//     * @param root: A Tree
//     * @return: Preorder in ArrayList which contains node values.
//     */
//    vector<int> preorderTraversal(TreeNode * root) {
//        // write your code here
//		vector<int> vecRet;
//		stack<TreeNode*> s;
//		TreeNode *pNode = root;
//		while( pNode || !s.empty() ){
//			while( pNode ){
//				vecRet.push_back( pNode->val );
//				s.push( pNode );
//				pNode = pNode->left;
//			}
//			if( !s.empty() ){
//				pNode = s.top()->right;
//				s.pop();
//			}
//		}
//		return vecRet;
//    }
//};