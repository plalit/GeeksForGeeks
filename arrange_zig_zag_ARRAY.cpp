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

	//4, 3, 7, 8, 6, 2, 1
	bool flag = false;
	for(int i=0;i<n-1;i++)
	{
		if(flag == true)
		{
			if(arr[i+1] > arr[i])
			{
				int temp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = temp;
			}
			flag = false;
		}
		else
		{
			if(arr[i+1] < arr[i])
			{
				int temp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = temp;
			}
			flag = true;
		}
	}

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}