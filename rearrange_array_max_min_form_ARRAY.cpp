#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int largest = arr[n-1] +1, max = n-1, min = 0;
	for(int i=0;i<n;i++)
	{

		if(i%2 == 0)
		{
			arr[i] = (arr[max]%largest)*largest + arr[i];
			max--;
		}
		else
		{
			arr[i] = (arr[min]%largest)*largest + arr[i];
			min++;
		}
	}
	for(int i=0;i<n;i++)
		arr[i] /= largest;

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
} //1 2 3 4 5 6 7 8 9