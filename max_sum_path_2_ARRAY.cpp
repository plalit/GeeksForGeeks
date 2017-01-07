#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	int arr[n],brr[m];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<m;i++)
		cin>>brr[i];

	int sum1 = 0,sum2 = 0,result = 0;

	int j=0,k=0;
	while(j<n && k<m)
	{
		if(arr[j] < brr[k])
		{
			sum1 += arr[j];
			j++;
		}
		else if(brr[k] < arr[j])
		{
			sum2 += brr[k];
			k++;
		}
		else
		{
			result += max(sum1,sum2);
			result += arr[j];
			j++;
			k++;
			sum1 = 0, sum2 = 0;
		}
	}//   ar1[] = {2, 3, 7, 10, 12, 15, 30, 34}
     //   ar2[] = {1, 5, 7, 8, 10, 15, 16, 19}

	while(j<n)
	{
		result += arr[j];
		j++;
	}
	while(k < m)
	{
		result += brr[k];
		k++;
	}
	cout<<"Maximum sum path of 2 arrays: "<<result<<endl;
}