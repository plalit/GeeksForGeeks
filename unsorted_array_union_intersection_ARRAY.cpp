#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unordered_map>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	unordered_map<int , int>map;

	int arr[n], brr[m];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=0;i<m;i++)
		cin>>brr[i];

	cout<<"Union of the two arrays: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
		map[arr[i]]++;
	}

	for(int i=0;i<m;i++)
	{
		if(map[brr[i]] == 0)
			cout<<brr[i]<<" ";
		else
			continue;
	}
	cout<<endl;

	cout<<"Intersectionof the two arrays: "<<endl;
	for(int i=0;i<m;i++)
	{
		if(map[brr[i]] > 0)
			cout<<brr[i]<<" ";
		else
			continue;
	}
	cout<<endl;
//arr1[] = {7, 1, 5, 2, 3, 6}
//arr2[] = {3, 8, 6, 20, 7}
}