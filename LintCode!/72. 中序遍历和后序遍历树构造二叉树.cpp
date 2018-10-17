//// ��ȡ��������������һ����Ҳ����Ҫ�����ĸ��ڵ�
//// ֮������������в��Ҹ��ڵ㣬���ݸ��ڵ㻮��Ϊ��������
//// ����ʹ��һ��map�����Ͳ�ѯʱ�临�Ӷ�
//// ������������ĳ��ȣ�������������n�������������еģ���n+1�������ڶ��������������е�
//// ���ݶ�������˼�룬�ݹ��ȥ�������������������ͺ���
//// �ݹ��������Ҳ��������ֻ��һ���ڵ㣬������Ӧ���㣬��������������������
//// nLeft���Ǵ���nRight�ġ�
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