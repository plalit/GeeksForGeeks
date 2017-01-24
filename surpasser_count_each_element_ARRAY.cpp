#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int getsum(int bit[], int index, int max)
{
	int sum = 0;
	while(index <= max)
	{
		sum += bit[index];
		index += index & (-index);
		//int x;
		//cin>>x;
	}

	return sum;
}

void updateBIT(int bit[], int index, int value)
{
	while(index > 0)
	{
		bit[index] += value;
		index -= index & (-index);
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

	for(int i=n-1;i>=0;i--)
	{
		int value = getsum(BIT, arr[i], max);
		cout<<"For "<<arr[i]<<" : "<<value<<endl;
		updateBIT(BIT, arr[i],1);
	}// 2, 7, 5, 3, 0, 8, 1
}