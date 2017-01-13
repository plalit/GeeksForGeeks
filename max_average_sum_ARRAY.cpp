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

	int max_sum = 0;
	int sum = arr[0] + arr[1] + arr[2] + arr[3];
	int j = 0, k = 4;

	while(k<n)
	{
		sum += arr[k++];
		sum -= arr[j++];
		if(sum > max_sum)
			max_sum = sum;
	}//1, 12, -5, -6, 50, 3
	cout<<max_sum/4<<endl;
}