#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unordered_map>

using namespace std;

int main()
{
	int n,sum,count = 0;
	cin>>n>>sum;

	unordered_map<int, int>map;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=0;i<n;i++)
		map[arr[i]]++;

	for(int i=0;i<n;i++)
	{
		count += map[sum - arr[i]];
		
		if(sum-arr[i] == arr[i])
			count--;
	} //10, 12, 10, 15, -1, 7, 6, 
      //             5, 4, 2, 1, 1, 1}

	cout<<count/2<<endl;
}