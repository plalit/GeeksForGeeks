#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	sort(arr, arr+n);
	int min = 100000;
	int diff;

	for(int i=0;i<n-1;i++)
	{
		diff = arr[i+1] - arr[i];
		if(diff < min)
			min = diff;
	} // 1, 5, 3, 19, 18, 25
	cout<<"Minimum difference between any 2 nos is: "<<min<<endl;
}