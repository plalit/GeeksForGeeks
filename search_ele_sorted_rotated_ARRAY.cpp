#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int binary_search(int arr[], int low, int high, int ele)
{
	if(high >= low)
	{
		int mid = (low + high)/2;
		cout<<mid<<endl;
		if(arr[mid] == ele)
			return mid;
		else if(arr[mid] > arr[low])
		{
			if(arr[low] > ele)
				return binary_search(arr, mid+1, high, ele);
			else
				return binary_search(arr, low, mid-1, ele);
		}
		else
		{
			if(arr[mid] > ele)
				return binary_search(arr, low, mid-1, ele);
			else
				return binary_search(arr, mid+1, high, ele);
		}
			
	}
	else
		return -1;
}

int main()
{
	int n,ele;
	cin>>n>>ele;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int ind = binary_search(arr, 0, n-1, ele);

	if(ind != -1)
		cout<<"Element found at index: "<<ind<<endl;
	else
		cout<<"Element not found"<<endl;

	// 5, 6, 7, 8, 9, 10, 1, 2, 3
	// 30 40 50 10 2
	// 50 10 20 30 40
	// 40 50 10 20 30
	// 10 1 2 3 5 6 7 8 9
}