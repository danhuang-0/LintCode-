//// ������������Ȳ�һ���ĵط�����
//// �����нڵ��и��ڵ����
//// ����ֻҪ��Ҫ�ҵĽڵ㿪ʼ��һֱɨһ�飬����¼����ÿ���ڵ�
//// ��һ��Ҳ��������ɨһ��ֱ���ҵ�Ϊֹ������
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