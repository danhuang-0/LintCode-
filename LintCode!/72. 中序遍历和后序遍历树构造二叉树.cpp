//// 先取出后序遍历的最后一个，也就是要构建的根节点
//// 之后在中序遍历中查找根节点，根据根节点划分为左右子树
//// 其中使用一个map来降低查询时间复杂度
//// 计算出左子树的长度，后续遍历中这n个就是左子树中的，从n+1到倒数第二个都是右子树中的
//// 根据二叉树的思想，递归的去生成左子树和右子树就好了
//// 递归结束条件也就是数组只有一个节点，根据相应计算，他左子树或者右子树中
//// nLeft都是大于nRight的。
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
//			vector<int> &inorder, vector<int> &postorder,
//			int nLeftI, int nRightI, int nLeftP, int nRightP ){
//		if( nLeftI > nRightI )
//			return nullptr;
//		TreeNode * pRet = new TreeNode( postorder[nRightP] );
//		int nIndexInInorder = m_mapInorder[ postorder[nRightP] ];
//		int nLengthOfLeft = nIndexInInorder - nLeftI;
//
//
//		pRet->left = build( inorder, postorder,
//			nLeftI, nIndexInInorder-1, nLeftP, nLeftP+nLengthOfLeft-1 );
//		pRet->right = build( inorder, postorder,
//			nIndexInInorder+1, nRightI, nLeftP+nLengthOfLeft, nRightP-1 );
//		return pRet;
//	}
//
//    TreeNode * buildTree(vector<int> &inorder, vector<int> &postorder) {
//        // write your code here
//		m_mapInorder = unordered_map<int, int>();
//		for( int i=0; i<inorder.size(); i++ )
//			m_mapInorder[ inorder[i] ] = i;
//		return build( inorder, postorder, 0, inorder.size()-1, 0, postorder.size()-1);
//    }
//};
//
//int main(){
//	
//	int arrI[] = {1,2,3,4,5,6,7};
//	int arrP[] = {1,3,2,5,7,6,4};
//
//	vector<int> vecInorder( begin(arrI), end(arrI) );
//	vector<int> vecPostOrder( begin(arrP), end(arrP) );
//
//	Solution s;
//	auto ret = s.buildTree( vecInorder, vecPostOrder );
//	return 0;
//}