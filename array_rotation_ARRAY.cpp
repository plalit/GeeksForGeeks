#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void rotate(int arr[], int n, int start, int end)
{
	int temp;

	while(start<end)
	{
		temp = arr[end];
		arr[end] = arr[start];
		arr[start] = temp;
		start++;
		end--;
	}
}

int main()
{
	int n,d;
	cin>>n>>d;

	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	rotate(arr, n, 0,d-1);
	rotate(arr, n, d, n-1);
	rotate(arr, n, 0, n-1);

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

