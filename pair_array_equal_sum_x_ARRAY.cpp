#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,sum;
	cin>>n>>sum;

	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	int max = arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}

	int refer[max];
	bool flag = false;
	for(int i=0;i<n;i++)
	{
		if(refer[arr[i]] == 1)
		{
			cout<<"Elements found: "<<arr[i]<<" "<<sum-arr[i]<<endl;
			flag = true;
			break;
		}
		else
		{
			refer[sum- arr[i]] = 1;
		}
	}

	if(flag == false)
		cout<<"Elements not found"<<endl;
}