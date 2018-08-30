// 用栈模拟递归进行前序遍历

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val) {
        this->val = val;
        this->left = this->right = NULL;
    }
};


class Solution {
public:
    /**
     * @param root: A Tree
     * @return: Preorder in ArrayList which contains node values.
     */
    vector<int> preorderTraversal(TreeNode * root) {
        // write your code here
		vector<int> vecRet;
		if( !root )
			return vecRet;
		stack<TreeNode*> s;
		s.push(root);
		TreeNode *pNode;
		while(!s.empty()){
			pNode = s.top();
			s.pop();
			vecRet.push_back(pNode->val);
			if( pNode->left )
				s.push(pNode->left);
			if( pNode->right )
				s.push(pNode->right);
		}
		return vecRet;
    }
};