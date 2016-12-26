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

	int x = n/2;

	int j = 0;
	int k = n-1;
	int temp;
	while(x)
	{
		temp = arr[k];
		arr[k] = arr[j];
		arr[j] = temp;
		x--;
		j++;
		k--;
	}

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}