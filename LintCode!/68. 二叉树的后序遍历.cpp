//// �������ĺ�������Ƚ��鷳����һ���
//// ��һ����������Ƿ��ʽڵ�����ж��Ǵ��ĸ���������������ڵ�
//// ����ǴӺ��ӷ�����������ڵ�ģ���˵�������Ѿ��������ˣ��õ�ǰ�ڵ���
//// ����˵���յ�����ڵ㣬����ջ��ѹ���ˡ�
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
//class Solution {
//public:
//    /**
//     * @param root: A Tree
//     * @return: Postorder in ArrayList which contains node values.
//     */
//    vector<int> postorderTraversal(TreeNode * root) {
//        // write your code here
//		vector<int> vecRet;
//		if( !root )
//			return vecRet;
//
//		TreeNode *pNode = NULL;
//		TreeNode *pLast = NULL;
//		
//		stack<TreeNode *> s;
//
//		s.push( root );
//		while( !s.empty() ){
//			pNode = s.top();
//			if( (!pNode->left&&!pNode->right) ||
//				(pLast!=NULL &&( pLast==pNode->left||pLast==pNode->right))){
//				s.pop();
//				vecRet.push_back(pNode->val);
//				pLast = pNode;
//			} else {
//				if( pNode->right )
//					s.push(pNode->right);
//				if( pNode->left )
//					s.push(pNode->left);
//			}
//		}
//		return vecRet;
//    }
//};
//
//
//int main(){
//
//	TreeNode * root = new TreeNode(1);
//	root->left = new TreeNode(2);
//	root->right = new TreeNode(3);
//	Solution s;
//	s.postorderTraversal(root);
//
//	delete root->left;
//	delete root->right;
//	delete root;
//	
//	return 0;
//}