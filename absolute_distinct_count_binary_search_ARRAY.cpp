#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

bool binary_search(int arr[], int val, int low, int high)
{
	if(high >low)
	{
		int mid = (high + low)/2;

		if(arr[mid] == val)
			return true;
		else if(arr[mid] > val)
			return binary_search(arr, val, low, mid-1);
		else
			return binary_search(arr, val, mid+1, high);
	}
	else
		return false;
}

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int count = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] <= 0)
		{
			count++;
			while(arr[i] == arr[i+1])
				i++;
		}

		if(arr[i] > 0)
		{
			bool check = binary_search(arr, arr[i]*-1, 0 , n-1);
			if(check == false)
				count++;
			while(arr[i] == arr[i+1])
				i++;
		}
	} // -3, -2, 0, 3, 4, 5
	 // -1, -1, -1, -1, 0, 1, 1, 1, 1

	cout<<count<<endl;
}