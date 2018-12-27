//// 递归对左子树和右子树进行查找
//// 第一个集齐两个标记的节点就是要寻找的节点
//
//#include <iostream>
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
//    /*
//     * @param root: The root of the binary tree.
//     * @param A: A TreeNode
//     * @param B: A TreeNode
//     * @return: Return the LCA of the two nodes.
//     */
//
//	void findTwoNodes( TreeNode * root, TreeNode * A, TreeNode * B,
//		bool &isFindA, bool &isFindB, TreeNode * &ret ){
//		
//		if( root == nullptr )
//			return;
//		if( ret != nullptr )
//			return;
//		
//		bool leftFindA = isFindA;
//		bool leftFindB = isFindB;
//
//		findTwoNodes( root->left, A, B, leftFindA, leftFindB, ret );
//		if( ret != nullptr )
//			return;
//
//		bool rightFindA = isFindA;
//		bool rightFindB = isFindB;
//		findTwoNodes( root->right, A, B, rightFindA, rightFindB, ret);
//		if( ret != nullptr )
//			return;
//		if( root == A )
//			isFindA = true;
//		if( root == B )
//			isFindB = true;
//		isFindA = isFindA || leftFindA || rightFindA;
//		isFindB = isFindB || leftFindB || rightFindB;
//		if( isFindA && isFindB )
//			ret = root;
//	}
//
//    TreeNode * lowestCommonAncestor3(TreeNode * root, TreeNode * A, TreeNode * B) {
//        // write your code here
//		TreeNode * ret = nullptr;
//		bool isFindA = false;
//		bool isFindB = false;
//		findTwoNodes(root, A, B, isFindA, isFindB, ret);
//		return ret;
//    }
//};
//
//int main(){
//	// 制作测试用例太麻烦了。。。不想测试
//	return 0;
//}