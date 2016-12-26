#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int binary_search(int arr[], int low, int high, int x)
{

	if(high >= low)
	{
		int mid = (low + high)/2;
		
		if(arr[mid] == x && (arr[mid-1] < x || mid == 0))
			return mid;
		else if(arr[mid]>x)
			return binary_search(arr, int low, mid-1, x);
		else
			return binary_search(arr, mid+1, x);
	}
	return -1;
}

int main()
{
	int n,x;
	cin>>n>>x;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int check = binary_search(arr, 0, n, x);

	if(arr[check + n/2] == x)
		cout<<x<<" is the majority element in the array"<<endl;
	else
		cout<<x<<" is not the majority element in the array"<<endl;
}