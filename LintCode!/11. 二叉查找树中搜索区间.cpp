//#include <vector>
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
//     * @param root: param root: The root of the binary search tree
//     * @param k1: An integer
//     * @param k2: An integer
//     * @return: return: Return all keys that k1<=key<=k2 in ascending order
//     */
//	//����ܼ��˾Ͳ�������
//	// �����������������������������ģ�ֻҪ���������һ��ɸѡ�͹���
//    void LDT( vector<int> *vecRet , TreeNode *root,
//            int leftValue, int rightValue ){
//        if( root==NULL ){
//            return;
//        }
//
//        LDT(vecRet, root->left, leftValue, rightValue);
//        if( root->val >= leftValue &&
//            root->val <= rightValue )
//            vecRet->push_back(root->val);
//        LDT(vecRet, root->right, leftValue, rightValue);
//    }
//
//    vector<int> searchRange(TreeNode * root, int k1, int k2) {
//        // write your code here
//        vector<int> vecRet;
//        LDT( &vecRet, root, k1, k2);
//        return vecRet;
//    }
//};
//
//
//int main(){
//    return 0;
//}