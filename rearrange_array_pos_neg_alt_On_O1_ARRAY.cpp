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

	int i=0, j=n-1;

	while(j > i)
	{
		if(i%2 == 0 && arr[i] > 0)
		{
			if(arr[j] > 0 && j > i)
			{
				while(arr[j] >0 && j>i)
					j--;
			}
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		else if(i%2 != 0 && arr[i] < 0)
		{
			if(arr[j] < 0 && j > i)
			{
				while(arr[j] < 0 && j>i)
					j--;
			}
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		i++;
	} // -5, 3, 4, 5, -6, -2, 8, 9, -1, -4

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}