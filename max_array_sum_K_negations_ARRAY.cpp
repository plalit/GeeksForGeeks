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

	while(k--)
	{
		int min = 10000, index = -1;
		for(int i=0;i<n;i++)
		{
			if(arr[i] < min)
			{
				index = i;
				min = arr[i];
			}
		}
		//cout<<min<<endl;
		arr[index] *= -1;
	}

	int sum = 0;
	for(int i=0;i<n;i++)
		sum += arr[i];

	cout<<sum<<endl;
	// -2, 0, 5, -1, 2 k=4
	//9, 8, 8, 5, k=3
}