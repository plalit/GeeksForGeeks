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

	int min_sa = 10000;
	int j=0,k=0,total = 0;

	while(k < n)
	{
		if(total > sum)
		{
			int diff = k-j;
			if(diff < min_sa)
				min_sa = diff;
			total -= arr[j];
			j++;
		}
		else
		{
			total += arr[k];
			k++;
		}
	}
	//1, 4, 45, 6, 0, 19 -> 51
	//1, 11, 100, 1, 0, 200, 3, 2, 1, 250 -> 280
	//1, 10, 5, 2, 7 -> 9
	cout<<"smallest subarray with greater sum: "<<min_sa<<endl;
}