#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int binary_search(int arr[], int low, int high)
{
	if(low <= high)
	{
		int mid = (low + high)/2;
		if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
			return arr[mid];
		else if(arr[mid] < arr[mid-1])
			return binary_search(arr, low, mid-1);
		else
			return binary_search(arr, mid+1, high);
	}
	return -1;
}

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int num = binary_search(arr, 0, n-1);
	// 6, 7, 8, 11, 9, 5, 2, 1
	// -3, -2, 4, 6, 10, 8, 7, 1
	cout<<num<<endl;
}