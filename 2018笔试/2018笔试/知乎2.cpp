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
//        // Ŀ��ȵ�ǰС���������
//        if( vecNums[nMid] < nTarget ){
//            nRight = nMid - 1 ;
//        } else if( vecNums[nMid] > nTarget ){
//            nLeft = nMid + 1;
//        } else {
//            // �Ѿ��ҵ���һ���ˣ��ҵ����ұߵ�һ��
//            nLeft = nMid;
//            while( 1 ){
//                nMid = ( nLeft + nRight ) / 2;
//                if ( vecNums[nMid] > nTarget ){
//                    nRight = nMid-1;
//                } else if( nMid == nRight ){
//                    // ��ǰ��Χ���Ҳ�Ҳ�ǣ����ұ߿϶��������һ����
//                    break;
//                } else if( vecNums[nMid] == nTarget && vecNums[nMid+1] != nTarget ){
//                    // ��ǰnMid�������һ��
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