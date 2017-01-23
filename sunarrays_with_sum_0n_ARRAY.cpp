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

	int sum = 0;
	for(int i=1;i<n;i++)
	{
		arr[i] = arr[i-1] + arr[i];
	}

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;

	for(int i=0;i<n;i++)
	{
		if(arr[i] == 0)
			cout<<0<<" "<<i<<endl;

		if(map[arr[i]] != 0)
			cout<<map[arr[i]]+1<<" "<<i<<endl;
		else
			map[arr[i]] = i;
	}
	//6, 3, -1, -3, 4, -2, 2,
    //         4, 6, -12, -7
}