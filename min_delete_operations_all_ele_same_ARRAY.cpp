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
		map[arr[i]]++;

	int freq = 0;

	for(int i=0;i<n;i++)
	{
		if(map[arr[i]] > freq)
			freq = map[arr[i]];
	}
	// 4, 3, 4, 4, 2, 4
	cout<<n-freq<<endl;
}