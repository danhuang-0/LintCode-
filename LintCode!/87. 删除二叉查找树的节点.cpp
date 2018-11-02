//// 二叉查找树的删除规则
//// 如果要删除的节点没有左右子节点，直接将父节点的相应指针置空
//// 如果有左节点或右节点，将父节点的相应节点与子节点的左节点或右节点连接
//// 如果既有左节点又有右节点，则根据二叉查找树的性质
//// 找到左子树的最右节点或者右子树的最左节点，将值与要删除的节点交换
//// 然后再去删除相应的节点就好了
//// 要时刻注意要删除的节点有可能是根节点的情况
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
//     * @param root: The root of the binary search tree.
//     * @param value: Remove the node with given value.
//     * @return: The root of the binary search tree after removal.
//     */
//
//	TreeNode * deleteNode( TreeNode * pFather, TreeNode * pNode ){
//  		if( pNode->left == nullptr && pNode->right == nullptr ){
//			if( pFather ){
//				if( pNode == pFather->left )
//					pFather->left = nullptr;
//				else
//					pFather->right = nullptr;
//			}
//			delete pNode;
//			return nullptr;
//		} else if ( pNode->left && pNode->right ){
//			TreeNode * pDel = pNode->left;
//			pFather = pNode;
//			while( pDel->right ){
//				pFather = pDel;
//				pDel = pDel->right;
//			}
//			swap( pDel->val, pNode->val );
//			deleteNode( pFather, pDel );
//			return pNode;
//		} else if ( pNode->left ){
//			if( pFather ){
//				if( pNode == pFather->left )
//					pFather->left = pNode->left;
//				else
//					pFather->right = pNode->left;
//			}
//			TreeNode * pTemp = pNode->left;
//			delete pNode;
//			return pTemp;
//		} else {
//			if( pFather ){
//				if( pNode == pFather->left )
//					pFather->left = pNode->right;
//				else
//					pFather->right = pNode->right;
//			}
//			TreeNode * pTemp = pNode->right;
//			delete pNode;
//			return pTemp;
//		}
//	}
//    TreeNode * removeNode(TreeNode * root, int value) {
//        // write your code here
//		if( root == nullptr )
//			return nullptr;
//		TreeNode * pFather = nullptr;
//		TreeNode * pFind = root;
//		while( pFind ){
//			if( pFind->val == value )
//				break;
//			pFather = pFind;
//			if( value > pFind->val )
//				pFind = pFind->right;
//			else
//				pFind = pFind->left;
//		}
//		if( !pFind )
//			return nullptr;
//		TreeNode * pRet = deleteNode( pFather, pFind );
//		if( pFind == root )
//			return pRet;
//		return root;
//    }
//};
//
//
//int main(){
//
//	TreeNode root( 20 );
//	root.left = new TreeNode( 1 );
//	root.right = new TreeNode(40);
//	root.right->left = new TreeNode(35);
//	Solution s;
//	s.removeNode( &root, 20 );
//
//
//	delete root.right->right;
//	delete root.left;
//	delete root.right;
//	return 0;
//}