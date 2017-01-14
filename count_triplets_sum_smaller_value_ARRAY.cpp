#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,sum;
	cin>>n>>sum;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	sort(arr, arr+n);
	//5, 1, 3, 4, 7
	// 1 3 4 5 7

	int count = 0, total = 0,j,k=n-1;
	for(int i=0;i<n-2;i++)
	{
		j = i+1;
		int total = arr[i];
		while(k > j)
		{
			total += (arr[j] + arr[k]);
			if(total < sum)
			{
				count += k-j;
				total -= arr[j];
				total -= arr[k];
				j++;
			}
			else
			{
				total -= arr[k];
				total -= arr[j];
				k--;
			}
		}
	}
	cout<<"total number: "<<count<<endl;
}