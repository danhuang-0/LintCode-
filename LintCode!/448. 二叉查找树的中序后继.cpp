//// ���Ҫ�ҵĽڵ���������
//// ������������һֱ�����ҵ����������½ڵ�
//// ���Ҫ�ҵĽڵ�û��������
//// ���¼�´Ӹ�����ǰ�ڵ��·��
//// ���ֵ�ǰֵ��ĳ�ڵ��������ʱ������ڵ������һ��ֵ
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