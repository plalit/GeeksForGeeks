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

	int sum = 0, smallest = 10000;

	int j=0,i=0,size = 0;
	while(i<n || sum >= n)
	{
		if(sum < n)
		{
			sum += arr[i];
			i++;
		}
		else if(sum%n == 0)
		{
			size = i-j;
			if(smallest > size)
				smallest = size;
			sum -= arr[j];
			j++;
		}
		else
		{
			sum-= arr[j];
			j++;
		}
	} //1, 1, 2, 2, 4, 2
	cout<<smallest<<endl;
}