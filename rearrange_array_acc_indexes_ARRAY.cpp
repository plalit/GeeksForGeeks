#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unordered_map>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n], brr[n];
	unordered_map<int , int>map;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
		cin>>brr[i];

	for(int i=0;i<n;i++)
		map[brr[i]] = arr[i];

	sort(brr, brr+n);

	for(int i=0;i<n;i++)
	{
		int temp = map[brr[i]];
		arr[i] = temp;
	}

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;

	for(int i=0;i<n;i++)
		cout<<brr[i]<<" ";
	cout<<endl;
}//    arr[]   = [50, 40, 70, 60, 90]
 //     index[] = [3,  0,  4,  1,  2]