#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<deque>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int min = 1000, max =  -1000;

	std::deque<int>incr(k);
	std::deque<int>decr(k);
	int i=0, sum = 0;
	for(i=0;i<k;i++)
	{
		while(!incr.empty() && arr[i] > arr[incr.back()])
			incr.pop_back();
		while(!decr.empty() && arr[i] < arr[decr.back()])
			decr.pop_back();

		incr.push_back(i);
		decr.push_back(i);
	}

	for(;i<n;i++)
	{
		sum += arr[incr.front()] + arr[decr.front()];

		while(!incr.empty() && i-k >= incr.front())
			incr.pop_front();
		while(!decr.empty() && i-k >= decr.front())
			decr.pop_front();
		
		while(!incr.empty() && arr[i] > arr[incr.back()])
			incr.pop_back();
		while(!decr.empty() && arr[i] < arr[decr.back()])
			decr.pop_back();

		incr.push_back(i);
		decr.push_back(i);
	}
	sum += arr[incr.front()] + arr[decr.front()];
	cout<<sum<<endl;
	// 2, 5, -1, 7, -3, -1, -2
}