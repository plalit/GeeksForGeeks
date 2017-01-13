#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unordered_map>
#include<math.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	unordered_map<int, int>map;
	for(int i=0;i<n;i++)
	{
		int temp = arr[i]*arr[i];
		map[temp]++;
	}

	for(int i=0;i<n;i++)
		map[arr[i]]++;

	for(int i=0;i<n-1;i++)
	{
		int temp1 = arr[i]*arr[i];
		for(int j=i+1;j<n;j++)
		{
			int temp2 = arr[j]*arr[j];
			if(map[temp1 + temp2] > 0)
			{
				int temp3 = temp1 + temp2;
				temp3 = sqrt(temp3);
				cout<<arr[i]<<" "<<arr[j]<<" "<<temp3<<endl;
				
			}
		}
	}
}