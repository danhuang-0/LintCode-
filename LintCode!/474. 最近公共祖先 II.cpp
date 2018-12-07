//// 跟最近公共祖先不一样的地方在于
//// 这题中节点有父节点存在
//// 所以只要从要找的节点开始，一直扫一遍，并记录下来每个节点
//// 另一个也从下至上扫一遍直到找到为止就行了
//
//#include <iostream>
//#include <unordered_set>
//using namespace std;
//
//class ParentTreeNode {
//public:
//    int val;
//    ParentTreeNode *parent, *left, *right;
//};
//
//class Solution {
//public:
//    /*
//     * @param root: The root of the tree
//     * @param A: node in the tree
//     * @param B: node in the tree
//     * @return: The lowest common ancestor of A and B
//     */
//    ParentTreeNode * lowestCommonAncestorII(ParentTreeNode * root, ParentTreeNode * A, ParentTreeNode * B) {
//        // write your code here
//		unordered_set<ParentTreeNode*> setNums;
//		while( A != nullptr ){
//			setNums.insert( A );
//			A = A->parent;
//		}
//		while( B != nullptr ){
//			if( setNums.find( B ) != setNums.end() )
//				return B;
//			B = B->parent;
//		}
//		return nullptr;
//    }
//};
//
//int main(){
//
//	return 0;
//}