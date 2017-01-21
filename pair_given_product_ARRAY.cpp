#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unordered_map>
using namespace std;

int main()
{
	int n,sum;
	cin>>n>>sum;
	unordered_map<int, int>map;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	bool flag = false;
	for(int i=0;i<n;i++)
	{
		if(map[sum/arr[i]] > 0)
		{
			cout<<"Yes"<<endl;
			flag = true;
			break;
		}
		else
			map[arr[i]]++;
	}
	if(flag == false)
		cout<<"No"<<endl;
}