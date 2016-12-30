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

	int xr = arr[0];

	for(int i=1;i<n;i++)
		xr = xr^arr[i];

	int right_bit = 0;

	right_bit = xr & ~(xr-1);

	int x=0,y=0;
	for(int i=0;i<n;i++)
	{
		if(right_bit & arr[i])
			x = x^arr[i];
		else
			y = y^arr[i];
	}
	cout<<"Odd occuring numbers: "<<x<<" "<<y<<endl;
	//12, 23, 34, 12, 12, 23, 12, 45
}