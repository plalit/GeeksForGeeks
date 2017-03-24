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

	int min = 1000;
	int min_2 = 1000;

	for(int i=0;i<n;i++)
	{
		if(arr[i] < min)
		{
			min_2 = min;
			min = arr[i];
		}
		else if(arr[i] < min_2)
			min_2 = arr[i];
	}

	int diff = min_2 - min;
	cout<<diff*n<<endl;
}