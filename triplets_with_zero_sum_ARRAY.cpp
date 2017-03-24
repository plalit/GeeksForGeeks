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

	sort(arr, arr+n);

	for(int i=0;i<n-2;i++)
	{
		int req = 0-arr[i];

		int j = i+1;
		int k = n-1;
		while(k > j)
		{
			if(arr[j] + arr[k] == req)
			{
				cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
				break;
			}
			else if(arr[j] + arr[k] > req)
				k--;
			else
				j++;
		}
	}
	// 0, -1, 2, -3, 1
	// 1, -2, 1, 0, 5
}