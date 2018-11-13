//// 思路跟二分查找类似
//// 先摘出来根节点数字
//// 然后递归生成左右子树
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
//     * @param A: an integer array
//     * @return: A tree node
//     */
//
//	TreeNode * buildTree( vector<int> vecNums, int nLeft, int nRight ){
//		if( nLeft > nRight )
//			return nullptr;
//		int nMid = ( nLeft + nRight ) / 2;
//		TreeNode * pNode = new TreeNode( vecNums[nMid] );
//		pNode->left = buildTree( vecNums, nLeft, nMid - 1 );
//		pNode->right = buildTree( vecNums, nMid + 1, nRight );
//		return pNode;
//	}
//
//    TreeNode * sortedArrayToBST(vector<int> &A) {
//        // write your code here
//		if( A.size() == 0 )
//			return nullptr;
//		return buildTree( A, 0, A.size()-1 );
//    }
//};
//
//int main(){
//
//	int arr[] = {1,2,3,4,5,6,7};
//	
//	Solution s;
//	auto root = s.sortedArrayToBST( vector<int>( begin( arr ), end( arr ) ) );
//
//	return 0;
//}