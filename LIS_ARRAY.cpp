#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int LIS[n];
	for(int i=0;i<n;i++)
		LIS[i] = 1;

	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[i] > arr[j] && LIS[i] < LIS[j] + 1)
				LIS[i] = LIS[j]+1;
		}
	}

	for(int i=0;i<n;i++)
		cout<<LIS[i]<<" ";
	cout<<endl;

	int max = 0;
	for(int i=0;i<n;i++)
	{
		if(LIS[i] > max)
			max = LIS[i];
	}
	// 10, 22, 9, 33, 21, 50, 41, 60
	cout<<max<<endl;
}