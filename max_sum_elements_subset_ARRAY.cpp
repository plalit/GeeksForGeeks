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

	int x = pow(2,n);

	int sum = 0;
	for(int i=1;i<x;i++)
	{
		int maxm = 0;
		for(int j=0;j<n;j++)
		{
			if(i & (1<<j))
			{
				if(arr[j] > maxm)
					maxm = arr[j];
			}
		}
		sum += maxm;
	}

	cout<<sum<<endl;
}