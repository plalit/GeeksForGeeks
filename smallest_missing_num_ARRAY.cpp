#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int binary_search(int arr[], int low, int high)
{
	if(high >= low)
	{
		int mid = (high + low)/2;

		if(arr[mid] != mid && arr[mid-1] == mid-1)
			return mid;
		else if(arr[mid-1] != mid-1)
			return mid-1;
		else if(arr[mid] == mid)
			return binary_search(arr, mid+1, high);
		else
			return binary_search(arr, low, mid-1);
	}
	return -1;
}

int main()
{
	int n,m, num;
	cin>>n>>m;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	if(arr[0] != 0)
		cout<<"Smallest missing number is: "<<0<<endl;
	else
	{
		num = binary_search(arr, 0, n-1);

		if(num == -1)
			cout<<"Smallest missing number is: "<<n<<endl;
		else
			cout<<"Smallest missing number is: "<<num<<endl;
	}
}