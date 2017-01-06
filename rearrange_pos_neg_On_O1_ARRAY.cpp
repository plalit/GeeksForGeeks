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

	int j=0,k=n-1;

	while(k > j)
	{
		if(j%2 ==0 && arr[j] > 0)
		{
			while(arr[k] > 0 && k>j)
				k--;
			int temp = arr[j];
			arr[j] = arr[k];
			arr[k] = temp;
		}
		else if(j%2 != 0 && arr[j] < 0)
		{
			while(k > j && arr[k] < 0)
				k--;
			int temp = arr[j];
			arr[j] = arr[k];
			arr[k] = temp;
		}
		j++;
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;

}