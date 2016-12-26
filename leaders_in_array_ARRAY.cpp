#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int leader = arr[n-1];
	cout<<leader<<" ";
	for(int i= n-2;i>=0;i--)
	{
		if(arr[i] > leader)
		{
			leader = arr[i];
			cout<<leader<<" ";
		}
	}
	cout<<endl;
}