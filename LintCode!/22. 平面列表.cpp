//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//
// // This is the interface that allows for creating nested lists.
// // You should not implement it, or speculate about its implementation
// class NestedInteger {
//   public:
//     // Return true if this NestedInteger holds a single integer,
//     // rather than a nested list.
//     bool isInteger() const;
//
//     // Return the single integer that this NestedInteger holds,
//     // if it holds a single integer
//     // The result is undefined if this NestedInteger holds a nested list
//     int getInteger() const;
//
//     // Return the nested list that this NestedInteger holds,
//     // if it holds a nested list
//     // The result is undefined if this NestedInteger holds a single integer
//     const vector<NestedInteger> &getList() const;
// };
// 
//
//class Solution {
//public:
//    // @param nestedList a list of NestedInteger
//    // @return a list of integer
//    vector<int> flatten(vector<NestedInteger> &nestedList) {
//        // Write your code here
//		int nSize = nestedList.size();
//		vector<int> vctRet;
//		if( nSize==0 )
//			return vctRet;
//		stack<NestedInteger> stkTemp;
//		for( int i=nSize-1; i>=0; --i )
//			stkTemp.push(nestedList[i]);
//		NestedInteger temp;
//		int i = 0;
//		int j=0;
//		while( !stkTemp.empty() )
//		{
//			temp = stkTemp.top();
//			stkTemp.pop();
//			if( temp.isInteger() )
//			{
//				vctRet.push_back (temp.getInteger());
//			}
//			else
//			{
//				const vector<NestedInteger> vctTemp = temp.getList();
//				int nTempSize = vctTemp.size();
//				for( int j=nTempSize-1; j>=0; --j )
//					stkTemp.push( vctTemp[j] );
//			}
//		}
//		return vctRet;
//    }
//};
//int main()
//{
//	return 0;
//}