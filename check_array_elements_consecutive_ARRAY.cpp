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

	int min = arr[0], max = arr[0];

	for(int i=1;i<n;i++)
	{
		if(arr[i] > max)
			max = arr[i];
		if(arr[i] < min)
			min = arr[i];
	}
	bool flag = false;
	if(max-min+1 == n)
		flag = true;

	int brr[n];
	for(int i=0;i<n;i++)
		brr[i] = -1;

	for(int i=0;i<n;i++)
	{
		int t = max - arr[i];
		if(t < n)
			brr[t]++;
	}

	bool flag2 = true;
	for(int i=0;i<n;i++)
	{
		if(brr[i] != 0)
		{
			flag2 = false;
			break;
		}
	}

	if(flag && flag2)
		cout<<"Consecutive Numbers"<<endl;
	else
		cout<<"Not Consecutive Numbers"<<endl;
}