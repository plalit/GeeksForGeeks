#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void rotate_array(int arr[], int start, int end, int n)
{
	int temp = arr[end];

	for(int i = end-1;i >= start;i--)
		arr[i+1] = arr[i];	
	arr[start] = temp;

}

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int j=0,k=0;
	while(j < n)
	{
		if(j%2 ==0 && arr[j] > 0 && j < n)
		{
			k = j+1;
			while(arr[k] > 0 && k < n-1)
				k++;
			if((arr[j] > 0 && arr[k] < 0) || (arr[j] < 0 && arr[k] > 0))
				rotate_array(arr,j,k,n);
		}
		else if(j%2 != 0 && arr[j] < 0 && j <n)
		{
			k = j+1;
			while(arr[k] < 0 && k < n-1)
				k++;
			if((arr[j] > 0 && arr[k] < 0) || (arr[j] < 0 && arr[k] > 0))
				rotate_array(arr, j, k,n);
		}
		j++;
	} // 1, 2, 3, -4, -1, 4

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}