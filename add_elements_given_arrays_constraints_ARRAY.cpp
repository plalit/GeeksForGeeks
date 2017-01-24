#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	int arr[n],brr[m];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<m;i++)
		cin>>brr[i];

	int count = 0, i=0;
	for(i=0;i<n;i++)
	{
		if(m > i)
		{
			int sum = arr[i] + brr[i];
			if(sum > 9)
				count += 2;
			else
				count++;
			//cout<<i<<endl;
		}
		else
			count++;
	}
	if(m > i)
	{
		while(m > i)
		{
			count++;
			i++;
		}
	}
	cout<<count<<endl;
	//a = [9, 2, 3, 7, 9, 6]
	//b = [3, 1, 4, 7, 8, 7, 6, 9]

	int ref[count];
	// now run the loop to add the digits and store them in this refer array.

}