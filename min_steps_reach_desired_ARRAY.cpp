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

	int count = 0;
	
	while(1)
	{
		int zero = 0;
		for(int i=0;i<n;i++)
		{
			if(arr[i] == 0)
				zero++;
		}
		if(zero == n)
			break;

		for(int i=0;i<n;i++)
		{
			if(arr[i] & 1)
			{
				arr[i]--;
				count++;
			}
		}
		int even = 0;
		zero = 0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]%2 == 0)
				even++;
			if(arr[i] == 0)
				zero++;
		}

		if(even == n && zero != n)
		{
			for(int i=0;i<n;i++)
				arr[i] /= 2;
			count++;
		}
	}
	cout<<"minimum steps to reach desired output: "<<count<<endl;
}