//// 直接按照题目的要求写就行
//
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /*
//     * @param A: An integer array
//     * @param B: An integer array
//     * @return: Cosine similarity
//     */
//    double cosineSimilarity(vector<int> &A, vector<int> &B) {
//        // write your code here
//		if( A.size() == 0 || B.size() == 0 )
//			return 2;
//		if( A.size() != B.size() )
//			return 2;
//		
//		long long llSumOfA = 0;
//		for( auto a : A )
//			llSumOfA += a * a;
//		if( llSumOfA == 0 )
//			return 2;
//
//		long long llSumOfB = 0;
//		for( auto b : B )
//			llSumOfB += b * b;
//		if( llSumOfB == 0 )
//			return 2;
//
//		long long llSumOfAandB = 0;
//		for( int i = 0; i<A.size(); i++ )
//			llSumOfAandB += A[i] * B[i];
//
//		auto ret = llSumOfAandB * 1.0 / ( sqrt(llSumOfA) * sqrt(llSumOfB) );
//		return ret;
//	}
//};
//
//int main(){
//	//int arrA[] = {1, 2, 3};
//	//int arrB[] = {2, 3 ,4};
//	int arrA[] = {0};
//	int arrB[] = {0};
//	Solution s;
//	s.cosineSimilarity( 
//		vector<int>( begin(arrA), end(arrA) ),
//		vector<int>( begin(arrB), end(arrB) ));
//
//}