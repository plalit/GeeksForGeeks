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

	int ref[n+1];
	for(int i=0;i<n+1;i++)
		ref[i] = 0;

	for(int i=0;i<n;i++)
		ref[arr[i]]++;

	bool flag = true;
	for(int i=1;i<n;i++)
	{
		if(ref[i] == 0)
			flag = false;
	}

	if(flag == true)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}