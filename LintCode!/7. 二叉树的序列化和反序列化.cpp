//#include <iostream>
//#include <string>
//#include <numeric>
//#include <vector>
//#include <stack>
//#include <sstream>
//#include <deque>
//#include <cstdlib>
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
//     * This method will be invoked first, you should design your own algorithm
//     * to serialize a binary tree which denote by a root node to a string which
//     * can be easily deserialized by your own "deserialize" method later.
//     */
//	// 使用前序遍历序列化
//    void pre_order( vector<string> *vecRet, TreeNode * root ){
//        vecRet->push_back( to_string(root->val)+"," ) ;
//        if ( root->left ) {
//            pre_order(vecRet, root->left);
//        } else {
//            vecRet->push_back("#,");
//        }
//        if( root->right ) {
//            pre_order(vecRet, root->right);
//        } else {
//            vecRet->push_back("#,");
//        }
//    }
//	// 前序遍历检查一下
//    void pre_view( TreeNode *root ){
//        if ( root==NULL ){
//            return;
//        }
//        cout<<root->val<<" ";
//        pre_view(root->left);
//        pre_view(root->right );
//    }
//	// 在使用伪前序遍历反序列化
//    void pre_make( deque<string> *deqData, TreeNode **root ){
//        if ( root==NULL || deqData==NULL ) {
//            return;
//        }
//        if ( deqData->size() ==0) {
//            return;
//        }
//        string strVal = deqData->front();
//        //cout<<strVal<<endl;
//        deqData->pop_front();
//        if (strVal == "#"){
//            return;
//        }
//        *root = new TreeNode( atoi( strVal.c_str()) );
//        pre_make(deqData, &(*root)->left);
//        pre_make(deqData, &(*root)->right);
//    }
//
//    string serialize(TreeNode * root) {
//        // write your code here
//        if (root==NULL){
//            return "";
//        }
//        vector<string> vecRet;
//        pre_order(&vecRet, root);
//        string strRet;
//        strRet = accumulate(vecRet.begin(), vecRet.end(), strRet);
//        strRet.pop_back();
//        return strRet;
//    }
//
//    /**
//     * This method will be invoked second, the argument data is what exactly
//     * you serialized at method "serialize", that means the data is not given by
//     * system, it's given by your own serialize method. So the format of data is
//     * designed by yourself, and deserialize it here as you serialize it in
//     * "serialize" method.
//     */
//    TreeNode * deserialize(string &data) {
//        // write your code here
//        deque<string> deqData;
//        istringstream iss(data);
//        string strTemp;
//        while (getline(iss, strTemp, ',')) {
//            deqData.push_back(strTemp);
//        }
//        //cout<<deqData.size();
//        TreeNode *node;
//        pre_make(&deqData, &node);
//        return node;
//    }
//};
//
//int main() {
//
//    Solution s;
//    auto *root = new TreeNode(3);
//    root->left = new TreeNode(9);
//    root->right = new TreeNode(20);
//    root->right->left = new TreeNode(15);
//    root->right->right = new TreeNode(7);
//
//    string strTree = s.serialize(root);
//
//    auto node = s.deserialize(strTree);
//    s.pre_view(node);
//    return 0;
//}