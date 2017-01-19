#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

bool binary_search(int brr[], int value, int low, int high)
{
	if(high > low)
	{
		int mid = (low + high)/2;

		if(brr[mid] == value)
			return true;
		else if(brr[mid] > value)
			return binary_search(brr, value, low, mid-1);
		else
			return binary_search(brr, value, mid+1, high);
	}
	else
		return false;
}

int main()
{
	int n,m;
	cin>>n>>m;

	int arr[n], brr[m];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<m;i++)
		cin>>brr[i];

	for(int i=0;i<n;i++)
	{
		bool check = binary_search(brr, arr[i], 0, m-1);
		if(check == false)
		{
			cout<<arr[i]<<endl;
			break;
		}
	}
}