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

	int j = -1,k = 0;

	while(k<n)
	{
		if(arr[k] < 0)
		{
			int temp = arr[++j];
			arr[j] = arr[k];
			arr[k] = temp;
			k++;
		}
		else
			k++;
	}
	for(int i = j+1;i<n;i++)
	{
		int temp = abs(arr[i]);
		if(arr[temp] < n)
			arr[temp] = arr[temp]*-1;
	}

	bool flag = false;
	for(int i = 1;i<=j;i++)
	{
		if(arr[i] < 0)
		{
			flag = true;
			cout<<"Smallest positive missing numbers"<<i<<endl;
		}
	}
	if(flag == false)
	{
		for(int i=j+1;i<n;i++)
		{
			if(arr[i] > 0)
			{
				cout<<"Smallest positive missing numbers: "<<i<<endl;
				break;
			}
		}
	}
}