#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,d;
	cin>>n>>d;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int temp;
	for(int i=0;i<d;i++)
	{
		temp = arr[0];
		for(int j=1;j<n;j++)
			arr[j-1] = arr[j];

		arr[n-1] = temp;
	}

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}