#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

bool binary_search(int crr[], int low, int high, int element)
{
	if(high > low)
	{
		int mid = (low + high)/2;

		if(crr[mid] == element)
			return true;
		else if(crr[mid] > element)
			return binary_search(crr, low, mid-1, element);
		else
			return binary_search(crr, mid+1, high, element);
	}
	else
		return false;
}

int main()
{
	int n,m,l;
	cin>>n>>m>>l;

	int arr[n],brr[m], crr[l];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<m;i++)
		cin>>brr[i];
	for(int i=0;i<l;i++)
		cin>>crr[i];

	int j=0,k=0;

	while(j<n && k<m)
	{
		if(arr[j] < brr[k])
			j++;
		else if(brr[k] < arr[j])
			k++;
		else
		{
			bool check = binary_search(crr, 0, l-1, arr[j]);
			if(check)
				cout<<arr[j]<<" ";
			j++;k++;
		}
	}
	cout<<endl;
	//{1, 5, 10, 20, 40, 80}
	 //{6, 7, 20, 80, 100}
	 //{3, 4, 15, 20, 30, 70, 80, 120}
}