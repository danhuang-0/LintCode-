//// 使用中序遍历构建 list
//// 只要判断当前值是不是list的end就行了
//// 遍历的时候对当前迭代器加一就好了
//
//#include <iostream>
//#include <list>
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
//class BSTIterator {
//public:
//    /*
//    * @param root: The root of binary tree.
//    */
//	
//	list<TreeNode *> m_lstNums;
//	list<TreeNode *>::iterator m_iteNext;
//
//	void DFS ( TreeNode *root ){
//		if( !root )
//			return;
//		DFS( root->left );
//		m_lstNums.push_back( root );
//		DFS( root->right );
//	}
//
//	BSTIterator(TreeNode * root) {
//        // do intialization if necessary
//		m_lstNums = list<TreeNode *>();
//		DFS( root );
//		m_iteNext = m_lstNums.begin();
//    }
//
//    /*
//     * @return: True if there has next node, or false
//     */
//    bool hasNext() {
//        // write your code here
//		return m_iteNext != m_lstNums.end();
//    }
//
//    /*
//     * @return: return next node
//     */
//    TreeNode * next() {
//        // write your code here
//		auto pRet = *m_iteNext;
//		m_iteNext++;
//		return pRet;
//    }
//};