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

	int j=0,k=0;
	while(n > k)
	{
		if(arr[k] != 0)
		{
			int temp = arr[k];
			arr[k] = arr[j];
			arr[j] = temp;
			k++;
			j++;
		}
		else if(arr[k] == 0 && arr[j] == 0)
			k++;
		else
		{
			j = k;
			while(arr[k] == 0)
				k++;
		}
	}
	cout<<"All zeroes moved to the end: "<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}