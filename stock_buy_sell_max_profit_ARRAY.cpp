#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int minima = 0, maxima = 0;
	int i=0;
	while(i<n-1)
	{
		if(arr[i] > arr[i+1] && i<n-1)
		{
			while(arr[i] > arr[i+1] && i<n-1)
				i++;
			minima = i;
		}

		if(arr[i] < arr[i+1] && i<n)
		{
			while(arr[i] < arr[i+1] && i<n)
				i++;
			maxima = i;
		}
		cout<<"Purchasing on Day:->"<<minima<<" "<<"Selling on Day:->"<<maxima<<endl;
	}
}