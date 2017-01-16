#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int count = 0, max = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] == 0)
			count++;
	}

	if(count <= k)
	{
		for(int i=0;i<n;i++)
		{
			if(arr[i] == 0)
				cout<<i<<" ";
		}
		cout<<endl;
	}// 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1
	else
	{
		count = 0;
		int first = 0, second, i=0;
			while(count <= k)
			{
				if(arr[i] == 0)
					count++;
				i++;
			}
			i -=1;
			second = i;
			if(second - first > max)
				max = second - first;

			i++;
			int j = 0;
			while(i < n)
			{
				while(arr[i] != 0 && i<n-1)
					i++;
				second = i;
				i++;

				while(arr[j] != 0 && j < n-1)
					j++;
				first = j;
				j++;

				if(second - first > max)
					max = second - first;
			}
			while(arr[j] != 0)
				j++;
			first = j;

			if(second - first > max)
				max = (second - first) - 1;

			cout<<max<<endl;
	}
} 