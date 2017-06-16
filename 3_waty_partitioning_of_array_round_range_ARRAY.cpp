#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,low, high;
	cin>>n>>low>>high;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	// 1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32
	int i=0,j=0;
	while(j<n)
	{
		while(arr[i] < low)
			i++;

		j = i+1;
		if(j >= n)
			break;
		while(arr[j] >= low)
			j++;

		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
	}
	j = 0;
	while(j < n)
	{
		while(arr[i] <= high)
			i++;

		j = i+1;
		if(j >= n)
			break;

		while(arr[j] > high)
			j++;
		if(j >= n)
			break;
		cout<<arr[i]<<" "<<arr[j]<<endl;
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
	}
	for(int k=0;k<n;k++)
		cout<<arr[k]<<" ";
	cout<<endl;
}