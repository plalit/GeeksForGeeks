#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int binary_search(int arr[], int low, int high, int ratio)
{
	if(high >= low)
	{
		int mid = (high + low)/2;

		if(arr[mid+1]/arr[mid] != ratio)
			return arr[mid]*ratio;
		else if(arr[mid]/arr[mid-1] != ratio)
			return arr[mid-1]*ratio;
		else if(arr[mid] == arr[0] * (pow(ratio, mid)) )
			return binary_search(arr, mid+1, high, ratio);
		else
			return binary_search(arr, low, mid-1, ratio);
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

	int ratio = (float)pow((arr[n-1]/arr[0]), (1.0/n));
	int missing = binary_search(arr, 0, n-1, ratio);

	cout<<missing<<endl;
}