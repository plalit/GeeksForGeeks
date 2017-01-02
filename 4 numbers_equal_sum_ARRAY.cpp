#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct sn
{
	int first;
	int second;
	int total;
};

int main()
{
	int n,sum;
	cin>>n>>sum;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int t = (n*(n+1))/2;
	struct sn brr[t];

	int k = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			brr[k].first = i;
			brr[k].second = j;
			brr[k].total = arr[i] + arr[j];
			k++;
		}
	}

	int i=0, j = t-1;
	while(j > i)
	{
		if(brr[i].total + brr[j].total == sum)
			printf ("%d, %d, %d, %d\n", arr[brr[i].first], arr[brr[i].second],
                                     arr[brr[j].first], arr[brr[j].second]);
		else if(brr[i].total + brr[j].total < sum)
			i++;
		else
			j--;
	}

}