#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct interval
{
	int start;
	int end;
};

bool compare(interval i1, interval i2)
{
	return (i1.start < i2.start);
}

int main()
{
	int n;
	cin>>n;

	interval arr[n];
	interval brr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i].start>>arr[i].end;

	sort(arr, arr+n, compare);

	int j = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i+1].start < arr[i].end)
		{
			interval x = arr[i];
			while(x.end > arr[i+1].start)
				i++;

			brr[j].start = x.start;
			brr[j].end = arr[i].end;
			j++;
		}
		else
		{
			brr[j].start = arr[i].start;
			brr[j].end = arr[i].end;
			j++;
		}
	}

	for(int i=0;i<j;i++)
		cout<<brr[i].start<<" "<<brr[i].end<<endl;
}