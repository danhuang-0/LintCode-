//// �����߼������жϳ�
//// �����ǰ�ڵ���ҪѰ�ҵĽڵ� һ���м������
//// 1. A��B��ͬ�����ҵ��ڵ�ǰ�ڵ�
//// 2. A����B���ڵ�ǰ�ڵ㣬����һ���ڵ��ڵ�ǰ�ڵ������������������
//// 3. A��B�ֱ��ڵ�ǰ�ڵ������������������
//// ֻҪ�ݹ��ȥ��ѯ������������ά��ȫ�ַ���ֵ�ͺ���
//
//#include <iostream>
//#include <vector>
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
//     * @param A: A TreeNode in a Binary.
//     * @param B: A TreeNode in a Binary.
//     * @return: Return the least common ancestor(LCA) of the two nodes.
//     */
//
//	TreeNode * pRet;
//
//	struct hasNodeRet{
//		bool hasA, hasB;
//	};
//
//	hasNodeRet hasNode( TreeNode * root, TreeNode * A, TreeNode * B ){
//		hasNodeRet ret = {false, false};
//		if( root==nullptr )
//			return ret;
//		if( A==B && A==root ){
//			pRet = root;
//			return ret;
//		}
//		if( root == A )
//			ret.hasA = true;
//		if( root == B )
//			ret.hasB = true;
//		hasNodeRet left = hasNode( root->left, A, B );
//		hasNodeRet right = hasNode( root->right, A, B );
//		if( pRet != nullptr )
//			return ret;
//		if( root == A && ( left.hasB || right.hasB )){
//			pRet = root;
//		} else if ( root == B && ( left.hasA || right.hasA )){
//			pRet = root;
//		} else if( left.hasA && right.hasB || left.hasB && right.hasA ) {
//			pRet = root;
//		}
//		ret.hasA = ret.hasA || left.hasA || right.hasA;
//		ret.hasB = ret.hasB || left.hasB || right.hasB;
//		return ret;
//	}
//
//    TreeNode * lowestCommonAncestor(TreeNode * root, TreeNode * A, TreeNode * B) {
//        // write your code here
//		pRet = nullptr;
//		hasNode( root, A, B );
//		return pRet;
//    }
//};
//
//int main(){
//
//	vector< TreeNode > vecNodes(5, 0);
//	vecNodes[0].val = 4;
//	vecNodes[1].val = 3;
//	vecNodes[2].val = 7;
//	vecNodes[3].val = 5;
//	vecNodes[4].val = 6;
//	
//	vecNodes[0].left = &vecNodes[1];
//	vecNodes[0].right = &vecNodes[2];
//	vecNodes[2].left = &vecNodes[3];
//	vecNodes[2].right = &vecNodes[4];
//
//	Solution s;
//
//	s.lowestCommonAncestor( &vecNodes[0], &vecNodes[1], &vecNodes[3]);
//	s.lowestCommonAncestor( &vecNodes[0], &vecNodes[3], &vecNodes[4]);
//	s.lowestCommonAncestor( &vecNodes[0], &vecNodes[4], &vecNodes[2]);
//
//	return 0;
//}