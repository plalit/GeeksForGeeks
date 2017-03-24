#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n],brr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=0;i<n;i++)
		cin>>brr[i];

	sort(arr, arr+n);
	sort(brr, brr+n);

	int sum = 0;
	int j = n-1;
	for(int i=0;i<n;i++)
	{
		sum += brr[j]*arr[i];
		j--;
	}
	// A[] = {3, 1, 1} and B[] = {6, 5, 4}
	cout<<sum<<endl;
}