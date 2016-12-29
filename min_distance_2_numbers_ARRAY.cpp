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

	int num1, num2;

	cin>>num1>>num2;

	int min_dis,prev = 0, prev_ind = -1;
	bool flag = false;
	for(int i=0;i<n;i++)
	{
		if(arr[i] == num1 || arr[i] == num2)
		{
			if(prev != arr[i] && prev_ind != -1)
			{
				if(min_dis < (i - prev_ind))
				{
					min_dis = i - prev_ind;
				}
			}
			prev = arr[i];
			prev_ind = i;
		}
	}
	cout<<"max distance between these two numbers: "<<min_dis<<endl;
}