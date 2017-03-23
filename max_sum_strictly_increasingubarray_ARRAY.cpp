#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];

	int sum=0, max_sum = 0;
	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=0;i<n;i++)
	{
		if(arr[i] >= arr[i+1])
		{
			cout<<"no "<<arr[i]<<endl;
			sum += arr[i];
			if(sum > max_sum)
				max_sum = sum;
			sum = 0;
		}
		else if(arr[i+1] > arr[i])
		{
			cout<<"yo "<<arr[i]<<endl;
			sum += arr[i];
			if(sum > max_sum)
				max_sum = sum;
		}
	}
	// 1, 2, 3, 2, 5, 1, 7
	// 1, 2, 2, 4
	cout<<max_sum<<endl;
}