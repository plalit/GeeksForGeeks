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

	int one = 0, zero = 0;

	for(int i=0;i<n;i++)
	{
		if(arr[i] == 0)
			zero++;
		else
			one++;
	} //0, 1, 0, 0, 1, 1, 0
	  //0, 0, 0, 1, 0, 1
	//cout<<zero<<" "<<one<<endl;
	int i=0, j=n-1;
	int max_zero = 0, count = 0, zero_count = zero;
	while(j >= i)
	{
		while(arr[j] == 0)
		{
			j--;
			zero--;
		}
		while(arr[i] == 0)
		{
			i++;
			zero--;
		}

		count = (j-i+1);
		if(count > max_zero)
			max_zero = count;

		int count_one = 0;
		while(arr[i] == 1)
		{
			i++;
			count_one++;
		}
		if(count_one > max_zero)
			count = count_one;
	}
	//cout<<count<<endl;
	cout<<zero_count+count<<endl;
}