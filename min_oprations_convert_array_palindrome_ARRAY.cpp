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

	int i=0, j=n-1;
	int count = 0;
	while(j > i)
	{
		if(arr[i] == arr[j])
		{
			i++;
			j--;
		}
		else if(arr[i] > arr[j])
		{
			count++;
			if(j != i+1)
				arr[j-1] += arr[j];
			else
				break;
			j--;
		}
		else
		{
			count++;
			if(j != i+1)
				arr[i+1] += arr[i];
			else
				break;
			i++;
		}
	} //1, 4, 5, 1
	  //11, 14, 15, 99
	  //15, 4, 15
	cout<<count<<endl;
}