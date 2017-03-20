#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int dp[n];
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	dp[0] = arr[0];
	dp[1] = arr[1];
	dp[2] = arr[2];
	dp[3] = arr[3];

	int i=0;
	for(i=4;i<n;i++)
		dp[i] = arr[i] + min(min(dp[i-1], dp[i-2]), min(dp[i-3], dp[i-4]));

	cout<<min(min(dp[i-1], dp[i-2]), min(dp[i-3], dp[i-4]))<<endl;
}