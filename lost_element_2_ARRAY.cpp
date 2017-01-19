#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	int arr[n], brr[m];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<m;i++)
		cin>>brr[i];

	int res = 0;

	for(int i=0;i<n;i++)
		res = res^arr[i];
	for(int i=0;i<m;i++)
		res = res^brr[i];

	cout<<"Lost element is the 2 arrays: "<<res<<endl;
	// arr1[] = {1, 4, 5, 7, 9}
    //    arr2[] = {4, 5, 7, 9}

}