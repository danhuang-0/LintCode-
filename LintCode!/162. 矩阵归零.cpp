//// 因为一行如果出现一个 0 这一行都要归零
//// 所以只需要用第一列，记录这一行有没有 0 就行了
//// 使用第一列和第一行来记录 某行和某列有没有0
//// 要保证第一行和第一列正确的归零
//// 所以用两个变量来记录第一行和第一列中最开始有没有0
//// 根据这两个变量来给第一行和第一列正确归零
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param matrix: A lsit of lists of integers
//     * @return: nothing
//     */
//    void setZeroes(vector<vector<int>> &matrix) {
//        // write your code here
//		if( matrix.size()==0 )
//			return;
//		if( matrix[0].size()==0 )
//			return;
//		bool bFirstRowIsZero = false;
//		bool bFirstColIsZero = false;
//		for( int i=0; i<matrix.size(); i++ ){
//			if( matrix[i][0] == 0 ){
//				bFirstColIsZero = true;
//				break;
//			}
//		}
//		for( int i=0; i<matrix[0].size(); i++ ){
//			if( matrix[0][i] == 0 ){
//				bFirstRowIsZero = true;
//				break;
//			}
//		}
//		for( int i=1; i<matrix.size(); i++ ){
//			for( int j=1; j<matrix[i].size(); j++ ){
//				if( matrix[i][j] == 0 ){
//					matrix[i][0] = 0;
//					matrix[0][j] = 0;
//				}
//			}
//		}
//		for( int i=1; i<matrix.size(); i++ ){
//			if( matrix[i][0] == 0 ){
//				matrix[i] = vector<int>( matrix[i].size(), 0 );
//			}
//		}
//		for( int i=0; i<matrix[0].size(); i++ ){
//			if( matrix[0][i] == 0 ){
//				for( int j=0; j<matrix.size(); j++ ){
//					matrix[j][i] = 0;
//				}
//			}
//		}
//		if( bFirstRowIsZero ){
//			matrix[0] = vector<int>( matrix[0].size(), 0 );
//		}
//		if( bFirstColIsZero ){
//			for( int i=0; i<matrix.size(); i++ ){
//				matrix[i][0] = 0;
//			}
//		}
//    }
//};
//
//int main(){
//
//	vector<vector<int>> vecNums( 5 );
//	for( int i=0; i<vecNums.size(); i++ ){
//		vecNums[i] = vector<int>( 5 );
//	}
//	for( int i=0; i<vecNums.size(); i++ ){
//		for( int j=0; j<vecNums[i].size(); j++ )
//			vecNums[i][j] = i * vecNums[i].size() + j;
//	}
//
//	vecNums[3][4] = 0;
//	vecNums[1][2] = 0;
//	vecNums[1][1] = 0;
//
//	Solution s;
//	
//	s.setZeroes( vecNums );
//
//	return 0;
//}