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

	int arr1[n/2], arr2[n/2];
	sort(arr, arr+n);
	int count = 0, j=0,k=0;
	for(int i=0;i<n;i++)
	{
		if(count < n/2)
		{
			arr1[j] = arr[i];
			j++;
			count++;
		}
		else
		{
			arr2[k] = arr[i];
			k++;
		}
	}
	// 9, 2, 8, 4, 5, 7, 6, 0

	bool flag = true;
	j=0,k=n/2-1;
	for(int i=0;i<n;i++)
	{
		if(flag)
		{
			flag = false;
			arr[i] = arr1[j++];
		}
		else
		{
			flag = true;
			arr[i] = arr2[k--];
		}
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}