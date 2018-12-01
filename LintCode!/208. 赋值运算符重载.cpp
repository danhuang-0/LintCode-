//// 由于传入数据在程序结束后检测方会delete一次
//// 所以不能使用析构进行优雅的释放数据
//// 采用的思想为 commit or rollback
//// 先制作出一个副本，之后交换复本与要赋值的对象
//// 之后 delete 副本的指针即可
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    char *m_pData;
//    Solution() {
//        this->m_pData = NULL;
//    }
//
//    Solution(char *pData) {
//        this->m_pData = pData;
//    }
//
//	//~Solution(){
//	//	delete m_pData;
//	//}
//
//    // Implement an assignment operator
//    Solution operator=(const Solution &object) {
//		if( &object == this )
//			return object;
//        // write your code here
//		Solution temp;
//		if( object.m_pData != nullptr ){
//			int nSize = strlen( object.m_pData );
//			temp.m_pData = new char[nSize+1];
//			strcpy( temp.m_pData, object.m_pData );
//		}
//		swap( temp.m_pData, m_pData );
//		delete temp.m_pData;
//		return *this;
//    }
//};
//
//int main (){
//
//	char * pA = new char[10];
//	char * pB = new char[10];
//	char * pC = new char[10];
//
//	sprintf(pA, "AAAA");
//	sprintf(pB, "BBBB");
//	sprintf(pC, "CCCC");
//
//
//	Solution A( pA );
//	Solution B( pB );
//	Solution C( pC );
//
//	A=B=C;
//
//	return 0;
//}