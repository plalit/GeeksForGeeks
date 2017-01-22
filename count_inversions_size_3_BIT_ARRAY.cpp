#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int getsum(int bit[], int index)
{
	int sum =0;
	while(index >0)
	{
		sum += bit[index];
		index -= index & (-index);
	}
	return sum;
}

void updateBIT(int bit[], int max, int index, int value)
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
	for(int i=1;i<n;i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}
	int BIT[max+1];
	for (int i=0; i<=max; i++)
    	BIT[i] = 0;
	int count = 0;
	for(int i=n-1;i>=0;i--)
	{
		int x = getsum(BIT,arr[i]-1);
		if(x >=2)
		{
			cout<<arr[i]<<" "<<x<<endl;
			count += (x*(x-1))/2;
		}
		updateBIT(BIT, max, arr[i], 1);
	} //8, 4, 2, 1
	cout<<count<<endl;
}