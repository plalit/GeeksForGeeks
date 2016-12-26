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

	int j = 0,k = n-1;

	while(k>j)
	{
		if(arr[k] == 0 && arr[j] == 1)
		{
			int temp = arr[k];
			arr[k] = arr[j];
			arr[j] = temp;
			j++;
			k--;
		}
		else if(arr[j] == 0 && arr[k] == 1)
		{
			j++;
			k--;
		}
		else if (arr[j] == 0)
			j++;
		else
			k--;
	}

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	
}