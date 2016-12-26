#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int t = m+n;
	int brr[t];
	int arr[n];

	for(int i=0;i<t;i++)
		cin>>brr[i];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	int j = t-1,k = t-1;
	int x = m;
	while(x)
	{
		if(brr[j] != 0)
		{
			brr[k] = brr[j];
			k--;
			x--;
		}
		j--;
	}
	for(int i=0;i<n;i++)
		brr[i] = 0;
	j = 0, k = n;
	int l = 0;
	int y = t;


	while(y)
	{
		if((arr[j] < brr[k]) && j < n && k < t)
		{
			brr[l++] = arr[j];
			j++;
		}
		else if((arr[j] > brr[k]) && j < n && k < t)
		{
			brr[l++] = brr[k];
			k++;
		}
		y--;
	}

	while(k<t)
		brr[l++] = brr[k++];

	while(j<n)
		brr[l++] = arr[j++];

	for(int i=0;i<t;i++)
		cout<<brr[i]<<" ";
	cout<<endl;

}