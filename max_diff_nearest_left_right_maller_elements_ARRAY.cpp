#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stack>
//#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int left[n],right[n];
	for(int i=0;i<n;i++)
	{
		left[i] = -1;
		right[i] = -1;
	}

	std::stack<int>s;
	std::stack<int>r;

	for(int i=0;i<n;i++)
	{
		while(!s.empty() && s.top() >= arr[i])
			s.pop();

		if(!s.empty())
			left[i] = s.top();
		else
			left[i] = 0;

		s.push(arr[i]);
	}

	for(int i=n-1;i>=0;i--)
	{
		while(!r.empty() && r.top() >= arr[i])
			r.pop();

		if(!r.empty())
			right[i] = r.top();
		else
			right[i] = 0;

		r.push(arr[i]);
	} // 2, 4, 8, 7, 7, 9, 3

	for(int i=0;i<n;i++)
		cout<<right[i]<<" ";
	cout<<endl;

}