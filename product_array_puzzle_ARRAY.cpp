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

	int product_left[n];
	int product_right[n];

	product_left[0] = arr[0];

	for(int i=1;i<n;i++)
		product_left[i] = product_left[i-1]*arr[i];

	product_right[n-1] = arr[n-1];

	for(int i=n-2;i>=0;i--)
		product_right[i] = product_right[i+1]*arr[i];

	cout<<product_right[1]<<" ";
	for(int i=1;i<n;i++)
	{
		if(i == n-1)
			cout<<product_left[n-2]<<" ";
		else
			cout<<product_left[i-1]*product_right[i+1]<<" ";
	}
}