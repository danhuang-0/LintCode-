//// ��Ŀ�����и����������� nlgn ���㷨�϶���Ҫ��ը��
//// ������û�� n ���㷨
//// ��ʵ����Ŀ�����ݾͿ��Կ�����
//// ֻҪ��Ҷ�ڵ㿪ʼ���ҵ�������һ�㣬�����ڶ��㣬���������㼴��
//// ͬʱ���ҽڵ�Ĳ�߶Ȳ�һ����ʱ��ȡ���һ��
//// ��Ϊһ���ڵ����ҽڵ����������ǲ��ᱻ�Ƴ���
//
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
//     * @param root: the root of binary tree
//     * @return: collect and remove all leaves
//     */
//
//	int DFS( TreeNode * root, vector<vector<int>> &vecRet ){
//		if( !root )
//			return 0;
//
//		int nLeft = DFS( root->left, vecRet );
//		int nRight = DFS( root->right, vecRet );
//
//		int nMax = max( nLeft, nRight );
//		if( vecRet.size() <= nMax )
//			vecRet.push_back( vector<int> () );
//		vecRet[nMax].push_back( root->val );
//		return nMax + 1;
//	}
//
//    vector<vector<int>> findLeaves(TreeNode * root) {
//        // write your code here
//
//		vector<vector<int>> vecRet;
//		DFS( root, vecRet );
//		return vecRet;
//    }
//};