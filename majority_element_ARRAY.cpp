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

	int maj = arr[0];
	int count = 1;

	for(int i=1;i<n;i++)
	{
		if(arr[i] == maj)
			count++;
		else
		{
			count--;
			if(count == 0)
			{
				maj = arr[i];
				count = 1;
			}
		}
	}
	cout<<"Majority element: "<<maj<<endl;
}