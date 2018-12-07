//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Trie {
//public:
//	class Node{
//	public:
//		vector<Node*> vecNodes;
//		bool isEnd;
//		Node(){
//			vecNodes = vector<Node*>(26, nullptr );
//			isEnd = true;
//		}
//		static void deleteNode( const Node * pNode ) {
//			if( pNode == nullptr )
//				return;
//			for( auto p : pNode->vecNodes ){
//				if( p )
//					deleteNode(p);
//			}
//			delete pNode;
//		}
//	};
//	Node * head;
//    Trie() {
//        // do intialization if necessary
//		head = new Node;
//		head->isEnd = false;
//    }
//	~Trie(){
//		Node::deleteNode( head );
//	}
//
//    /*
//     * @param word: a word
//     * @return: nothing
//     */
//    void insert(string &word) {
//        // write your code here
//		if( word.size() ==0 )
//			return ;
//		Node * pNode = head;
//		for( int i=0; i<word.size()-1; i++ ){
//			if( pNode->vecNodes[ word[i] - 'a' ] == nullptr )
//				pNode->vecNodes[ word[i] - 'a' ] = new Node();
//			pNode = pNode->vecNodes[ word[i] - 'a' ];
//			pNode->isEnd = false;
//		}
//		if( pNode->vecNodes[ word[word.size()-1] - 'a' ] == nullptr )
//			pNode->vecNodes[ word[word.size()-1] - 'a' ] = new Node();
//		pNode->vecNodes[ word[word.size()-1] - 'a' ]->isEnd == true;
//    }
//
//    /*
//     * @param word: A string
//     * @return: if the word is in the trie.
//     */
//    bool search(string &word) {
//        // write your code here
//		Node * pNode = head;
//		for( auto ch : word ){
//			if( pNode == nullptr )
//				return false;
//			if( pNode->vecNodes[ ch - 'a' ] == nullptr )
//				return false;
//			pNode = pNode->vecNodes[ ch - 'a' ];
//		}
//		return pNode->isEnd;
//    }
//
//    /*
//     * @param prefix: A string
//     * @return: if there is any word in the trie that starts with the given prefix.
//     */
//    bool startsWith(string &prefix) {
//        // write your code here
//		Node * pNode = head;
//		for( auto ch : prefix ){
//			if( pNode == nullptr )
//				return false;
//			if( pNode->vecNodes[ ch - 'a' ] == nullptr )
//				return false;
//			pNode = pNode->vecNodes[ ch - 'a' ];
//		}
//		return true;
//    }
//};
//
//int main(){
//
//	Trie t;
//	bool b; 
//	t.insert(string("ab"));
//	b = t.search(string("a"));
//	b = t.search(string("ab"));
//	b = t.startsWith(string("a"));
//	b = t.startsWith(string("ab")) ;
//
//	return 0;
//}