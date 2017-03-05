#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int binary_search(int arr[], int low, int high)
{
	if(high >= low)
	{
		int mid = (low + high)/2;
		if(arr[mid] == mid && arr[mid] == arr[mid-1])
			return arr[mid];
		else if(arr[mid] > mid)
			return binary_search(arr, mid+1, high);
		else
			return binary_search(arr, low, mid-1);
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

	int number = binary_search(arr, 0, n-1);

	cout<<number<<endl;

	//1, 2 , 3 , 4 , 4
	//1 , 1 , 2 , 3 , 4
}