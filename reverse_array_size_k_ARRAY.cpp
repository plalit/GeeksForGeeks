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

	int i=0;
	int t = 0;
	while(t<n)
	{
		if(i + (k-1) < n-1)
		{
			int x = i + k - 1;
		
			for(int j=0;j<k/2;j++)
			{
				int temp = arr[x];
				arr[x] = arr[i];
				arr[i] = temp;
				x--;
				i++;
			}
		}
		else
		{
			int x = n-1;
			for(int j=0;j<(n-i)/2;j++)
			{
				int temp = arr[x];
				arr[x] = arr[i];
				arr[i] = temp;
				x--;
				i++;
			}
		}
		t += k;
		i = t;
	}

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}