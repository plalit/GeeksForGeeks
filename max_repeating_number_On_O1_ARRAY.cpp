#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=0;i<n;i++)
	{
		int x = arr[i]%n;
		arr[x] += n;
	}

	int max = arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}// 0, 2, 0, 2, 3, 8, 0, 9, 2, 3

	cout<<"maximum occuring element is: "<<max%n<<endl;
}