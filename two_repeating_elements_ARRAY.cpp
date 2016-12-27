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

	int x;

	for(int i=0;i<n;i++)
	{
		x = abs(arr[i]);

		if(arr[x] < 0)
			cout<<x<<" ";
		else
			arr[x] *= -1;
	}
	cout<<endl;
}