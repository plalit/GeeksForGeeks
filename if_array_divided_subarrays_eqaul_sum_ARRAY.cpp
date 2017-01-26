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

	int lsum = 0;
	for(int i=0;i<n;i++)
		lsum += arr[i];

	int rsum = 0;
	bool flag = false;
	for(int i=0;i<n;i++)
	{
		if(lsum - arr[i] == rsum)
		{
			flag = true;
			break;
		}
		else
		{
			rsum += arr[i];
			lsum -= arr[i];
		}
	}// 6, 2, 3, 2, 1 true
	 // 6, 1, 3, 2, 5 true
	 // 6, -2, -3, 2, 3 true
	 // 6, -2, 3, 2, 3 false

	if(flag == false)
		cout<<"No"<<endl;
}