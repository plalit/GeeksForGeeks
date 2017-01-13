#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
 
int myCompare(string X, string Y)
{
    string XY = X.append(Y);
 
    string YX = Y.appe1nd(X);
 
    return XY.compare(YX) > 0 ? 1: 0;
}

void printLargest(vector<string> arr)
{
    sort(arr.begin(), arr.end(), myCompare);
 
    for (int i=0; i < arr.size() ; i++ )
        cout << arr[i];
}
 
int main()
{
    vector<string> arr;
 
    arr.push_back("54");
    arr.push_back("546");
    arr.push_back("548");
    arr.push_back("60");
    printLargest(arr);
}