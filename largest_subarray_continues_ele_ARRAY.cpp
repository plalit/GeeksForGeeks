#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{//1, 56, 58, 57, 90, 92, 94, 93, 91, 45
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int longest = 0;

	sort(arr, arr+n);
	int length = 1,j=0;
	while(j < n)
	{
		if(arr[j] + 1 == arr[j+1])
			length++;
		else
		{
			if(length > longest)
				longest = length;
			length = 1;
		}
		j++;
	}
	cout<<longest<<endl;
}