#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unordered_map>
#include<math.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	int arr[n], brr[m];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=0;i<m;i++)
		cin>>brr[i];

	unordered_map<int, int>map;

	for(int i=0;i<n;i++)
		map[arr[i]]++;

	int count = 0;

	for(int i=0;i<m;i++)
	{
		if(map[brr[i]] != 0)
			count++;
	}
	cout<<count<<endl;
	// Input : set1[] = {20, 21, 22}
    //    set2[] = {22, 23, 24, 25}
}
