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

	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum += i*arr[i] - (n-i-1)*arr[i];
	}
	cout<<sum<<endl;
}