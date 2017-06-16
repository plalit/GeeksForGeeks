#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,sum;
	cin>>n>>sum;

	int arr[n], brr[n], crr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
		cin>>brr[i];
	for(int i=0;i<n;i++)
		cin>>crr[i];

	sort(arr, arr+n);
	sort(brr, brr+n);

	int j=0,k = n-1;
	bool flag = false;
	for(int i=0;i<n;i++)
	{
		int rem = sum - crr[i];

		while(k > j)
		{
			if(arr[k] + brr[j] == rem)
			{
				cout<<arr[k]<<" "<<brr[j]<<" "<<crr[i]<<endl;
				flag = true;
				break;
			}
			else if(arr[k] + brr[j] > rem)
				k--;
			else
				j++;
		}
		if(flag)
			break;
	}
	// Input : a1[] = { 1 , 2 , 3 , 4 , 5 };
	// a2[] = { 2 , 3 , 6 , 1 , 2 };
	// a3[] = { 3 , 2 , 4 , 5 , 6 }; 
	// Input : a1[] = { 1 , 2 , 3 , 4 , 5 };
	// a2[] = { 2 , 3 , 6 , 1 , 2 };
	// a3[] = { 3 , 2 , 4 , 5 , 6 };  
    //    sum = 9
}