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

	int xr = 0;
	for(int i=0;i<k;i++)
		xr = xr^arr[i];

	cout<<xr<<endl;
	int max = xr;
	int j=0;
	for(int i=k;i<n;i++)
	{
		xr = xr^arr[i];
		xr = xr^arr[j];
		cout<<xr<<endl;
		j++;
		if(xr > max)
			max = xr;
	}
	//2, 5, 8 ,1 , 1 ,3
	//1, 2, 4, 5, 6
	cout<<max<<endl;
}