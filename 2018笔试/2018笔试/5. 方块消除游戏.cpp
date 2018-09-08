//#include <iostream>
//#include <string>
//#include <sstream>
//#include <queue>
//
//using namespace std;
//
//const int RED = 0, GREEN = 1, BLUE = 2, YELLOW = 3, PURPLE = 4;
//const int EMPTY = 6;
//int p[10][10] = {
//    {RED,RED,BLUE,BLUE,GREEN,YELLOW,BLUE,YELLOW,RED,PURPLE},
//    {GREEN,GREEN,GREEN,BLUE,RED,PURPLE,RED,YELLOW,YELLOW,BLUE},
//    {BLUE,RED,RED,YELLOW,YELLOW,PURPLE,BLUE,GREEN,GREEN,BLUE},
//    {YELLOW,RED,BLUE,YELLOW,BLUE,RED,PURPLE,GREEN,GREEN,RED},
//    {YELLOW,RED,BLUE,BLUE,PURPLE,GREEN,PURPLE,RED,YELLOW,BLUE},
//    {PURPLE,YELLOW,RED,RED,YELLOW,RED,PURPLE,YELLOW,RED,RED},
//    {YELLOW,YELLOW,GREEN,PURPLE,GREEN,RED,BLUE,YELLOW,BLUE,GREEN},
//    {RED,YELLOW,BLUE,BLUE,YELLOW,GREEN,PURPLE,RED,BLUE,GREEN},
//    {GREEN,GREEN,YELLOW,YELLOW,RED,RED,PURPLE,BLUE,BLUE,GREEN},
//    {PURPLE,BLUE,RED,RED,PURPLE,YELLOW,BLUE,RED,RED,GREEN}};
//
//int arrCount[6] = {0};
//
//void init(){
//	for( int i=0; i<10; i++ ){
//		for( int j=0; j<10; j++ ){
//			arrCount[ p[i][j] ]++;
//		}
//	}
//}
//
//void print(){
//	for( int i=0; i<5; i++){
//		cout<<arrCount[i];
//		if( i!=4 )
//			cout<<" ";
//		else
//			cout<<endl;
//	}
//}
//
//void doStep( int nStep ){
//	nStep--;
//	int nTempStep = nStep;
//	int nColor = p[nStep/10][nStep%10];
//	if( nColor == EMPTY )
//		return ;
//	queue<int> queStep;
//	queue<int> queDrop;
//	queStep.push( nStep );
//	while( !queStep.empty() ){
//		 nStep = queStep.front();
//		 queStep.pop();
//		 queDrop.push( nStep );
//		 int x = nStep/10;
//		 int y = nStep%10;
//		 
//		 // 先下再上，保证最上面的最后处理，便于落块
//		 if( x+1 < 10 && p[x+1][y]==nColor )
//			 queStep.push( nStep+10 );
//		 if( x-1 >= 0 && p[x-1][y]==nColor )
//			 queStep.push( nStep-10 );
//		 if( y+1 < 10 && p[x][y+1]==nColor  )
//			 queStep.push( nStep+1 );
//		 if( y-1 > 0 && p[x][y-1]==nColor )
//			 queStep.push( nStep-1 );
//		 p[x][y] = EMPTY;
//		 arrCount[nColor]--;
//	}
//	while( !queDrop.empty() ){
//		nStep = queDrop.front();
//		queDrop.pop();
//		int x = nStep/10;
//		int y = nStep%10;
//		//上面还有先不处理
//		if(  p[x-1][y]==EMPTY )
//			continue;
//		int bottom = x;
//		while( bottom < 10 ){
//			if( p[bottom][y]==EMPTY )
//				bottom++;
//			else
//				break;
//		}
//		bottom--;
//		//整列为空, 左移暂不处理
//		if( bottom == 9 ){
//			continue;
//		}
//		// 否则向下添空缺
//		for( int i=x-1; i>=0; i-- ){
//			p[bottom-x+i+1][y] = p[i][y];
//			p[i][y] = EMPTY;
//		}
//	}
//	for( int i=0; i<10; i++ ){
//		if( p[9][i]!=EMPTY )
//			continue;
//		for( int j=0; j<10; j++){
//			for( int k=i+1; k<10; k++ )
//				p[j][k] = p[j][k-1];
//		}
//	}
//}
//
//int main (){
//	init();	
//	string strLine;
//	string strStep;
//	int nStep;
//	while( getline(cin, strLine) ){
//		istringstream iss(strLine);
//		while (getline( iss, strStep, ' ')){
//			try {
//				nStep = stoi( strStep );
//			} catch ( exception e ){
//				continue;
//			}
//			doStep( nStep );			
//		}		
//		print();
//	}
//	return 0;
//}