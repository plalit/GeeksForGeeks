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

	int ref[n+1];
	for(int i=0;i<n+1;i++)
		ref[i] = 0;

	for(int i=0;i<n+1;i++)
	{
		if(arr[i] <= n)
			ref[arr[i]]++;
		else
			ref[n+1]++;
	}
	
	int sum = 0;
	for(int i=1;i<n+1;i++)
	{
		sum += ref[i];
		ref[i] = sum;
	}
	
	int x = 0;
	for(int i=1;i<n+1;i++)
	{
		int temp = n - (ref[i]-1);
		if(temp >= i)
		{
			if(temp > x)
				x = i;
		}
	}
	cout<<x<<endl;
	 // 2, 3, 4, 5, 6, 7
}