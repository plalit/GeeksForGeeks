#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];


// For generating all the subarrays:
	cout<<"All Subarrays are: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j = i;j<n;j++)
		{
			for(int k=i;k<=j;k++)
			{
				cout<<arr[k]<<" ";
			}
			cout<<endl;
		}
	}

	cout<<"Subsequence for the given array: "<<endl;
	unsigned int counter = pow(2,n); 
	for(int i=1;i<counter;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i & (1<<j))
				cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
}