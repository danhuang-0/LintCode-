//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int BinarySearch( vector<int> &vecNums, int nTarget );
//
//int main(){
//    
//    int nSize, nTarget;
//    cin >> nSize >> nTarget ;
//    vector<int> vecNums(nSize);
//    for( int i=0; i<nSize; i++ )
//        cin >> vecNums[i];
//    cout << BinarySearch( vecNums, nTarget ) << endl;
//    
//    return 0;
//}
//
//int BinarySearch( vector<int> &vecNums, int nTarget ){
//    int nSize = vecNums.size();
//    int nLeft = 0;
//    int nRight = nSize - 1;
//    int nMid = ( nLeft + nRight ) /2;
//    while( nLeft <= nRight ){
//        // 目标比当前小，向左查找
//        if( vecNums[nMid] < nTarget ){
//            nRight = nMid - 1 ;
//        } else if( vecNums[nMid] > nTarget ){
//            nLeft = nMid + 1;
//        } else {
//            // 已经找到第一个了，找到最右边的一个
//            nLeft = nMid;
//            while( 1 ){
//                nMid = ( nLeft + nRight ) / 2;
//                if ( vecNums[nMid] > nTarget ){
//                    nRight = nMid-1;
//                } else if( nMid == nRight ){
//                    // 当前范围最右侧也是，最右边肯定就是最后一个了
//                    break;
//                } else if( vecNums[nMid] == nTarget && vecNums[nMid+1] != nTarget ){
//                    // 当前nMid就是最后一个
//                    break;
//                } else {
//                    nLeft = nMid + 1;
//                }
//            }
//            break;
//        }
//        nMid = ( nLeft + nRight ) / 2;
//    }
//    return nLeft <= nRight ? nMid : -1;
//}