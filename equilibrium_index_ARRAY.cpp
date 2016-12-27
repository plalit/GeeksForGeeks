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

	int sum = 0;
	for(int i=n-2;i>=0;i--)
		sum += arr[i];

	int left_sum = arr[0];
	
	for(int i=1;i<n-1;i++)
	{
		if(sum-(left_sum + arr[i]) == left_sum)
		{
			cout<<"Equilibrium index is: "<<i<<endl;
			break;
		}
		left_sum += arr[i];
	}
	cout<<endl;
}