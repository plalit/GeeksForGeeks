#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void update(int bit[], int max, int index, int val)
{
	while(index <= max)
	{
		bit[index] += val;
		index += index & (-index);
	}
}

int getsum(int bit[], int index)
{
	int sum = 0;
	while(index > 0)
	{
		sum += bit[index];
		index -= index & (-index);
	}

	return sum;
}

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int max = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] >max)
			max = arr[i];
	}

	int BIT[max+1];

	for(int i=0;i<max+1;i++)
		BIT[i] = 0;

	for(int i=0;i<n;i++)
		update(BIT,max, arr[i], 1);

	for(int i=0;i<n;i++)
	{
		int value = getsum(BIT, arr[i]-1);
		if(value >= n/2)
			cout<<arr[i]<<" ";
	}
	cout<<endl;
	// 1, 6, 3, 4
	// 10, 4, 2, 8, 9
}

//Laladmit@2017