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

	int decreasing[n], increasing[n];

	decreasing[0] = -1;
	int minn = 0;
	for(int i=1;i<n;i++)
	{
		if(arr[i] < arr[minn])
		{
			minn = i;
			decreasing[i] = -1;
		}
		else
			decreasing[i] = minn;
	}

	int maxx = n-1;
	increasing[n-1] = -1;

	for(int i = n-2;i>=0;i--)
	{
		if(arr[i] > arr[maxx])
		{
			maxx = i;
			increasing[i] = -1;
		}
		else
			increasing[i] = maxx;
	}

	for(int i=0;i<n;i++)
	{
		if(increasing[i] != -1 && decreasing[i] != -1)
		{
			cout<<"Sorted increasing subsequence of 3: "<<arr[decreasing[i]]<<" "<<arr[i]<<" "<<arr[increasing[i]]<<endl;
			break;
		}
	}
}