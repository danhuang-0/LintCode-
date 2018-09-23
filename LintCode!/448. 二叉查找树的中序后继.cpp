//// 如果要找的节点有右子树
//// 则在右子树中一直向左找到右子树最下节点
//// 如果要找的节点没有右子树
//// 则记录下从根到当前节点的路径
//// 出现当前值在某节点的左子树时，这个节点就是下一个值
//
//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//    /*
//     * @param root: The root of the BST.
//     * @param p: You need find the successor node of p.
//     * @return: Successor of p.
//     */
//    TreeNode * inorderSuccessor(TreeNode * root, TreeNode * p) {
//        // write your code here
//
//		if( !root )
//			return nullptr;
//		if( p->right ){
//			TreeNode * pNode = p->right;
//			while( pNode->left )
//				pNode = pNode->left;
//			return pNode;
//		}
//		TreeNode *pNode = root;
//		stack<TreeNode *> stkNodes;
//		while( pNode->val != p->val && pNode != nullptr ){
//			stkNodes.push( pNode );
//			if( p->val > pNode->val )
//				pNode = pNode->right;
//			else
//				pNode = pNode->left;
//		}
//
//		if( !pNode )
//			return nullptr;
//		
//		TreeNode * pRet = nullptr;
//		TreeNode * pLast = p;
//		TreeNode * pCur;
//		while( !stkNodes.empty() ){
//			pCur = stkNodes.top();
//			stkNodes.pop();
//			
//			if( pLast == pCur->left ){
//				pRet = pCur;
//				break;
//			}
//			pLast = pCur;
//		}
//		return pRet;
//    }
//};