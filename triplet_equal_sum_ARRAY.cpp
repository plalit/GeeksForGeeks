#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
	int n,sum;
	cin>>n>>sum;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	sort(arr, arr+n);

	int k = n-1;
	bool flag = false;
	
	for(int i=0;i<n-2;i++)
	{
		int total = sum - arr[i];
		int j = i+1, k = n-1;
		while(k > j)
		{
			if(arr[j] + arr[k] == total)
			{
				cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
				flag = true;
				break;
			}
			else if(arr[j] + arr[k] < total)
				j++;
			else if(arr[j] + arr[k] > total)
				k--;
		}
		if(flag)
			break;
	}
	if(flag == false)
		cout<<"Sum not possible"<<endl;
}