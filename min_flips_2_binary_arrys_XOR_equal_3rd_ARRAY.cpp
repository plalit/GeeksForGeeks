#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int p,q;
	cin>>p>>q;

	int arr[n], brr[n], crr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int xr = 0;
	int min = 0;
	for(int i=0;i<n;i++)
	{
		xr = arr[i]^brr[i];
		if(xr == crr[i])
			continue;
		else
		{
			if(p > 0)
			{
				p--;
				min++;
			}
			else if(q > 0)
			{
				q--;
				min++;
			}
			else
			{
				cout<<-1<<endl;
				break;
			}
		}
	}

	cout<<min<<endl;
}