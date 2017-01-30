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

	sort(arr, arr+n);

	int max_prod = 1, min_prod = 1;
	int count = 0,j=0;

	while(arr[j] < 0)
	{
		count++;
		j++;
	}

	if(count%2 == 0)
	{
		for(int i=0;i<n;i++)
		{
			if(arr[i] != 1 && arr[i] != 0)
				max_prod *= arr[i];
		}
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(i == count-1)
				continue;
			else
			{			
				if(arr[i] != 1 && arr[i] != 0)
					max_prod *= arr[i];
			}
		}
	} // -4, -2, 3, 7, 5, 0, 1
	
	if(count%2 == 0)
	{
		for(int i=0;i<n;i++)
		{
			if(i == count-1)
				continue;
			else
			{
				if(arr[i] != 1 && arr[i] != 0)
					min_prod *= arr[i];
			}
		}
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(arr[i] != 1 && arr[i] != 0)
				min_prod *= arr[i];
		}
	}
	cout<<max_prod<<" "<<min_prod<<endl;
}