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
	int triangles = 0;

	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			int k = n-1;
			while(k > j)
			{
				if(arr[i] + arr[j] > arr[k])
				{
					triangles += k-j;
					break;
				}
				else
					k--;
			}
		}//10, 21, 22, 100, 101, 200, 300
	}
	cout<<"Number of possible triangles: "<<triangles<<endl;
}