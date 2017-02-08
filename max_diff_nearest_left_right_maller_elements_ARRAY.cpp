#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stack>

using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
		cin>>arr[i];

	int left[n],right[n];
	for(int i=0;i<n;i++)
	{
		left[i] = -1;
		right[i] = -1;
	}

	stack<int>s;

	for(int i=0;i<n;i++)
	{
		while(!s.empty() && s.top > arr[i])
			s.pop();

		if(!s.empty)
			left[i] = s.top;
		else
			left[i] = 0;

		s.push(arr[i]);
	}

}