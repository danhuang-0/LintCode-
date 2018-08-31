//// 同样是用栈模拟中序遍历过程
//
//#include <iostream>
//#include <vector>
//#include <stack>
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
//     * @return: Inorder in ArrayList which contains node values.
//     */
//    vector<int> inorderTraversal(TreeNode * root) {
//        // write your code here
//
//		stack<TreeNode*> s;
//		TreeNode *pNode = root;
//		vector<int> vecRet;
//
//		while( pNode || !s.empty() ){
//			while( pNode ){
//				s.push(pNode);
//				pNode = pNode->left;
//			}
//			if( !s.empty() ){
//				pNode = s.top();
//				s.pop();
//				vecRet.push_back( pNode->val );
//				pNode = pNode->right;
//			}
//		}
//		return vecRet;
//    }
//};