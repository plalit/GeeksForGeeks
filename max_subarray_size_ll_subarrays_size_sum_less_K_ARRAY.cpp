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

	sort(arr, arr+n);
	int size = 1, sum = arr[n-1];

	if(sum > k)
		cout<<-1<<endl;
	else
	{
		for(int i=n-2;i>=0;i--)
		{
			if(sum >= k)
			{
				cout<<size-1<<endl;
				break;
			}
			else if(sum < k)
			{
				sum += arr[i];
				size++;
			}
		}
	}
}