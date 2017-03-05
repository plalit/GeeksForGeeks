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
	int i=0, j=0, length = 0;
	int sum = 0;
	while(j<n)
	{
		if(map[arr[j]] == 0)
			map[arr[j]]++;
		else
		{
			while(map[arr[i]] != 0)
			{
				map[arr[i]]--;
				i++;
			}
		}
		j++;
		if(i == 0)
			length = j-i;
		else
			length = j-i+1;
		sum += length*(length+1)/2;
		//cout<<"yo"<<endl;
	}

	cout<<sum<<endl;
}