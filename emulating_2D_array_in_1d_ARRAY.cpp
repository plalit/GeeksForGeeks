#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cin>>arr[i][j];
	}

	int ref[n*m];

	int k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			k = i * n + j;
			ref[k] = arr[i][j];
		}
	}

	for(int i=0;i<n*m;i++)
		cout<<ref[i]<<" ";
	cout<<endl;


}