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


	int i=0,t=0;
	while(t<n)
	{
		int x = min(i+k-1, n-1);

		for(int j=0;j<k/2;j++)
		{
			int temp = arr[x];
			arr[x] = arr[i];
			arr[i] = temp;
			x--;
			i++;
		}

		t += 2*k;
		i=t;
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}