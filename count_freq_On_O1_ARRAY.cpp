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

	for(int i=0;i<n;i++)
	{
		int temp = arr[i]%(n+1);
		temp -=1;
		arr[temp] += (n+1);
	}//2, 3, 3, 2, 5

	for(int i=0;i<n;i++)
		arr[i] /= (n+1);

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}