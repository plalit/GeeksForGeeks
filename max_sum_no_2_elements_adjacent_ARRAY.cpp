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

	int taken = arr[n-1];
	int not_taken = arr[n-2];

	bool flag = true;
	for(int i = n-3;i>=0;i--)
	{
		if(flag == true)
		{
			flag = false;
			taken = max(taken + arr[i], taken + arr[i-1]);
		}
		else
		{
			flag = true;
			not_taken = max(not_taken + arr[i], not_taken + arr[i-1]);
		}
	}

	cout<<max(taken, not_taken)<<endl;
}