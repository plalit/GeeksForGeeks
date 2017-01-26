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

	for(int i=0;i<n-2;i++)
	{
		for(int j = i+1;j<n-1;j++)
		{
			if(arr[j]%arr[i] == 0)
			{
				int check = arr[j]/arr[i];
				if(map[check*arr[j]] != 0)
					cout<<arr[i]<<" "<<arr[j]<<" "<<check*arr[j]<<endl;
			}
		}
	} //1, 2, 6, 10, 18, 54
	 // 2, 8, 10, 15, 16, 30, 32, 64
	 // 1, 2, 6, 18, 36, 54
}