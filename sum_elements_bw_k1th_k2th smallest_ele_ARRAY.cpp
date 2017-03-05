#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,k,l;
	cin>>n>>k>>l;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	sort(arr, arr+n);
	k -=1;
	l-=1;
	int sum = 0;
	for(int i = k+1;i<l;i++)
		sum += arr[i];
	// 20, 8, 22, 4, 12, 10, 14, 3 6
	cout<<sum<<endl;
}