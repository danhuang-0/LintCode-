///* 只用一个队列的做法
// * 跟剑指OFFER里面层序遍历那个题思路一样
// * 判断是第一个节点的时候换行和开一个新的Vector类似
// * 用变量记录这当前first有没有孩子，没有的话需要传递first到后面的节点
// * 直到有孩子为止，避免最左侧节点没有孩子导致first标志传递不下去。
// */
//
//
//#include <iostream>
//#include <queue>
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
//class NodeEx{
//public:
//	TreeNode *pNode;
//	bool isFirst;
//	NodeEx(TreeNode *p,bool b){
//		pNode = p;
//		isFirst = b;
//	}
//};
//
//class Solution {
//public:
//    /**
//     * @param root: A Tree
//     * @return: Level order a list of lists of integer
//     */
//    vector<vector<int>> levelOrder(TreeNode * root) {
//        // write your code here
//		vector<vector<int>> ret;
//
//		if( root==NULL )
//			return ret;	
//		
//		queue<NodeEx*> queNodes;
//		NodeEx *pNode = new NodeEx(root,true);
//		queNodes.push(pNode);
//		bool firstHasChild = root->left!=NULL || root->right!=NULL ;
//		while( queNodes.size()!=0 ){
//			pNode = queNodes.front();
//			
//			queNodes.pop();
//			if( pNode->isFirst )
//				ret.push_back(vector<int>());
//			ret.back().push_back(pNode->pNode->val);
//			if( pNode->pNode->left ){
//				NodeEx *pTempNode = new NodeEx(pNode->pNode->left,pNode->isFirst || !firstHasChild);
//				queNodes.push(pTempNode);
//				pNode->isFirst = false;
//				firstHasChild = true;
//			}
//			if( pNode->pNode->right ){
//				NodeEx *pTempNode = new NodeEx(pNode->pNode->right,pNode->isFirst || !firstHasChild);
//				queNodes.push(pTempNode);
//			}
//
//			if( pNode->isFirst || !firstHasChild )
//				firstHasChild = pNode->pNode->left!=NULL || pNode->pNode->right!=NULL;
//		}
//		return ret;
//    }
//};