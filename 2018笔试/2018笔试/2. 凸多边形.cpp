//// 逆时针输入节点的话
//// 如果是凸多边形，新输入的节点一定在之前两个节点的连线的左侧
//
//// 怎么判断点在射线的左侧？？？
//// 用向量计算角度？？
//
//// 最后也要计算一下最后三个节点的关系，防止出现螺线型非凸多边形
//
//
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//const double pi = 3.1415926 ;
//
//struct Vector{
//	int x, y;
//};
//
//
//int main(){
//	int nNumOfNodes;
//	int nTemp;
//	while ( cin >> nNumOfNodes ) {
//		if ( nNumOfNodes <= 2 ){
//			for( int i=0; i< 2 * nNumOfNodes+1 ; i++ )
//				cin>>nTemp;
//			cout<< "NO" << endl;
//			continue;
//		}
//
//		double dSum = 0;
//		int nLastTwoX, nLastTwoY;
//		int nLastOneX, nLastOneY;
//	
//		cin >> nLastTwoX >> nLastTwoY;
//		cin >> nLastOneX >> nLastOneY;
//		int nFirstX = nLastTwoX;
//		int nFirstY = nLastTwoY;
//		int nCurX, nCurY;
//		Vector vec1, vec2;
//		
//		int nNumOfNodesTemp = nNumOfNodes;
//		nNumOfNodes -= 2;
//		while( nNumOfNodes-- ){
//			cin >> nCurX >> nCurY;
//
//			vec1.x = nLastOneX - nLastTwoX;
//			vec1.y = nLastOneY - nLastTwoY;
//			vec2.x = nCurX - nLastOneX;
//			vec2.y = nCurY - nLastOneY;
//		
//			//(x1x2+y1y2)/[√[x1^2+y1^2]*√[x2^2+y2^2]]
//
//			double angle = ( vec1.x * vec2.x + vec1.y * vec2.y ) * 1.0
//				/( sqrt( vec1.x * vec1.x + vec1.y * vec1.y ) 
//				   * sqrt( vec2.x * vec2.x + vec2.y * vec2.y) );
//			double rad = acos( angle );
//
//			dSum += rad;
//
//			nLastTwoX = nLastOneX;
//			nLastTwoY = nLastOneY;
//			nLastOneX = nCurX;
//			nLastOneY = nCurY;
//		}
//		cin >> nTemp;
//		// 检验最后两个点和第一个点的关系
//	
//		vec1.x = nLastOneX - nLastTwoX;
//		vec1.y = nLastOneY - nLastTwoY;
//		vec2.x = nFirstX - nLastOneX;
//		vec2.y = nFirstY - nLastOneY;
//		
//		//(x1x2+y1y2)/[√[x1^2+y1^2]*√[x2^2+y2^2]]
//
//		double angle = ( vec1.x * vec2.x + vec1.y * vec2.y ) * 1.0
//			/( sqrt( vec1.x * vec1.x + vec1.y * vec1.y ) 
//				* sqrt( vec2.x * vec2.x + vec2.y * vec2.y) );
//		double rad = acos( angle );
//		
//		dSum += rad;
//
//		if( dSum - ( (nNumOfNodesTemp-2) * pi / 2 ) < 1e-6 )
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//	return 0;
//}