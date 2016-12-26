#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	int arr[n];
	int brr[m];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=0;i<m;i++)
		cin>>brr[i];

	cout<<"Union of the two arrays:"<<endl;

	int j=0,k=0;

	while(j<n && k<m)
	{
		if(arr[j] > brr[k])
		{
			cout<<brr[k]<<" ";
			k++;
		}
		else if(brr[k] > arr[j])
		{
			cout<<arr[j]<<" ";
			j++;
		}
		else
		{
			cout<<arr[j]<<" ";
			j++;
			k++;
		}
	}

	while(j<n)
	{
		cout<<arr[j]<<" ";
		j++;
	}
	while(k<m)
	{
		cout<<brr[k]<<" ";
		k++;
	}
	cout<<endl;

	cout<<"Inersection of the two arrays: "<<endl;

	j=0,k=0;

	while(j<n && k<m)
	{
		if(arr[j] == brr[k])
		{
			cout<<arr[j]<<" ";
			j++;
			k++;
		}
		else if(arr[j] > brr[k])
			k++;
		else
			j++;
	}
	cout<<endl;

}