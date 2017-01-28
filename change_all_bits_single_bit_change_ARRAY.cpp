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

	int zero = 0, one = 0;

	for(int i=0;i<n;i++)
	{
		if(arr[i] == 1)
			one++;
		else
			zero++;
	}

	if(one == 1 || zero == 1)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
}