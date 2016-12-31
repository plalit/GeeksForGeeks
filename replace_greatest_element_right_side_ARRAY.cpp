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

	int max = arr[n-1];
	arr[n-1] = -1;

	for(int i=n-2;i>=0;i--)
	{
		int temp = max;
		if(arr[i] > max)
			max = arr[i];
		arr[i] = temp;
	}

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}