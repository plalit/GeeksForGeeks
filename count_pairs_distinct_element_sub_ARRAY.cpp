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
	int length = 1;
	
	map[arr[0]]++;
	int index= 0,count = 0;

	for(int i=1;i<n;i++)
	{
		if(map[arr[i]] ==0)
		{
			map[arr[i]]++;
			count += (i-index);
		}
		else
		{
			while(arr[i] != arr[index])
				index++;
			map[arr[index]]--;
			index++;
			count += (i-index);
		} // 1, 4, 2, 4, 3, 2
	}
	cout<<count<<endl;
}