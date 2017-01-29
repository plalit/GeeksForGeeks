#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unordered_map>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	unordered_map<int, int>map;

	for(int i=0;i<n;i++)
		map[arr[i]]++;

	for(int i=0;i<n;i++)
	{
		if(map[i] != 0)
		{
			map[i]--;
			arr[i] = 1000;
		}
		else if(map[n-i-1] != 0)
		{
			map[n-i-1]--;
			arr[i] = 1000;
		}
	}

	bool flag = true;
	for(int i=0;i<n;i++)
	{
		if(arr[i] != 1000)
		{
			flag = false;
			break;
		}
	}// 1, 6, 5, 4, 3, 2, 1
	 //2, 1, 5, 2, 1, 5

	if(flag)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}