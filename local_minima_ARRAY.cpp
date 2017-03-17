#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int binary_search(int arr[], int low, int high, int n)
{
	if(high >= low)
	{
		int mid = (low + high)/2;
		if((arr[mid] < arr[mid-1] && arr[mid] < arr[mid+1]) || (mid == 0 && arr[mid+1] > arr[mid]) || (arr[mid-1] > arr[mid] && mid+1 == n))
			return arr[mid];
		else if(mid > 0 && arr[mid] > arr[mid-1])
			return binary_search(arr, low, mid-1, n);
		else
			return binary_search(arr, mid+1, high, n);
	}
	else
		return -1;
}

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	// 9, 6, 3, 14, 5, 7, 4

	int val = binary_search(arr, 0 , n-1,n);
	if(val != -1)
	cout<<val<<endl;
}