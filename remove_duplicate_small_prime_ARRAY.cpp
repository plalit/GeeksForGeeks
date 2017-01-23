#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unordered_map>

using namespace std;

int main()
{
	int n;
	cin>>n;

	unordered_map<int, int>map;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=0;i<n;i++)
	{
		if(map[arr[i]] == 0)
			map[arr[i]]++;
		else
			arr[i] = -100;
	}

	for(int i=0;i<n;i++)
	{
		if(arr[i] != -100)
			cout<<arr[i]<<" ";
	}
	cout<<endl;
}