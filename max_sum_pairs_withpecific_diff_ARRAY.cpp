#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	sort(arr, arr+n);

	int sum = 0;
	for(int i=n-1;i>=0;i--)
	{
		//cout<<arr[i]<<endl;
		if(arr[i] - arr[i-1] < k && i-1 >= 0)
		{
			sum += arr[i];
			sum += arr[i-1];
			i--;
		}
	} // 3, 5, 10, 15, 17, 12, 9
	cout<<sum<<endl;
}