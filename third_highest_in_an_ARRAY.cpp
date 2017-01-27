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

	int first = -100000, second = -100000, third = -100000;

	for(int i=0;i<n;i++)
	{
		if(arr[i] > third)
		{
			int temp = third;
			first = second;
			second = temp;
			third = arr[i];
		}
		else if(arr[i] > second)
		{
			first = second;
			second = arr[i];
		}
		else if(arr[i] > first)
			first = arr[i];
	} // 19, -10, 20, 14, 2, 16, 10
	cout<<first<<endl;
}