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

	int first = arr[0], second = 0, third = 0;

	for(int i=1;i<n;i++)
	{
		if(arr[i] > third)
		{
			int temp = third;
			third = arr[i];
			int temp2 = second;
			second = temp;
			first = temp2;
		}
		else if(arr[i] > second)
		{
			int temp = second;
			second = arr[i];
			first = temp;
		}
		else if(arr[i] > first)
			first = arr[i];
	}
	cout<<"Maximum product subsequence: "<<third<<" "<<second<<" "<<first<<endl;
}