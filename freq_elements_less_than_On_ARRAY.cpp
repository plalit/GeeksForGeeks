#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int binary_Search(int arr[], int low, int high, int val, int n)
{
	if(high >= low)
	{
		int mid = (low + high)/2;
		if((arr[mid] == val && arr[mid+1] > val) || mid == n-1)
			return mid;
		else if(arr[mid] > val)
			return binary_Search(arr, low, mid-1, val, n);
		else
			return binary_Search(arr, mid+1, high, val, n);
	}
	else
		return 0;
}


int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int i=0;
	while(i < n)
	{
		int val = binary_Search(arr, 0, n-1, arr[i], n);
		int freq = val - i + 1;
		cout<<"freq of: "<<arr[i]<<" is "<<freq<<endl;
		i = val + 1;
	}// 1, 1, 1, 2, 3, 3, 5,
            //   5, 8, 8, 8, 9, 9, 10
}