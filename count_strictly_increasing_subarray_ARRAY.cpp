#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int length = 1, count = 0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i+1] > arr[i])
			length++;
		else
		{
			count += (length*(length-1))/2;
			length = 1;
		}
	}

	if(length > 1)
		count+= (length*(length-1))/2;

	cout<<count<<endl;
}