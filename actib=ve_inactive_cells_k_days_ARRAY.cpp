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

	while(k--)
	{
		int temp = 0;
		for(int i=0;i<n;i++)
		{
			if(i != n-1)
			{
				if(temp == arr[i+1])
				{
					temp = arr[i];
					arr[i] = 0;
				}
				else
				{
					temp = arr[i];
					arr[i] = 1;
				}
			}
			else
			{
				if(temp == 0)
					arr[i] = 0;
				else
					arr[i] = 1;
			}
		}
	} // 0, 1, 0, 1, 0, 1, 0, 1

	int active = 0, inactive = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] == 1)
			active++;
		else
			inactive++;
	}
	cout<<active<<" "<<inactive<<endl;
}