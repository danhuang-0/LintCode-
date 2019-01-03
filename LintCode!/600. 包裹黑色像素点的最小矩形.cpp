//// BFS 遍历每个黑点，拿到上下左右四个坐标的极值即可
//// 要注意题目传进来的 0,1 是 '0'和 '1'
//
//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * @param image: a binary matrix with '0' and '1'
//     * @param x: the location of one of the black pixels
//     * @param y: the location of one of the black pixels
//     * @return: an integer
//     */
//    int minArea(vector<vector<char>> &image, int x, int y) {
//        // write your code here
//		if( image.size() == 0 || image[0].size() == 0 )
//			return 0;
//		vector<vector<bool>> isView(image.size(), vector<bool>(image[0].size(), false));
//		queue<pair<int,int>> que;
//		int nTop = x;
//		int nBottom = x;
//		int nLeft = y;
//		int nRight = y;
//		que.push(pair<int,int>(x,y));
//		isView[x][y] = true;
//		while( !que.empty() ){
//			auto p = que.front();
//			que.pop();
//
//			// x 为纵轴，从上至下递增，y 从左到右递增
//			x = p.first;
//			y = p.second;
//			// 记录极值
//			if( x > nBottom )
//				nBottom = p.first;
//			if( x < nTop )
//				nTop = p.first;
//			if( y > nRight )
//				nRight = p.second;
//			if( y < nLeft )
//				nLeft = p.second;
//			
//			// BFS 寻找下一个点
//			if( x + 1 < image.size() && image[x+1][y] == '1' && !isView[x+1][y] ){
//				isView[x+1][y] = true;
//				que.push(pair<int, int>(x+1, y));
//			}
//			if( x - 1 >= 0 && image[x-1][y] == '1' && !isView[x-1][y] ){
//				isView[x-1][y] = true;
//				que.push(pair<int, int>(x-1, y));
//			}
//			if( y + 1 < image[x].size() && image[x][y+1] == '1' && !isView[x][y+1] ){
//				isView[x][y+1] = true;
//				que.push(pair<int, int>(x, y+1));
//			}
//			if( y - 1 >= 0 && image[x][y-1] == '1' && !isView[x][y-1] ){
//				isView[x][y-1] = true;
//				que.push(pair<int, int>(x, y-1));
//			}
//		}
//		int nRet = ( nBottom - nTop + 1 ) * ( nRight - nLeft + 1 );
//		return nRet;
//    }
//};
//
//int main(){
//	char l[][4] = {{'0','0','1','0'},
//				   {'0','1','1','0'},
//				   {'0','1','0','0'}};
//	vector<vector<char>> vecNums(3);
//	for( int i=0; i<3; i++ )
//		vecNums[i] = vector<char>( begin(l[i]), end(l[i]));
//	Solution s;
//	s.minArea( vecNums, 0, 2 );
//}
