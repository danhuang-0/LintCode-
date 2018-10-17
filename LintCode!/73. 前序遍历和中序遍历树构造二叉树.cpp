//// 解法参考 72，代码也就是照着 72 改的23333
//// 前序遍历和后续遍历区别就在于根节点是在数组的开头还是结尾
//// 只要根据这一个特性进行就好了。
//
//#include <iostream>
//#include <vector>
//#include <unordered_map>
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
//     * @param inorder: A list of integers that inorder traversal of a tree
//     * @param postorder: A list of integers that postorder traversal of a tree
//     * @return: Root of a tree
//     */
//
//	unordered_map<int, int> m_mapInorder;
//
//	TreeNode * build( 
//			vector<int> &inorder, vector<int> &preorder,
//			int nLeftI, int nRightI, int nLeftP, int nRightP ){
//		if( nLeftI > nRightI )
//			return nullptr;
//		TreeNode * pRet = new TreeNode( preorder[nLeftP] );
//		int nIndexInInorder = m_mapInorder[ preorder[nLeftP] ];
//		int nLengthOfLeft = nIndexInInorder - nLeftI;
//
//
//		pRet->left = build( inorder, preorder,
//			nLeftI, nIndexInInorder-1, nLeftP+1, nLeftP+nLengthOfLeft );
//		pRet->right = build( inorder, preorder,
//			nIndexInInorder+1, nRightI, nLeftP+nLengthOfLeft+1, nRightP );
//		return pRet;
//	}
//
//
//	TreeNode * buildTree(vector<int> &preorder, vector<int> &inorder) {
//        // write your code here
//		m_mapInorder = unordered_map<int, int>();
//		for( int i=0; i<inorder.size(); i++ )
//			m_mapInorder[ inorder[i] ] = i;
//		return build( inorder, preorder, 0, inorder.size()-1, 0, preorder.size()-1);
//    }
//};
//
//int main(){
//	
//	int arrI[] = {1,2,3,4,5,6,7};
//	int arrP[] = {4,2,1,3,6,5,7};
//
//	vector<int> vecInorder( begin(arrI), end(arrI) );
//	vector<int> vecPreorder( begin(arrP), end(arrP) );
//
//	Solution s;
//	auto ret = s.buildTree( vecPreorder, vecInorder );
//	return 0;
//}