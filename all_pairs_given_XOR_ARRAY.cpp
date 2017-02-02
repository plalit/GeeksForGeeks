#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unordered_map>

using namespace std;

int main()
{
	int n,x;
	cin>>n>>x;

	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	unordered_map<int, int>map;

	for(int i=0;i<n;i++)
		map[arr[i]]++;

	int count = 0;
	for(int i=0;i<n;i++)
	{
		if(map[arr[i]^x] != 0)
		{
			count++;
			map[arr[i]]--;
		}
	} // 5, 4, 10, 15, 7, 6 x= 5
	  // 3, 6, 8, 10, 15, 50 x = 5
	cout<<count<<endl;
}