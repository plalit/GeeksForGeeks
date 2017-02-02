#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int counter = pow(2,n);


	for(int i=0;i<counter;i++)
	{
		bool lower = false;
		int first = 0, last = 0;

		for(int j=0;j<n;j++)
		{
			if(i & (1<<j))
			{
				if(lower == false)
				{
					lower = true;
					first = arr[j];
				}
				last = arr[j];

				cout<<arr[j]<<" ";
			}
		}
		cout<<"last(s)-first(s) = "<<last-first<<endl;
	}
}