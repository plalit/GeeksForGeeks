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

	int max=0, product = arr[0];

	int i=0;
	for(i=1;i<k;i++)
		product *= arr[i];
	int j=0;
	for(;i<n;i++)
	{
		int temp = product;
		product /= arr[j];
		j++;
		product *= arr[i];
		if(product > max && product > temp)
			max = product;
		else if(temp > max && temp > product)
			max = temp;
	}
	// 1, 5, 9, 8, 2, 4, 1, 8, 1, 2
	cout<<max<<endl;
}