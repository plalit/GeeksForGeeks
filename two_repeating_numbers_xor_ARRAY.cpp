#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n+2];

	for(int i=0;i<n+2;i++)
		cin>>arr[i];

	int xr = arr[0];

	for(int i=0;i<n+2;i++)
		xr ^= arr[i];
	
	for(int i=1;i<=n;i++)
		xr ^= i;


	int right_bit = xr & ~(xr-1);

	int x=0,y=0;
	for(int i=0;i<n+2;i++)
	{
		if(right_bit & arr[i])
			x = x^arr[i];
		else
			y = y^arr[i];
	}

	for(int i=1;i<=n;i++)
	{
		if(right_bit & i)
			x = x^i;
		else
			y = y^i;
	}
	cout<<x<<" "<<y<<endl;
}