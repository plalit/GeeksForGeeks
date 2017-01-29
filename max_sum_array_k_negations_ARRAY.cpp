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
		int min = arr[0];
		int min_i = 0;
		for(int i=1;i<n;i++)
		{
			if(arr[i] < min)
			{
				min = arr[i];
				min_i = i;
			}
		}
		arr[min_i] *= -1;
	}// -2, 0, 5, -1, 2
	 // 9, 8, 8, 5

	int sum = 0;
	for(int i=0;i<n;i++)
		sum += arr[i];

	cout<<sum<<endl;
}