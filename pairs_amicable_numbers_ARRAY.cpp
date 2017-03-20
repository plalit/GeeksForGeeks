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
		int sq = sqrt(arr[i]);
		int sum = 0;

		for(int j=1;j<=sq;j++)
		{
			if(arr[i]%j == 0)
			{
				if(arr[i]/j == j)
					sum += j;
				else
				{
					sum += j;
					sum += arr[i]/j;
				}
			}
		}
		if(map[sum] == 0)
			map[sum] = arr[i];
		else
			cout<<map[sum]<<" "<<arr[i]<<endl;
	}
	// 220, 284, 1184, 1210, 2 , 5
	// 2620, 2924, 5020, 5564, 6232, 6368
}