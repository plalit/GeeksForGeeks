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

	sort(arr, arr+n);

	int num1 = 0, num2 = 0;
	for(int i=0;i<n;i++)
	{
		num1 = num1*10 + arr[i];
		i++;
	}

	for(int i=1;i<n;i++)
	{
		num2 = num2*10 + arr[i];
		i++;
	}
	cout<<num1 + num2<<endl;
	// 6, 8, 4, 5, 2, 3
	// 5, 3, 0, 7, 4
}