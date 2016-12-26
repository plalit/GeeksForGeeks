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

	int max[n];
	int maxn = arr[n-1];
	max[n-1] = maxn;
	for(int i=n-2;i>=0;i--)
	{
		if(arr[i] > maxn)
		{
			maxn = arr[i];
			max[i] = maxn;
		}
		else
			max[i] = maxn;
	}

	int min[n];
	int minn = arr[0];
	min[0] = minn;

	for(int i=1;i<n;i++)
	{
		if(arr[i] < minn)
		{
			minn = arr[i];
			min[i] = minn;
		}
		else
			min[i] = minn;
	}

	for(int i=0;i<n;i++)
		cout<<max[i]<<" ";
	cout<<endl;

	for(int i=0;i<n;i++)
		cout<<min[i]<<" ";
	cout<<endl;

	int max_diff = max[0] - min[0];
	for(int i=1;i<n;i++)
	{
		if(max[i] - min[i] > max_diff)
			max_diff = max[i] - min[i];
	}

	cout<<max_diff<<endl;
}