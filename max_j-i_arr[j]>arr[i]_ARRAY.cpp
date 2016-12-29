#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int max(int x, int y)
{
    return x > y? x : y;
}
 
int min(int x, int y)
{
    return x < y? x : y;
}

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int Lmin[n],Mmax[n];

	Lmin[0] = arr[0];
	for(int i=1;i<n;i++)
		Lmin[i] = min(arr[i],Lmin[i-1]);

	Mmax[n-1] = arr[n-1];
	for(int i=n-2;i>=0;i--)
		Mmax[i] = max(arr[i], Mmax[i+1]);

	int j=0,k=0, max_dis = 0;
	while(j< n && k < n)
	{
		if(Mmax[k] > Lmin[j])
		{
			if(k-j > max_dis)
				max_dis = k-j;
			k++;
		}
		else
			j++;
	}
	cout<<"Maximum distance: "<<max_dis<<endl;
}