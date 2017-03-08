#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int get_sum(int bit[], int index)
{
	int sum = 0;
	while(index > 0)
	{
		sum += bit[index];
		index -= index & (-index);
	}

	if(sum > 0)
		sum = 1;

	return sum;
}

void update(int bit[], int index, int max, int value)
{
	while(index <= max)
	{
		bit[index] += value;
		index += index & (-index);
	}
}

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int max = arr[0];
	for(int i=1;i>n;i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}

	int BIT[max];

	for(int i=0;i<max+1;i++)
		BIT[i] = 0;

	int count = 0;
	for(int i=n-1;i>=0;i--)
	{
		int x = get_sum(BIT, arr[i]-1);
		if(x)
			count++;

		update(BIT, arr[i], max, 1);
	}

	cout<<"Minimum moves to sort the array: "<<count<<endl;
}