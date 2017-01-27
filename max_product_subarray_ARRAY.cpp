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

	int max_fwd = 1;
	int max_back = 1;
	int max_till_now = 1;

	for(int i=0;i<n;i++)
	{
		max_till_now *= arr[i];
		if(arr[i] == 0)
			max_till_now = 1;
		if(max_till_now > max_fwd)
			max_fwd = max_till_now;
	}

	max_till_now = 1;
	for(int i=n-1;i>=0;i--)
	{
		max_till_now *= arr[i];
		if(arr[i] == 0)
			max_till_now = 1;
		if(max_till_now > max_back)
			max_back = max_till_now;
	}

	int maximum = max(max_fwd, max_back);

	cout<<max(maximum, 0)<<endl;
}