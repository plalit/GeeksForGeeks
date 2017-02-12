#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int count = 1;

	for(int i=0;i<n-1;i++)
	{
		if(arr[i] != arr[i+1])
			count++;
	}
	//cout<<count<<endl;
	//1, 2, 3, 3, 3, 3
	//1, 2, 3, 3, 3, 3, 4, 4
	//1, 2, 3, 4, 4, 5, 6, 6, 6, 7

	int count2 = 0;
	count /=2;
	if(count%2 == 0)
		cout<<-1<<endl;
	else
	{
		for(int i=0;i<n;i++)
		{
			if(count == count2)
			{
				cout<<arr[i]<<endl;
				break;
			}
			count2++;
		}
	}
}