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

	bool incr = false;
	bool decr = false;
	int inc = 0, dec = 0,i=0, max_length = 0;
	while(i<n-1)
	{
		while(arr[i+1] > arr[i] && i<n-1)
		{
			inc++;
			incr = true;
			i++;
		}

		while(arr[i] > arr[i+1]  && i<n-1)
		{
			dec++;
			decr = true;
			i++;
		}

		if(inc + dec > max_length && incr == true && decr == true)
		{
			max_length = inc + dec + 1;
			inc = 0;
			dec = 0;
			incr = false;
			decr = false;
		}
		else if(inc + dec > max_length)
		{
			max_length = inc + dec + 1;
			inc = 0;
			dec = 0;
			incr = false;
			decr = false;
		}
	}
	if(n ==1)
		cout<<"Max length bitonic solution: "<<1<<endl;
	else
		cout<<"Max length bitonic solution: "<<max_length<<endl;
}