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

	int count_1 = 0;

	for(int i=0;i<n;i++)
	{
		if(arr[i] == 1)
			count_1++;
	}

	cout<<"Number: "<<(count_1*(count_1 - 1))/2<<endl;
}