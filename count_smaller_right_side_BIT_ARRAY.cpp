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
		if(index == 0)
		{
			bit[index]++;
			index++;
		}
		bit[index] += value;
		index += index & (-index);
	}
}

int main()
{
	int n;
	cin>>n;

	int arr[n], output[n];
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
	int count = 0,count0 = 0;
	bool flag = false;
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i] == 0)
		{
			flag = true;
			count0++;
		}
		int x = getsum(BIT,arr[i]-1);
		if(arr[i] == 1)
			output[i] = count0;
		else
			output[i] = x;
		updateBIT(BIT, max, arr[i], 1);
	} //8, 4, 2, 1
	//12, 1, 2, 3, 0, 11, 4
	for(int i=0;i<n;i++)
		cout<<output[i]<<" ";
	cout<<endl;
}