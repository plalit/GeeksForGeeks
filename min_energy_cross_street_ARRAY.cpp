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

	int energy = 0;
	int till_now = 0;

	for(int i=0;i<n;i++)
	{
		if(arr[i] < 0)
		{
			if(till_now > abs(arr[i]))
				till_now -= arr[i];
			else if(till_now == abs(arr[i]))
			{
				till_now -= arr[i];
				energy += 1;
			}
			else
			{
				energy += (abs(arr[i]) - till_now + 1);
				till_now = 1;
			}
		}
		else if(arr[i] == 0)
		{
			if(till_now == 0)
				energy += 1;
		}
		else
		{
			till_now += arr[i];
		}
	} // 4, -10, 4, 4, 4
	  // 3, 5, 2, 6, 1
	  // -1, -5, -9

	if(energy == 0)
		cout<<1<<endl;
	else
		cout<<energy<<endl;
}