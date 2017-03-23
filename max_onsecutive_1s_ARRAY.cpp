#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unordered_map>

using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
		cin>>arr[i];

	int count = 0;
	int max = 0;

	int i=0;
	while(i < n)
	{
		while(arr[i] == 0)
		{
			count = 0;
			i++;
		}

		while(arr[i] == 1)
		{
			count++;
			i++;
		}
		if(count > max)
			max = count;
	}
}